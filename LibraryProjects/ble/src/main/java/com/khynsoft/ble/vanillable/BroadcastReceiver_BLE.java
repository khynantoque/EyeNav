package com.khynsoft.ble.vanillable;

import android.bluetooth.BluetoothAdapter;
import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;

public class BroadcastReceiver_BLE extends BroadcastReceiver {
    Context context;

    public BroadcastReceiver_BLE(Context context) {
        this.context = context;
    }

    @Override
    public void onReceive(Context context, Intent intent) {
        String action = intent.getAction();

        if(action.equals(BluetoothAdapter.ACTION_STATE_CHANGED)) {

        }
    }
}
