package com.khynsoft.unity;

import android.bluetooth.BluetoothAdapter;
import android.bluetooth.BluetoothDevice;
import android.bluetooth.BluetoothManager;
import android.bluetooth.le.BluetoothLeScanner;
import android.bluetooth.le.ScanCallback;
import android.bluetooth.le.ScanResult;
import android.content.Context;
import android.location.LocationManager;
import android.os.Handler;
import android.util.Log;

import java.util.List;
import java.util.Timer;
import java.util.TimerTask;

@SuppressWarnings("checkPermissions")
public class AndroidBLE {
    private static final String LOGTAG = "KhynBLE";
    private static final AndroidBLE mInstance;
    BluetoothAdapter bluetoothAdapter;
    private Context mContext;
    private boolean mScanning;
    private Handler handler;
    private BluetoothDevice btDevice;
    private String btDeviceAddress;
    private String btDeviceName;
    private static final int[] btRssis = {0, 0, 0, 0};
    private static final String[] btDeviceNames = new String[4];

    public static AndroidBLE getInstance() {
        return AndroidBLE.mInstance;
    }

    public void setContext(final Context context) {
        this.mContext = context;
        Log.d("UnityBLEPlugin", context.toString());
    }

    private boolean BLEsetup() {
        Log.d("AndroidBLE", "Attempting to set up Bluetooth...");
        final BluetoothManager bluetoothManager = (BluetoothManager) this.mContext.getSystemService(Context.BLUETOOTH_SERVICE);
        final BluetoothAdapter bluetoothAdapter = bluetoothManager.getAdapter();
        final LocationManager locationManager = (LocationManager) this.mContext.getSystemService(Context.LOCATION_SERVICE);
        final boolean gps_enabled = locationManager.isProviderEnabled("gps");
        if (bluetoothAdapter == null || !bluetoothAdapter.isEnabled() || !gps_enabled) {
            Log.e("AndroidBLE", "Bluetooth or Location NOT Enabled.");
            return false;
        }

        Log.i("AndroidBLE", "Bluetooth set up Success!");
        this.scanLeDevice(bluetoothAdapter);
        return true;
    }

    private void scanLeDevice(final BluetoothAdapter bluetoothAdapter) {
        final BluetoothLeScanner bluetoothScanner = bluetoothAdapter.getBluetoothLeScanner();
        final ScanCallback leScanCallback = new ScanCallback() {
            public void onScanResult(final int callbackType, final ScanResult result) {
                switch (result.getDevice().getName()) {
                    case "KunwareBLE1":
                        Log.d("AndroidBLE", "Callback Type: " + callbackType);
                        Log.d("AndroidBLE", "Result: " + result);
                        AndroidBLE.this.btDevice = result.getDevice();
                        AndroidBLE.this.btDeviceAddress = AndroidBLE.this.btDevice.getAddress();
                        AndroidBLE.this.btDeviceName = AndroidBLE.this.btDevice.getName();
                        btRssis[0] = result.getRssi();
                        break;
                    case "KunwareBLE2":
                        Log.d("AndroidBLE", "Callback Type: " + callbackType);
                        Log.d("AndroidBLE", "Result: " + result);
                        AndroidBLE.this.btDevice = result.getDevice();
                        AndroidBLE.this.btDeviceAddress = AndroidBLE.this.btDevice.getAddress();
                        AndroidBLE.this.btDeviceName = AndroidBLE.this.btDevice.getName();
                        btRssis[1] = result.getRssi();
                        break;
                    case "KunwareBLE3":
                        Log.d("AndroidBLE", "Callback Type: " + callbackType);
                        Log.d("AndroidBLE", "Result: " + result);
                        AndroidBLE.this.btDevice = result.getDevice();
                        AndroidBLE.this.btDeviceAddress = AndroidBLE.this.btDevice.getAddress();
                        AndroidBLE.this.btDeviceName = AndroidBLE.this.btDevice.getName();
                        btRssis[2] = result.getRssi();
                        break;
                    case "KunwareBLE4":
                        Log.d("AndroidBLE", "Callback Type: " + callbackType);
                        Log.d("AndroidBLE", "Result: " + result);
                        AndroidBLE.this.btDevice = result.getDevice();
                        AndroidBLE.this.btDeviceAddress = AndroidBLE.this.btDevice.getAddress();
                        AndroidBLE.this.btDeviceName = AndroidBLE.this.btDevice.getName();
                        btRssis[3] = result.getRssi();
                        break;
                }
            }

            public void onBatchScanResults(final List<ScanResult> results) {
                for (final ScanResult sr : results) {
                    Log.i("AndroidBLE", "ScanResult - Results" + sr.toString());
                }
            }

            public void onScanFailed(final int errorCode) {
                Log.e("Scan Failed", "BLE Scan FAILED: " + errorCode);
            }
        };
        Log.i("AndroidBLE", "Scanning for BLE Devices... ");
        bluetoothScanner.startScan(leScanCallback);
        TimerTask task = new TimerTask(){
            public void run(){
                //execute the task
                btRssis[0] = 0;
                btRssis[1] = 0;
                btRssis[2] = 0;
                btRssis[3] = 0;
                bluetoothAdapter.startDiscovery();
            }
        };
        Timer timer = new Timer();
        timer.schedule(task, 1000);
    }

    private int getRssi1() {
        return btRssis[0];
    }
    private int getRssi2() {
        return btRssis[1];
    }
    private int getRssi3() {
        return btRssis[2];
    }
    private int getRssi4() {
        return btRssis[3];
    }
    
    static {
        mInstance = new AndroidBLE();
    }
}
