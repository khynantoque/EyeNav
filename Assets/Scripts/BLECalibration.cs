

using System;
using System.Collections;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnscentedKalmanFilter;

public class BLECalibration : MonoBehaviour
{
    [SerializeField] public class DestinationData
    {
        public float x = 0;
        public float y = 0;
        public float z = 0;
    }

    [SerializeField] GameObject objUserDestination;
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

    UKF kf;

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

        kf = new UKF();

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
        RefreshRssi();
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
    }

    public class DataSaver
    {
        //Save Data
        public static void saveData<T>(T dataToSave, string dataFileName)
        {
            string tempPath = Path.Combine(Application.persistentDataPath, "data");
            tempPath = Path.Combine(tempPath, dataFileName + ".txt");

            //Convert To Json then to bytes
            string jsonData = JsonUtility.ToJson(dataToSave, true);
            byte[] jsonByte = Encoding.ASCII.GetBytes(jsonData);

            //Create Directory if it does not exist
            if (!Directory.Exists(Path.GetDirectoryName(tempPath)))
            {
                Directory.CreateDirectory(Path.GetDirectoryName(tempPath));
            }
            //Debug.Log(path);

            try
            {
                File.WriteAllBytes(tempPath, jsonByte);
                Debug.Log("Saved Data to: " + tempPath.Replace("/", "\\"));
            }
            catch (Exception e)
            {
                Debug.LogWarning("Failed To PlayerInfo Data to: " + tempPath.Replace("/", "\\"));
                Debug.LogWarning("Error: " + e.Message);
            }
        }

        //Load Data
        public static T loadData<T>(string dataFileName)
        {
            string tempPath = Path.Combine(Application.persistentDataPath, "data");
            tempPath = Path.Combine(tempPath, dataFileName + ".txt");

            //Exit if Directory or File does not exist
            if (!Directory.Exists(Path.GetDirectoryName(tempPath)))
            {
                Debug.LogWarning("Directory does not exist");
                return default(T);
            }

            if (!File.Exists(tempPath))
            {
                Debug.Log("File does not exist");
                return default(T);
            }

            //Load saved Json
            byte[] jsonByte = null;
            try
            {
                jsonByte = File.ReadAllBytes(tempPath);
                Debug.Log("Loaded Data from: " + tempPath.Replace("/", "\\"));
            }
            catch (Exception e)
            {
                Debug.LogWarning("Failed To Load Data from: " + tempPath.Replace("/", "\\"));
                Debug.LogWarning("Error: " + e.Message);
            }

            //Convert to json string
            string jsonData = Encoding.ASCII.GetString(jsonByte);

            //Convert to Object
            object resultValue = JsonUtility.FromJson<T>(jsonData);
            return (T)Convert.ChangeType(resultValue, typeof(T));
        }

        public static bool deleteData(string dataFileName)
        {
            bool success = false;

            //Load Data
            string tempPath = Path.Combine(Application.persistentDataPath, "data");
            tempPath = Path.Combine(tempPath, dataFileName + ".txt");

            //Exit if Directory or File does not exist
            if (!Directory.Exists(Path.GetDirectoryName(tempPath)))
            {
                Debug.LogWarning("Directory does not exist");
                return false;
            }

            if (!File.Exists(tempPath))
            {
                Debug.Log("File does not exist");
                return false;
            }

            try
            {
                File.Delete(tempPath);
                Debug.Log("Data deleted from: " + tempPath.Replace("/", "\\"));
                success = true;
            }
            catch (Exception e)
            {
                Debug.LogWarning("Failed To Delete Data: " + e.Message);
            }

            return success;
        }
    }


}
