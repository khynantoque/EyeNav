

using Assets.Scripts;
using System;
using System.Collections;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnscentedKalmanFilter;

public class BLECalibration : MonoBehaviour
{
    [SerializeField] GameObject objUserPosition;

    [SerializeField] GameObject objBeacon1;
    [SerializeField] GameObject objBeacon2;
    [SerializeField] GameObject objBeacon3;
    [SerializeField] GameObject objBeacon4;

    private double posBeacon1X;
    private double posBeacon1Y;

    private double posBeacon2X;
    private double posBeacon2Y;

    private double posBeacon3X;
    private double posBeacon3Y;

    private double posBeacon4X;
    private double posBeacon4Y;

    private float rssi1 = -59;
    private float rssi2 = -59;
    private float rssi3 = -59;
    private float rssi4 = -59;

    private double frssi1 = -59;
    private double frssi2 = -59;
    private double frssi3 = -59;
    private double frssi4 = -59;

    AndroidJavaObject _pluginActivity;

    // Start is called before the first frame update
    void Start()
    {
        _pluginActivity = new AndroidJavaObject("com.khynsoft.ble.PluginActivity");

        posBeacon1X = objBeacon1.transform.localPosition.x;
        posBeacon1Y = objBeacon1.transform.localPosition.z;

        posBeacon2X = objBeacon2.transform.localPosition.x;
        posBeacon2Y = objBeacon2.transform.localPosition.z;

        posBeacon3X = objBeacon3.transform.localPosition.x;
        posBeacon3Y = objBeacon3.transform.localPosition.z;

        posBeacon4X = objBeacon4.transform.localPosition.x;
        posBeacon4Y = objBeacon4.transform.localPosition.z;

        _pluginActivity.Call("setPosBeacon1", posBeacon1X, posBeacon1Y);
        _pluginActivity.Call("setPosBeacon2", posBeacon2X, posBeacon2Y);
        _pluginActivity.Call("setPosBeacon3", posBeacon3X, posBeacon3Y);
        _pluginActivity.Call("setPosBeacon4", posBeacon4X, posBeacon4Y);

        StartCoroutine(UpdateUserPosition());
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void OnDestroy()
    {
        StopCoroutine(UpdateUserPosition());
    }
    IEnumerator UpdateUserPosition()
    {
        RefreshFilteredRssi();

        SetUserPosition();

        yield return new WaitForSecondsRealtime(.5f);
        StartCoroutine(UpdateUserPosition());
    }
    void RefreshRssi()
    {
        if (_pluginActivity != null)
        {
            rssi1 = _pluginActivity.Call<int>("getRssi1");
            rssi2 = _pluginActivity.Call<int>("getRssi2");
            rssi3 = _pluginActivity.Call<int>("getRssi3");
            rssi4 = _pluginActivity.Call<int>("getRssi4");
        }
    }

    public void RefreshFilteredRssi()
    {
        if (_pluginActivity != null)
        {
            frssi1 = _pluginActivity.Call<double>("getFilteredRssi", 1);
            frssi2 = _pluginActivity.Call<double>("getFilteredRssi", 2);
            frssi3 = _pluginActivity.Call<double>("getFilteredRssi", 3);
            frssi4 = _pluginActivity.Call<double>("getFilteredRssi", 4);
        }
    }

    void SetUserPosition()
    {
        double[] uLocation;
        uLocation = _pluginActivity.Call<double[]>("getUserPosition");

        Vector3 newPos = new Vector3((float)uLocation[0], 0, (float)uLocation[1]);
        objUserPosition.transform.position = Vector3.Lerp(objUserPosition.transform.position, newPos, 1);
    }
}
