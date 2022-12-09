using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;
using UnityEngine;
using Assets.Scripts;
using UnityEngine.SceneManagement;

public class Navigation : MonoBehaviour
{
    
    [SerializeField] private Camera topDownCamera;
    [SerializeField] private GameObject objDestination;

    private NavMeshPath path;
    private LineRenderer line;

    // Start is called before the first frame update
    void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();

        CalibrationData loadedData = DataSaver.loadData<CalibrationData>("CalibrationData");
        if (loadedData != null)
        {
            objDestination.transform.localPosition = new Vector3(loadedData.dx, loadedData.dy, loadedData.dz);
        }
    }

    // Update is called once per frame
    void Update()
    {
        NavMesh.CalculatePath(transform.position, objDestination.transform.position, NavMesh.AllAreas, path);
        line.positionCount = path.corners.Length;
        line.SetPositions(path.corners);
        line.enabled = true;
    }

    private void OnDestroy()
    {
        DataSaver.deleteData("CalibrationData");
    }

    public void CalibrateAgain()
    {
        SceneManager.LoadScene("MapCalibration");
    }

    public void BackToMenu()
    {
        SceneManager.LoadScene("Menu");
    }
}
