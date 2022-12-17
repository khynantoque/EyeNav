using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GyroControl : MonoBehaviour
{
    private bool gyroEnabled;
    private Gyroscope gyro;

    private Quaternion rot;

    private void Start()
    {
        gyroEnabled = EnableGyro();

        Input.location.Start();
        Input.compass.enabled = true;

        transform.rotation = Quaternion.Euler(0f, -Input.compass.magneticHeading, 0f);
    }

    private bool EnableGyro()
    {
        if (SystemInfo.supportsGyroscope)
        {
            gyro = Input.gyro;
            gyro.enabled = true;

            transform.rotation = Quaternion.Euler(90f, 90f, 0f);
            rot = new Quaternion(0, 0, 1, 0);

            return true;
        }
        return false;
    }
    private void Update()
    {
        if (gyroEnabled)
        {
            transform.rotation = gyro.attitude * rot;
        }
    }
}
