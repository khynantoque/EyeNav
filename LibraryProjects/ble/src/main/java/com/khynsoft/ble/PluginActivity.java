package com.khynsoft.ble;

import android.Manifest;
import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanFilter;
import android.bluetooth.le.ScanRecord;
import android.bluetooth.le.ScanResult;
import android.bluetooth.le.ScanSettings;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.os.AsyncTask;
import android.os.Build;
import android.os.Bundle;
import android.provider.Settings;
import android.widget.Toast;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AlertDialog;
import androidx.core.app.ActivityCompat;

import com.khynsoft.ble.trilateration.NonLinearLeastSquaresSolver;
import com.khynsoft.ble.trilateration.TrilaterationFunction;
import com.khynsoft.ble.vanillable.KalmanFilter;
import com.khynsoft.ble.vanillable.RSSISmoother;

import org.apache.commons.math3.fitting.leastsquares.LeastSquaresOptimizer;
import org.apache.commons.math3.fitting.leastsquares.LevenbergMarquardtOptimizer;

import java.util.ArrayList;
import java.util.List;

public class PluginActivity extends UnityPlayerActivity {

    private final static int REQUEST_ENABLE_BT = 1;
    private static final int PERMISSION_REQUEST_COARSE_LOCATION = 1;

    //private BluetoothLeScannerCompat scanner;
    private static int rssi1 = 0;
    private static int rssi2 = 0;
    private static int rssi3 = 0;
    private static int rssi4 = 0;

    private boolean isScanningStarted = false;

    private final double[] posBeacon1 = new double[2];
    private final double[] posBeacon2 = new double[2];
    private final double[] posBeacon3 = new double[2];
    private final double[] posBeacon4 = new double[2];

    BluetoothManager btManager;
    BluetoothAdapter btAdapter;
    BluetoothLeScanner btScanner;

    private ScanSettings settings;
    private List<ScanFilter> filters;

    RSSISmoother smoothRssi1 = new RSSISmoother();
    RSSISmoother smoothRssi2 = new RSSISmoother();
    RSSISmoother smoothRssi3 = new RSSISmoother();
    RSSISmoother smoothRssi4 = new RSSISmoother();

    KalmanFilter kf1 = new KalmanFilter(0.008, 0.1);
    KalmanFilter kf2 = new KalmanFilter(0.008, 0.1);
    KalmanFilter kf3 = new KalmanFilter(0.008, 0.1);
    KalmanFilter kf4 = new KalmanFilter(0.008, 0.1);

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        checkPerms();
        Toast.makeText(this, "Powered by Cor Jesu College", Toast.LENGTH_SHORT).show();
//        scanner = BluetoothLeScannerCompat.getScanner();

        //dependency
//        startNordicScan();

        btManager = (BluetoothManager) getSystemService(BLUETOOTH_SERVICE);
        btAdapter = btManager.getAdapter();
        btScanner = btAdapter.getBluetoothLeScanner();

