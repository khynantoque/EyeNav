

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
    [SerializeField] GameObject objUserDestination;
    [SerializeField] GameObject objUserPosition;

    [SerializeField] GameObject objBeacon1;
    [SerializeField] GameObject objBeacon2;
    [SerializeField] GameObject objBeacon3;
    [SerializeField] GameObject objBeacon4;

    [SerializeField] Button btnStartNavigation;
    [SerializeField] Button btnConfirmPosition;
    [SerializeField] Button btnConfirmDestination;

    [SerializeField] TMPro.TMP_Text txtWaitLabel;

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

    bool isConfirmedPosition = false;
    bool isConfirmedDestination = false;

    bool isConfirmPositionVisible = false;

    int elipsisCounter = 0;

    AndroidJavaObject _pluginActivity;

    // Start is called before the first frame update
    void Start()
    {
        CalibrationData loadedData = DataSaver.loadData<CalibrationData>("CalibrationData");
        if (loadedData != null)
        {
            objUserDestination.transform.localPosition = new Vector3(loadedData.dx, loadedData.dy, loadedData.dz);
        }

        btnStartNavigation.gameObject.SetActive(false);
        btnConfirmPosition.gameObject.SetActive(false);
        btnConfirmDestination.gameObject.SetActive(false);

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
        StartCoroutine(CalibrateWaitIndicator());
    }

    // Update is called once per frame
    void Update()
    {
        if(isConfirmedDestination & isConfirmedPosition)
        {
            btnStartNavigation.gameObject.SetActive(true);
        }
    }

    public void OnDestroy()
    {
        StopCoroutine(UpdateUserPosition());
        StopCoroutine(CalibrateWaitIndicator());
    }

    int counter = 10;
    IEnumerator CalibrateWaitIndicator()
    {
        string dot = "";
        for (int x = 0; x < elipsisCounter; x++)
        {
            dot += ".";
        }
        if (elipsisCounter == 3)
        {
            elipsisCounter = 0;
        }
        else
        {
            elipsisCounter++;
        }
        if (counter > 0)
        {
            txtWaitLabel.text = "Calibrating your position"+ dot + "\nPlease wait for "+ counter +"s or more.";
            counter--;
        } else
        {
            txtWaitLabel.text = "Your position should be calibrated.\nAwaiting positions' confirmation" + dot;
            if (!isConfirmPositionVisible)
            {
                btnConfirmPosition.gameObject.SetActive(true);
                isConfirmPositionVisible = true;
            }
        }
        yield return new WaitForSecondsRealtime(1f);
        StartCoroutine(CalibrateWaitIndicator());
    }

    IEnumerator UpdateUserPosition()
    {
        RefreshFilteredRssi();

        if(!isConfirmedPosition)
        {
            SetUserPosition();
        }

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
        objUserPosition.transform.localPosition = Vector3.Lerp(objUserPosition.transform.position, newPos, 1);
        
    }

    public void BackToMenu()
    {
        SceneManager.LoadScene("Menu");
    }

    public void GoARNavigate()
    {
        SceneManager.LoadScene("Navigation");

        CalibrationData data = new CalibrationData();
        data.dx = objUserDestination.transform.position.x;
        data.dy = objUserDestination.transform.position.y;
        data.dz = objUserDestination.transform.position.z;

        data.ux = objUserDestination.transform.position.x;
        data.uy = objUserDestination.transform.position.y;
        data.uz = objUserDestination.transform.position.z;

        DataSaver.saveData(data, "CalibrationData");
    }

    public void ConfirmPosition()
    {
        isConfirmedPosition = true;
        btnConfirmPosition.gameObject.SetActive(false);
        btnConfirmDestination.gameObject.SetActive(true);
    }

    public void ConfirmDestination()
    {
        isConfirmedDestination = true;
        btnConfirmDestination.gameObject.SetActive(false);
    }

}
