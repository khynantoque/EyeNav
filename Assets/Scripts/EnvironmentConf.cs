using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Text.RegularExpressions;

public class EnvironmentConf : MonoBehaviour
{
    [SerializeField] GameObject beacon1;
    [SerializeField] GameObject beacon2;
    [SerializeField] GameObject beacon3;
    [SerializeField] GameObject beacon4;

    [SerializeField] TMP_InputField inpFloorScaleX;
    [SerializeField] TMP_InputField inpFloorScaleY;
    [SerializeField] TMP_InputField inpFloorScaleZ;
    
    [SerializeField] TMP_InputField beacon1X;
    [SerializeField] TMP_InputField beacon1Y;
    [SerializeField] TMP_InputField beacon1Z;

    [SerializeField] TMP_InputField beacon2X;
    [SerializeField] TMP_InputField beacon2Y;
    [SerializeField] TMP_InputField beacon2Z;

    [SerializeField] TMP_InputField beacon3X;
    [SerializeField] TMP_InputField beacon3Y;
    [SerializeField] TMP_InputField beacon3Z;

    [SerializeField] TMP_InputField beacon4X;
    [SerializeField] TMP_InputField beacon4Y;
    [SerializeField] TMP_InputField beacon4Z;

    [SerializeField] TMP_InputField cameraPosX;
    [SerializeField] TMP_InputField cameraPosY;
    [SerializeField] TMP_InputField cameraPosZ;

    [SerializeField] TMP_InputField cameraRotateX;
    [SerializeField] TMP_InputField cameraRotateY;
    [SerializeField] TMP_InputField cameraRotateZ;

    [SerializeField] TMP_InputField destinationPosX;
    [SerializeField] TMP_InputField destinationPosY;
    [SerializeField] TMP_InputField destinationPosZ;

    [SerializeField] TMP_InputField inpCameraSize;


    [SerializeField] GameObject destinationObject;

    [SerializeField] Camera camera;

    [SerializeField] GameObject floor;

    [SerializeField] TMP_Dropdown floorDropdown;

    float posBeacon1X = 0;
    float posBeacon1Y = 0;
    float posBeacon1Z = 0;
    
    float posBeacon2X = 0;
    float posBeacon2Y = 0;
    float posBeacon2Z = 0;
    
    float posBeacon3X = 0;
    float posBeacon3Y = 0;
    float posBeacon3Z = 0;
    
    float posBeacon4X = 0;
    float posBeacon4Y = 0;
    float posBeacon4Z = 0;

    float cameraX = 0;
    float cameraY = 0;
    float cameraZ = 0;

    float floorScaleX = 0;
    float floorScaleY = 0.1f;
    float floorScaleZ = 0;

    float rotateCameraX = 0;
    float rotateCameraY = 0;
    float rotateCameraZ = 0;

    float destPosX = 0;
    float destPosY = 0;
    float destPosZ = 0;

    float cameraSize = 0;

