using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Text.RegularExpressions;

public class BLE : MonoBehaviour
{

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

    [SerializeField] GameObject userObj;

    AndroidJavaObject _pluginActivity;
    // Start is called before the first frame update
    void Start()
    {
        _pluginActivity = new AndroidJavaObject("com.khynsoft.ble.PluginActivity");
    }

    // Update is called once per frame
    void Update()
    {
        RefreshRssi();
        CalcDistances();
        SetUserPosition();
    }

    public void StartScan()
    {
        _pluginActivity.Call("startScan");
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
        userObj.transform.position = new Vector3((float)uLocation[0], 2.1f, (float)uLocation[1]);
        logArea.text = "Location: " + "\n";
        foreach (double i in uLocation)
        {
            logArea.text += "Location: n: " + (float) i + "\n";
        }

    }
}

public class Kalman
{

}
