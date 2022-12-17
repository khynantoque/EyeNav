using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ARCameraOrientation : MonoBehaviour
{
    public float heading;
    float offset;
    // Start is called before the first frame update
    void Start()
    {
        offset = (360 - heading) + 180;
        transform.rotation = Quaternion.Euler(0, Input.compass.trueHeading + offset, 0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