    // Start is called before the first frame update
    void Start()
    {
        camera = Camera.main;

        floorScaleX = floor.transform.localScale.x;
        floorScaleY = floor.transform.localScale.y;
        floorScaleZ = floor.transform.localScale.z;

        posBeacon1X = beacon1.transform.position.x;
        posBeacon1Y = beacon1.transform.position.y;
        posBeacon1Z = beacon1.transform.position.z;

        posBeacon2X = beacon2.transform.position.x;
        posBeacon2Y = beacon2.transform.position.y;
        posBeacon2Z = beacon2.transform.position.z;

        posBeacon3X = beacon3.transform.position.x;
        posBeacon3Y = beacon3.transform.position.y;
        posBeacon3Z = beacon3.transform.position.z;

        posBeacon4X = beacon4.transform.position.x;
        posBeacon4Y = beacon4.transform.position.y;
        posBeacon4Z = beacon4.transform.position.z;

        cameraX = 1.79f;
        cameraY = 11.72f;
        cameraZ = 0.03f;

        rotateCameraX = 89.92f;
        rotateCameraY = 0f;
        rotateCameraZ = 0f;

        cameraSize = 3.76f;

        destPosX = destinationObject.transform.position.x;
        destPosY = destinationObject.transform.position.y;
        destPosZ = destinationObject.transform.position.z;

        setValues();

        floorDropdown.onValueChanged.AddListener(delegate
        {
            FloorValueChanged(floorDropdown);
        });
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void setValues()
    {
        beacon1X.text = posBeacon1X + "";
        beacon1Y.text = posBeacon1Y + "";
        beacon1Z.text = posBeacon1Z + "";

        beacon2X.text = posBeacon2X + "";
        beacon2Y.text = posBeacon2Y + "";
        beacon2Z.text = posBeacon2Z + "";

        beacon3X.text = posBeacon3X + "";
        beacon3Y.text = posBeacon3Y + "";
        beacon3Z.text = posBeacon3Z + "";

        beacon4X.text = posBeacon4X + "";
        beacon4Y.text = posBeacon4Y + "";
        beacon4Z.text = posBeacon4Z + "";

        cameraRotateX.text = rotateCameraX + "";
        cameraRotateY.text = rotateCameraY + "";
        cameraRotateZ.text = rotateCameraZ + "";

        cameraPosX.text = cameraX + "";
        cameraPosY.text = cameraY + "";
        cameraPosZ.text = cameraZ + "";

        inpCameraSize.text = cameraSize + "";

        inpFloorScaleX.text = floorScaleX + "";
        inpFloorScaleY.text = floorScaleY + "";
        inpFloorScaleZ.text = floorScaleZ + "";

        destinationPosX.text = destPosX + "";
        destinationPosY.text = destPosY + "";
        destinationPosZ.text = destPosZ + "";
    }

    public void FloorValueChanged(TMP_Dropdown dropdown)
    {

        switch (dropdown.value)
        {
            case 0:
                Debug.Log("CSD Room");
                floorScaleX = 9.08304f;
                floorScaleY = .1f;
                floorScaleZ = 6.858f;

                posBeacon1X = 0f;
                posBeacon1Y = 0.37f;
                posBeacon1Z = -3.237586f;
                
                posBeacon2X = 4.269029f;
                posBeacon2Y = 0.41f;
                posBeacon2Z = 0f;
                
                posBeacon3X = -4.269029f;
                posBeacon3Y = 0.37f;
                posBeacon3Z = 0f;
                
                posBeacon4X = 0f;
                posBeacon4Y = 0.41f;
                posBeacon4Z = 3.237586f;

                cameraX = 1.79f;
                cameraY = 11.72f;
                cameraZ = 0.03f;

                rotateCameraX = 89.92f;
                rotateCameraY = 0f;
                rotateCameraZ = 0f;

                cameraSize = 3.76f;

                destPosX = -3.560552f;
                destPosY = 0.367f;
                destPosZ = 2.658953f;
                break;
            case 1:
                Debug.Log("Computer Lab 2");
                floorScaleX = 9.08304f;
                floorScaleY = .1f;
                floorScaleZ = 6.88848f;

                posBeacon1X = 0f;
                posBeacon1Y = 0.37f;
                posBeacon1Z = -3.237586f;

                posBeacon2X = 4.269029f;
                posBeacon2Y = 0.41f;
                posBeacon2Z = 0f;

                posBeacon3X = -4.269029f;
                posBeacon3Y = 0.37f;
                posBeacon3Z = 0f;

                posBeacon4X = 0f;
                posBeacon4Y = 0.41f;
                posBeacon4Z = 3.237586f;

                cameraX = 1.79f;
                cameraY = 11.72f;
                cameraZ = 0.03f;

                rotateCameraX = 89.92f;
                rotateCameraY = 0f;
                rotateCameraZ = 0f;

                cameraSize = 3.76f;

                destPosX = -3.560552f;
                destPosY = 0.367f;
                destPosZ = 2.658953f;
                break;
        }

        setValues();
    }
    float getValidNum(string text)
    {
        return (Regex.IsMatch(text, "^\\d+$") || Regex.IsMatch(text, "^\\d*\\.?\\d*$")) ? float.Parse(text) : 0;
    }

    public void SetEnvironment()
    {
        beacon1.transform.position = new Vector3(getValidNum(beacon1X.text.ToString()), getValidNum(beacon1Y.text.ToString()), getValidNum(beacon1Z.text.ToString()));
        beacon2.transform.position = new Vector3(getValidNum(beacon2X.text.ToString()), getValidNum(beacon2Y.text.ToString()), getValidNum(beacon2Z.text.ToString()));
        beacon3.transform.position = new Vector3(getValidNum(beacon3X.text.ToString()), getValidNum(beacon3Y.text.ToString()), getValidNum(beacon3Z.text.ToString()));
        beacon4.transform.position = new Vector3(getValidNum(beacon4X.text.ToString()), getValidNum(beacon4Y.text.ToString()), getValidNum(beacon4Z.text.ToString()));

        camera.transform.position = new Vector3(getValidNum(cameraPosX.text), getValidNum(cameraPosY.text), getValidNum(cameraPosZ.text));
        camera.transform.rotation = Quaternion.Euler(getValidNum(cameraRotateX.text), getValidNum(cameraRotateY.text), getValidNum(cameraRotateZ.text));

        floor.transform.localScale = new Vector3(getValidNum(inpFloorScaleX.text.ToString()), getValidNum(inpFloorScaleY.text.ToString()), getValidNum(inpFloorScaleZ.text.ToString()));

        destinationObject.transform.position = new Vector3(getValidNum(destinationPosX.text.ToString()), getValidNum(destinationPosY.text.ToString()), getValidNum(destinationPosZ.text.ToString()));
        camera.orthographicSize = getValidNum(inpCameraSize.text.ToString());
    }
}


