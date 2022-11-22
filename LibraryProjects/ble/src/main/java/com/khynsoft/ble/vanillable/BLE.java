package com.khynsoft.ble.vanillable;

import android.bluetooth.BluetoothDevice;

public class BLE {
    private BluetoothDevice device;
    private int rssi;

    public BLE(BluetoothDevice device) {
        this.device = device;
    }

    public String getAddress() {
        return this.device.getAddress();
    }

    public String getName() {
        return this.device.getName();
    }

    public int getRssi() {
        return rssi;
    }

    public void setRssi(int rssi) {
        this.rssi = rssi;
    }
}
