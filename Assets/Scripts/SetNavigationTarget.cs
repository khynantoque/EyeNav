using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.IO;
using System;
using System.Text;

public class SetNavigationTarget : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] Camera camera;
    [SerializeField] GameObject destObj;

    private NavMeshPath path;
    private LineRenderer line;

    [SerializeField] public Button b1;
    TextMeshProUGUI b1text;

    void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();
        b1text = b1.GetComponentInChildren<TextMeshProUGUI>();

        DestinationData loadedData = DataSaver.loadData<DestinationData>("destinationPos");
        if (loadedData != null)
        {
            destObj.transform.localPosition = new Vector3(loadedData.x, loadedData.y, loadedData.z);
        }

    }

    public void NavigateToggle()
    {
        DestinationData saveData = new DestinationData();
        saveData.x = destObj.transform.localPosition.x;
        saveData.y = destObj.transform.localPosition.y;
        saveData.z = destObj.transform.localPosition.z;

        switch (SceneManager.GetActiveScene().name)
        {
            case "SampleScene":
                DataSaver.saveData(saveData, "destinationPos");
                SceneManager.LoadScene("MapConfiguration");
                break;
            case "MapConfiguration":
                DataSaver.saveData(saveData, "destinationPos");
                SceneManager.LoadScene("SampleScene");
                break;
        }
    }

    // Update is called once per frame
    void Update()
    {
        NavMesh.CalculatePath(transform.localPosition, destObj.transform.position, NavMesh.AllAreas, path);
        line.positionCount = path.corners.Length;
        line.SetPositions(path.corners);
        line.enabled = true;
    }

    [SerializeField]
    public class DestinationData
    {
        public float x = 0;
        public float y = 0;
        public float z = 0;
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
