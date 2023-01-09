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
    public float positionThresDistance = 2.2f;

    private NavMeshPath path;
    private LineRenderer line;

    public GameObject labelArrival;

    private Player player;
    private long startNavTime;
    private long startTime;

    // Start is called before the first frame update
    void Start()
    {
        startTime = TimeUtils.CurrentTimeMillis();

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
        float distance = Vector3.Distance(transform.position, targetPosition);
        if(distance < positionThresDistance)
        {
            labelArrival.SetActive(true);
            if(player != null)
                switch (selectedLocation)
                {
                    case 1:
                        if (player.navTimeA == 0)
                        {
                            player.navTimeA = TimeUtils.CurrentTimeMillis() - startNavTime;
                        }
                        break;
                    case 2:
                        if (player.navTimeB == 0)
                        {
                            player.navTimeB = TimeUtils.CurrentTimeMillis() - startNavTime;
                        }
                        break;
                    case 3:
                        if (player.navTimeC == 0)
                        {
                            player.navTimeC = TimeUtils.CurrentTimeMillis() - startNavTime;
                        }
                        break;
                    case 4:
                        if (player.navTimeD == 0)
                        {
                            player.navTimeD = TimeUtils.CurrentTimeMillis() - startNavTime;
                        }
                        break;
                    case 5:
                        if (player.navTimeExit == 0)
                        {
                            player.navTimeExit = TimeUtils.CurrentTimeMillis() - startNavTime;
                        }
                        break;
                }
        } else
        {
            labelArrival.SetActive(false);
        }

        if (targetPosition != Vector3.zero)
        {
            NavMesh.CalculatePath(sessionOrigin.transform.position, targetPosition, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            for (int i = 0; i < path.corners.Length; i++)
            {
                Vector3 corner = path.corners[i];
                corner.y = -0.95f;
                path.corners[i] = corner;
            }
            line.SetPositions(path.corners);
            line.enabled = true;
        }


        //Position constraints

        if (sessionOrigin.transform.position.x < -1.4f)
        {
            sessionOrigin.transform.position = new Vector3(-1.4f, sessionOrigin.transform.position.y, sessionOrigin.transform.position.z);
        }
        if (sessionOrigin.transform.position.x > 4.8f)
        {
            sessionOrigin.transform.position = new Vector3(4.8f, sessionOrigin.transform.position.y, sessionOrigin.transform.position.z);
        }
        if (sessionOrigin.transform.position.z < -1.4f)
        {
            sessionOrigin.transform.position = new Vector3(sessionOrigin.transform.position.x, sessionOrigin.transform.position.y, -1.4f);
        }
        if (sessionOrigin.transform.position.z > 7f)
        {
            sessionOrigin.transform.position = new Vector3(sessionOrigin.transform.position.x, sessionOrigin.transform.position.y, 7f);
        }
        sessionOrigin.transform.position = new Vector3(sessionOrigin.transform.position.x, 1, sessionOrigin.transform.position.z);
    }

    private void OnDestroy()
    {
        if (player != null)
        {
            DataSaver.saveData(player, "PlayerData_" + player.name);
        }
    }

    public void ChangeLocationTarget(int locationID)
    {
        if (player != null) player.numberOfSwitchingNavs++;

        startNavTime = TimeUtils.CurrentTimeMillis();

        Destination currentDestination = locationObjects.Find(x => x.locationID.Equals(selectedLocation));
        if (currentDestination != null)
        {
            currentDestination.PositionObject.SetActive(false);
        }
        selectedLocation = locationID;
        SetCurrentNavigationTarget();
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
            player.numberOfBackToMenu += 1;
            player.navScreenTime = TimeUtils.CurrentTimeMillis() - startTime;
            DataSaver.saveData(player, "PlayerData");
        }

        DataSaver.saveData(data, "CalibrationData");
        SceneManager.LoadScene("MainMenu");
    }
}