        if (btAdapter != null && !btAdapter.isEnabled()) {
            Intent enableIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableIntent,REQUEST_ENABLE_BT);
        }

        // Make sure we have access coarse location enabled, if not, prompt the user to enable it
        if (this.checkSelfPermission(Manifest.permission.ACCESS_COARSE_LOCATION) != PackageManager.PERMISSION_GRANTED) {
            final AlertDialog.Builder builder = new AlertDialog.Builder(this);
            builder.setTitle("This app needs location access");
            builder.setMessage("Please grant location access so this app can detect peripherals.");
            builder.setPositiveButton(android.R.string.ok, null);
            builder.setOnDismissListener(new DialogInterface.OnDismissListener() {
                @Override
                public void onDismiss(DialogInterface dialog) {
                    requestPermissions(new String[]{Manifest.permission.ACCESS_COARSE_LOCATION}, PERMISSION_REQUEST_COARSE_LOCATION);
                }
            });
            builder.show();
        }

        settings = new ScanSettings.Builder()
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .setLegacy(false)
                .setMatchMode(ScanSettings.MATCH_MODE_AGGRESSIVE)
                .setNumOfMatches(ScanSettings.MATCH_NUM_MAX_ADVERTISEMENT)
                .build();
        filters = new ArrayList<>();
        filters.add(new ScanFilter.Builder().build());
        if(btScanner != null) {
            AsyncTask.execute(() -> btScanner.startScan(filters, settings, leScanCallback));
            isScanningStarted = true;
            Toast.makeText(this, "Scanning...", Toast.LENGTH_SHORT).show();
        } else {
            requestBluetooth();
        }


    }

    public void requestBluetooth() {
        if (btAdapter != null && !btAdapter.isEnabled()) {
            Intent enableIntent = new Intent(BluetoothAdapter.ACTION_REQUEST_ENABLE);
            startActivityForResult(enableIntent, REQUEST_ENABLE_BT);
        }
    }

    // Device scan callback.
    private final ScanCallback leScanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, ScanResult result) {
            if (result != null) {
                BluetoothDevice device = result.getDevice();
                switch (device.toString()) {
                    case "E8:04:2B:72:66:40":
                        rssi1 = result.getRssi();
                        break;
                    case "F3:C9:5C:B3:60:BD":
                        rssi2 = result.getRssi();
                        break;
                    case "D1:8A:3C:8D:55:3F":
                        rssi3 = result.getRssi();
                        break;
                    case "FD:01:70:44:9D:5F":
                        rssi4 = result.getRssi();
                        break;
                }
            } else {
                Toast.makeText(PluginActivity.this, "Result is null!", Toast.LENGTH_SHORT).show();
            }
        }

        @Override
        public void onScanFailed(int errorCode) {
            Toast.makeText(PluginActivity.this, "Scan Failed!", Toast.LENGTH_SHORT).show();
        }
    };

    @Override
    public void onRequestPermissionsResult(int requestCode, @NonNull String[] permissions, @NonNull int[] grantResults) {
        if (requestCode == PERMISSION_REQUEST_COARSE_LOCATION) {
            if (grantResults[0] == PackageManager.PERMISSION_GRANTED) {
                System.out.println("coarse location permission granted");
            } else {
                final AlertDialog.Builder builder = new AlertDialog.Builder(this);
                builder.setTitle("Functionality limited");
                builder.setMessage("Since location access has not been granted, this app will not be able to discover beacons when in the background.");
                builder.setPositiveButton(android.R.string.ok, null);
                builder.setOnDismissListener(dialog -> {
                });
                builder.show();
            }
        }
    }

    public void ShowShortToast(String msg) {
        Toast.makeText(this, msg, Toast.LENGTH_SHORT).show();
    }

    public void ShowLongToast(String msg) {
        Toast.makeText(this, msg, Toast.LENGTH_LONG).show();
    }

    public void startScan() {
        if(btScanner != null) {
            AsyncTask.execute(() -> btScanner.startScan(filters, settings, leScanCallback));
            isScanningStarted = true;
            Toast.makeText(this, "Scanning...", Toast.LENGTH_SHORT).show();
        } else {
            requestBluetooth();
        }
    }

    public void stopScan() {
        if(btScanner != null)
            AsyncTask.execute(() -> btScanner.stopScan(leScanCallback));
        else {
            requestBluetooth();
            btScanner = btAdapter.getBluetoothLeScanner();
        }
    }

    @Override
    protected void onStart() {
        super.onStart();
        if(!isScanningStarted) {
            startScan();
        }
    }

    @Override
    protected void onStop() {
        super.onStop();
        stopScan();
        if(isScanningStarted)
            isScanningStarted = false;
    }

    public int getRssi1() {
        return rssi1;
    }

    public int getRssi2() {
        return rssi2;
    }

    public int getRssi3() {
        return rssi3;
    }

    public int getRssi4() {
        return rssi4;
    }

    public static double getDistance(double rssi, double txPower) {
        double ratio;
        ratio = rssi / txPower;//from   ww  w. j a  va  2 s.c  o  m
        if (ratio < 1.0) {
            return Math.pow(ratio, 10);
        } else {
            double distance;
            //distance = (0.89976) * Math.pow(ratio, 7.7095) + 0.111;
            distance = Math.pow(10, (-rssi + txPower) / (10 * 2.5));
            // if (distance < Threshold)
            return distance;
            // else
            // return Threshold;
        }
    }

    public double getDistance1() {
        return getDistance(getFilteredRssi(1), -59);
    }
    public double getDistance2() {
        return getDistance(getFilteredRssi(2), -59);
    }
    public double getDistance3() {
        return getDistance(getFilteredRssi(3), -59);
    }
    public double getDistance4() {
        return getDistance(getFilteredRssi(4), -59);
    }

    public int getSmoothRssi(int beaconNum) {
        switch(beaconNum) {
            case 1: return smoothRssi1.getFilteredRssi(rssi1);
            case 2: return smoothRssi2.getFilteredRssi(rssi2);
            case 3: return smoothRssi3.getFilteredRssi(rssi3);
            case 4: return smoothRssi4.getFilteredRssi(rssi4);
        }
        return 0;
    }

    public double getFilteredRssi(int beaconNum) {
        switch(beaconNum) {
            case 1: return kf1.filter(rssi1);
            case 2: return kf2.filter(rssi2);
            case 3: return kf3.filter(rssi3);
            case 4: return kf4.filter(rssi4);
        }
        return 0;
    }

    public double getSmoothDistance(int beaconNum) {
        switch(beaconNum) {
            case 1: return getDistance(smoothRssi1.getMeanRSSI(), -59);
            case 2: return getDistance(smoothRssi2.getMeanRSSI(), -59);
            case 3: return getDistance(smoothRssi3.getMeanRSSI(), -59);
            case 4: return getDistance(smoothRssi4.getMeanRSSI(), -59);
        }
        return 0.0;
    }

    public void setPosBeacon1(double x, double y) {
        this.posBeacon1[0] = x;
        this.posBeacon1[1] = y;
    }

    public void setPosBeacon2(double x, double y) {
        this.posBeacon2[0] = x;
        this.posBeacon2[1] = y;
    }

    public void setPosBeacon3(double x, double y) {
        this.posBeacon3[0] = x;
        this.posBeacon3[1] = y;
    }

    public void setPosBeacon4(double x, double y) {
        this.posBeacon4[0] = x;
        this.posBeacon4[1] = y;
    }

    public double[] getUserPosition() {
        double[][] positions = new double[][] { posBeacon1, posBeacon2, posBeacon3, posBeacon4 };
        double[] distances = new double[] {
                getDistance1(),
                getDistance2(),
                getDistance3(),
                getDistance4(),
        };
        NonLinearLeastSquaresSolver solver = new NonLinearLeastSquaresSolver(new TrilaterationFunction(positions, distances), new LevenbergMarquardtOptimizer());
        LeastSquaresOptimizer.Optimum optimum = solver.solve();

        // error and geometry information; may throw SingularMatrixException depending the threshold argument provided
//        RealVector standardDeviation = optimum.getSigma(0);
//        RealMatrix covarianceMatrix = optimum.getCovariances(0);
        return optimum.getPoint().toArray();
    }

    public double[] getFilteredPosition() {
        double[][] positions = new double[][] { posBeacon1, posBeacon2, posBeacon3, posBeacon4 };
        double[] distances = new double[] {
                getSmoothDistance(1),
                getSmoothDistance(2),
                getSmoothDistance(3),
                getSmoothDistance(4)
        };
        NonLinearLeastSquaresSolver solver = new NonLinearLeastSquaresSolver(new TrilaterationFunction(positions, distances), new LevenbergMarquardtOptimizer());
        LeastSquaresOptimizer.Optimum optimum = solver.solve();

        // error and geometry information; may throw SingularMatrixException depending the threshold argument provided
//        RealVector standardDeviation = optimum.getSigma(0);
//        RealMatrix covarianceMatrix = optimum.getCovariances(0);
        return optimum.getPoint().toArray();
    }

    private void checkPerms() {
        String locationPermission = Build.VERSION.SDK_INT >= 29 ? Manifest.permission.ACCESS_FINE_LOCATION : Manifest.permission.ACCESS_COARSE_LOCATION;

        this.requestPermissions(
                new String[]{
                        locationPermission,
                        Manifest.permission.BLUETOOTH_ADMIN
                }, 0);
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            this.requestPermissions(
                    new String[]{
                            Manifest.permission.BLUETOOTH_SCAN
                    }, 0);
        }

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.S) {
            if (PluginActivity.this.checkSelfPermission(Manifest.permission.BLUETOOTH_CONNECT) != PackageManager.PERMISSION_GRANTED) {
                PluginActivity.this.requestPermissions(new String[]{
                        Manifest.permission.BLUETOOTH_CONNECT
                }, 0);
            }
        } else if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.R) {
            PluginActivity.this.requestPermissions(new String[]{
                    Manifest.permission.BLUETOOTH
            }, 0);
        }
    }

    @Override
    protected void onDestroy() {
        super.onDestroy();
        stopScan();
    }
}
