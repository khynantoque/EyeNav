package com.khynsoft.ble;

import static no.nordicsemi.android.ble.callback.FailCallback.REASON_BLUETOOTH_DISABLED;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_CANCELLED;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_DEVICE_DISCONNECTED;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_DEVICE_NOT_SUPPORTED;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_NULL_ATTRIBUTE;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_REQUEST_FAILED;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_TIMEOUT;
import static no.nordicsemi.android.ble.callback.FailCallback.REASON_VALIDATION;

import android.bluetooth.BluetoothGatt;
import android.bluetooth.BluetoothGattService;
import android.content.Context;
import android.os.Handler;
import android.widget.Toast;

import androidx.annotation.NonNull;

import java.util.Locale;

import no.nordicsemi.android.ble.BleManager;

public class MyBleManager extends BleManager {
    public MyBleManager(@NonNull Context context) {
        super(context);
    }

    public MyBleManager(@NonNull Context context, @NonNull Handler handler) {
        super(context, handler);
    }

    @NonNull
    @Override
    protected BleManagerGattCallback getGattCallback() {
        return new MyGattImp();
    }

    private static class MyGattImp extends BleManagerGattCallback {

        @Override
        protected boolean isRequiredServiceSupported(@NonNull BluetoothGatt gatt) {
            return false;
        }

        @Override
        protected void onServicesInvalidated() {

        }
    }

    public void readRssiForever() {
        readRssi().with((device, rssi) -> {
            Toast.makeText(getContext(), String.format(Locale.ENGLISH,"Device: %s Rssi: %d", device.getName(), rssi), Toast.LENGTH_SHORT).show();
        }).done(device -> {
            readRssiForever();
        }).fail((device, status) -> {
            String reason = "";
            switch (status) {
                case REASON_DEVICE_DISCONNECTED: reason = "disconnected"; break;
                case REASON_DEVICE_NOT_SUPPORTED: reason = "not supported"; break;
                case REASON_NULL_ATTRIBUTE: reason = "null attribute"; break;
                case REASON_REQUEST_FAILED: reason = "request failed"; break;
                case REASON_TIMEOUT: reason = "timeout"; break;
                case REASON_VALIDATION: reason = "validation"; break;
                case REASON_CANCELLED: reason = "cancelled"; break;
                case REASON_BLUETOOTH_DISABLED: reason = "bt disabled"; break;
            }
            Toast.makeText(getContext(), String.format("Device: %s rssi read stopped due to: %s", device.getName(), reason), Toast.LENGTH_SHORT).show();

        }).enqueue();
    }
}
