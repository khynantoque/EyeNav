using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text.RegularExpressions;

public class BLE : MonoBehaviour
{
    public class Kalman
    {
        public int trueRssi;
        
    }

    [SerializeField] GameObject beacon1;
    [SerializeField] GameObject beacon2;
    [SerializeField] GameObject beacon3;
    [SerializeField] GameObject beacon4;

    [SerializeField] TMPro.TMP_Text rssi1;
    [SerializeField] TMPro.TMP_Text rssi2;
    [SerializeField] TMPro.TMP_Text rssi3;
    [SerializeField] TMPro.TMP_Text rssi4;

    [SerializeField] TMPro.TMP_Text dist1;
    [SerializeField] TMPro.TMP_Text dist2;
    [SerializeField] TMPro.TMP_Text dist3;
    [SerializeField] TMPro.TMP_Text dist4;

    [SerializeField] TMPro.TMP_InputField nFactor;
    [SerializeField] TMPro.TMP_InputField observeTime;

    [SerializeField] TMPro.TMP_InputField logArea;

    [SerializeField] Toggle toggleFilteredRssi;

    [SerializeField] GameObject userObj;

    AndroidJavaObject _pluginActivity;

    private double posBeacon1X;
    private double posBeacon1Y;

    private double posBeacon2X;
    private double posBeacon2Y;

    private double posBeacon3X;
    private double posBeacon3Y;

    private double posBeacon4X;
    private double posBeacon4Y;

    // Start is called before the first frame update
    void Start()
    {
        _pluginActivity = new AndroidJavaObject("com.khynsoft.ble.PluginActivity");

        posBeacon1X = beacon1.transform.localPosition.x;
        posBeacon1Y = beacon1.transform.localPosition.z;

        posBeacon2X = beacon2.transform.localPosition.x;
        posBeacon2Y = beacon2.transform.localPosition.z;

        posBeacon3X = beacon3.transform.localPosition.x;
        posBeacon3Y = beacon3.transform.localPosition.z;

        posBeacon4X = beacon4.transform.localPosition.x;
        posBeacon4Y = beacon4.transform.localPosition.z;

        _pluginActivity.Call("setPosBeacon1", posBeacon1X, posBeacon1Y);
        _pluginActivity.Call("setPosBeacon2", posBeacon2X, posBeacon2Y);
        _pluginActivity.Call("setPosBeacon3", posBeacon3X, posBeacon3Y);
        _pluginActivity.Call("setPosBeacon4", posBeacon4X, posBeacon4Y);

        StartCoroutine(UpdateRSSIAndDistance());
    }

    // Update is called once per frame
    void Update()
    { 

    }

    IEnumerator UpdateRSSIAndDistance()
    {
        if (isValidNum(nFactor.text))
        {
            _pluginActivity.Call("setNFactor", double.Parse(nFactor.text));
        }
        
        if(toggleFilteredRssi.isOn)
        {
            RefreshFilteredRssi();
            CalcFilteredDistances();
            SetFilteredPosition();
        } 
        else
        {
            RefreshRssi();
            CalcDistances();
            SetUserPosition();
        }

        SetUserPosition();
        yield return new WaitForSecondsRealtime(.5f);
        StartCoroutine(UpdateRSSIAndDistance());
    }

    public void RefreshFilteredRssi()
    {
        if(_pluginActivity != null)
        {
            rssi1.text = _pluginActivity.Call<int>("getSmoothRssi", 1) + " dBm";
            rssi2.text = _pluginActivity.Call<int>("getSmoothRssi", 2) + " dBm";
            rssi3.text = _pluginActivity.Call<int>("getSmoothRssi", 3) + " dBm";
            rssi4.text = _pluginActivity.Call<int>("getSmoothRssi", 4) + " dBm";
        }
    }

    public void RefreshRssi()
    {
        if (_pluginActivity != null)
        {
            rssi1.text = _pluginActivity.Call<int>("getRssi1") + " dBm";
            rssi2.text = _pluginActivity.Call<int>("getRssi2") + " dBm";
            rssi3.text = _pluginActivity.Call<int>("getRssi3") + " dBm";
            rssi4.text = _pluginActivity.Call<int>("getRssi4") + " dBm";
        }
    }

    bool isValidNum(string text)
    {
        return Regex.IsMatch(text, "^\\d+$") || Regex.IsMatch(text, "^\\d*\\.?\\d*$");
    }

    public void CalcDistances()
    {   
        dist1.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance1"));
        dist2.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance2"));
        dist3.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance3"));
        dist4.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getDistance4"));
    }

    public void CalcFilteredDistances()
    {
        dist1.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 1));
        dist2.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 2));
        dist3.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 3));
        dist4.text = string.Format("{0:0.00} m", _pluginActivity.Call<double>("getSmoothDistance", 4));
    }

    double time = 10;
    public void Observe()
    {
        //set default value
        counter = 0;
        if (isValidNum(observeTime.text))
        {
            time = double.Parse(observeTime.text);
        }

        logArea.text = "\nObserving for " + observeTime.text + " seconds...\n\n  (BLE, rssi, distance)\n\n";
        StartCoroutine(GetRssiData());
    }

    float counter = 0;

    public IEnumerator GetRssiData()
    {
        
        logArea.text += string.Format("RSSIs: (A, {0}, {4}), (B, {1}, {5}), (C, {2}, {6}), (D, {3}, {7})\n",
            _pluginActivity.Call<int>("getRssi1"),
            _pluginActivity.Call<int>("getRssi2"),
            _pluginActivity.Call<int>("getRssi3"),
            _pluginActivity.Call<int>("getRssi4"),
            dist1.text,
            dist2.text,
            dist3.text,
            dist4.text
            );

        yield return new WaitForSecondsRealtime(.5f);
        counter += .5f;
        if (counter <= time)
        {
            StartCoroutine(GetRssiData());
        } else
        {
            logArea.text += "\nObservation Done!\n";
            StopCoroutine(GetRssiData());
        }
        
    }

    void SetUserPosition()
    {
        double[] uLocation;
        uLocation = _pluginActivity.Call<double[]>("getUserPosition");
        Vector3 newPos = new Vector3((float)uLocation[0], 2.1f, (float)uLocation[1]);
        userObj.transform.localPosition = Vector3.Lerp(userObj.transform.position, newPos, .5f);
        logArea.text = "Location: " + "\n";
        foreach (double i in uLocation)
        {
            logArea.text += "Location: n: " + (float) i + "\n";
        }

    }

    void SetFilteredPosition()
    {
        double[] uLocation;
        uLocation = _pluginActivity.Call<double[]>("getFilteredPosition");
        Vector3 newPos = new Vector3((float)uLocation[0], 2.1f, (float)uLocation[1]);
        userObj.transform.localPosition = Vector3.Lerp(userObj.transform.position, newPos, .5f);
        logArea.text = "Location: " + "\n";
        foreach (double i in uLocation)
        {
            logArea.text += "Location: n: " + (float)i + "\n";
        }

    }

    private void OnDestroy()
    {
        StopCoroutine(GetRssiData());
        StopCoroutine(UpdateRSSIAndDistance());
    }
}


