using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;
using UnityEngine;
using Assets.Scripts;
using UnityEngine.SceneManagement;
using UnityEngine.XR.ARFoundation;

public class Navigation : MonoBehaviour
{
    [SerializeField] private ARSession session;
    [SerializeField] private ARSessionOrigin sessionOrigin;
    [SerializeField] private ARCameraManager cameraManager;

    [SerializeField] private List<Destination> locationObjects = new List<Destination>();
    Vector3 targetPosition = Vector3.zero;

    public int selectedLocation = 2;

    private NavMeshPath path;
    private LineRenderer line;

    private Player player;
    private long startNavTime;

    // Start is called before the first frame update
    void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();

        locationObjects.ForEach(x => x.PositionObject.gameObject.SetActive(false));

        CalibrationData loadedData = DataSaver.loadData<CalibrationData>("CalibrationData");
        if(loadedData != null)
        {
            selectedLocation = loadedData.selectedLocation;
            sessionOrigin.transform.position = new Vector3(loadedData.ux, sessionOrigin.transform.position.y, loadedData.uz);
        }

        Player loadedPlayer = DataSaver.loadData<Player>("PlayerData");
        if(loadedPlayer != null)
        {
            player = loadedPlayer;
            DataSaver.deleteData("PlayerData");
        }
        startNavTime = TimeUtils.CurrentTimeMillis();
        SetCurrentNavigationTarget();
    }

    // Update is called once per frame
    void Update()
    {
        if (targetPosition != Vector3.zero)
        {
            NavMesh.CalculatePath(transform.position, targetPosition, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
            line.enabled = true;
        }
        
    }

    private void OnDestroy()
    {

    }

    public void SetCurrentNavigationTarget()
    {
        targetPosition = Vector3.zero;
        Destination currentDestination = locationObjects.Find(x => x.locationID.Equals(selectedLocation));
        if(currentDestination != null)
        {
            currentDestination.PositionObject.SetActive(true);
            targetPosition = currentDestination.PositionObject.transform.position;
        }
    }

    public void BackToMenu()
    {
        CalibrationData data = new CalibrationData();

        data.ux = sessionOrigin.transform.position.x;
        data.uz = sessionOrigin.transform.position.z;

        if(player != null)
        {
            player.navigationTimeInSeconds = TimeUtils.CurrentTimeMillis() - startNavTime;
            player.numberOfSwitchingNavs += 1;
            DataSaver.saveData(player, "PlayerData");
        }
        DataSaver.saveData(data, "CalibrationData");
        SceneManager.LoadScene("MainMenu");
    }
}
