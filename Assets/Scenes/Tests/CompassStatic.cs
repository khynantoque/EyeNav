using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CompassStatic : MonoBehaviour
{
    // The reference direction (e.g. North) in Unity world space
    public Vector3 referenceDirection;
    GameObject compass;

    // The text element to display the heading
    public TMPro.TMP_Text headingText;

    void Start()
    {
        // Enable the compass
        Input.compass.enabled = true;
    }

    void Update()
    {
        // Get the device's heading in degrees
        float heading = Input.compass.trueHeading;

        // Rotate the reference direction by the heading
        compass.transform.position = Quaternion.Euler(0, heading, 0) * referenceDirection;

        // Display the heading
        headingText.text = "Heading: " + heading.ToString("F1") + " degrees";
    }
}
