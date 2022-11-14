package com.khynsoft.ble;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.widget.Toast;

public class BleReceiver extends BroadcastReceiver {
    @Override
    public void onReceive(Context context, Intent intent) {
        if(intent.getAction().equals("com.khynsoft.ble.ACTION_FOUND")) {
            Toast.makeText(context, "Ble found" + getResultData(), Toast.LENGTH_SHORT).show();
            Toast.makeText(context, "Data string: " + intent.getDataString(), Toast.LENGTH_SHORT).show();
        }
    }
}
