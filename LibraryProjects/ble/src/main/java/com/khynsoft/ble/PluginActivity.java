package com.khynsoft.ble;

import android.Manifest;
import android.app.AlertDialog;
import android.bluetooth.BluetoothDevice;
import android.content.Context;
import android.content.DialogInterface;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.location.LocationManager;
import android.os.Build;
import android.os.Bundle;
import android.widget.Toast;

import androidx.annotation.NonNull;

import com.khynsoft.ble.nrf.BluetoothLeScannerCompat;
import com.khynsoft.ble.nrf.ScanCallback;
import com.khynsoft.ble.nrf.ScanFilter;
import com.khynsoft.ble.nrf.ScanResult;
import com.khynsoft.ble.nrf.ScanSettings;
import com.khynsoft.ble.trilateration.NonLinearLeastSquaresSolver;
import com.khynsoft.ble.trilateration.TrilaterationFunction;

import org.apache.commons.math3.fitting.leastsquares.LeastSquaresOptimizer;
import org.apache.commons.math3.fitting.leastsquares.LevenbergMarquardtOptimizer;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class PluginActivity extends UnityPlayerActivity {

    private BluetoothLeScannerCompat scanner;
    private static int rssi1 = 0;
    private static int rssi2 = 0;
    private static int rssi3 = 0;
    private static int rssi4 = 0;

    ScanCallback scanCallback = new ScanCallback() {
        @Override
        public void onScanResult(int callbackType, @NonNull ScanResult result) {
            BluetoothDevice device = result.getDevice();
            if (device.getName() != null || !device.getName().isEmpty()) {
                switch (device.getName()) {
                    case "KunwareBLE1":
                        rssi1 = result.getRssi();
                        break;
                    case "KunwareBLE2":
                        rssi2 = result.getRssi();
                        break;
                    case "KunwareBLE3":
                        rssi3 = result.getRssi();
                        break;
                    case "KunwareBLE4":
                        rssi4 = result.getRssi();
                        break;
                }
            }
        }

        @Override
        public void onScanFailed(int errorCode) {
            super.onScanFailed(errorCode);
            Toast.makeText(PluginActivity.this, "Scan failed!", Toast.LENGTH_SHORT).show();
        }
    };

    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        Toast.makeText(this, "by Khyn Antoque", Toast.LENGTH_SHORT).show();
        scanner = BluetoothLeScannerCompat.getScanner();

        ScanSettings settings = new ScanSettings.Builder()
                .setLegacy(false)
                .setScanMode(ScanSettings.SCAN_MODE_LOW_LATENCY)
                .setMatchMode(ScanSettings.MATCH_MODE_AGGRESSIVE)
                .setNumOfMatches(ScanSettings.MATCH_NUM_MAX_ADVERTISEMENT)
                .build();

        List<ScanFilter> filters = new ArrayList<>();
        filters.add(new ScanFilter.Builder().build());
        Toast.makeText(this, "Scanning...", Toast.LENGTH_SHORT).show();

        String locationPermission = Build.VERSION.SDK_INT >= 29 ? Manifest.permission.ACCESS_FINE_LOCATION : Manifest.permission.ACCESS_COARSE_LOCATION;

        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.M) {
            this.requestPermissions(
                    new String[]{
                            locationPermission,
                            Manifest.permission.BLUETOOTH_ADMIN
                    }, 0);
        }
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
        try {
            scanner.startScan(filters, settings, scanCallback);
        } catch (Exception e) {
            Toast.makeText(this, "Error: " + e.getMessage(), Toast.LENGTH_SHORT).show();
        }
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

    public double getDistance(int rssi, int mPow, int n) {
        return Math.pow(10, (mPow - rssi) / (10.0 * n));
    }

    public double getDistance1() {
        return getDistance(rssi1, -59, 2);
    }
    public double getDistance2() {
        return getDistance(rssi2, -59, 2);
    }
    public double getDistance3() {
        return getDistance(rssi3, -59, 2);
    }
    public double getDistance4() {
        return getDistance(rssi4, -59, 2);
    }

    public double[] getUserPosition() {
        double[][] positions = new double[][] { { 2.125, 0.046228 }, { 0, 1.642872 }, { 0, -1.657096 }, { -2.124334, 0 } };
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

    @Override
    protected void onDestroy() {
        super.onDestroy();
        scanner.stopScan(scanCallback);
    }
}
