using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Compass : MonoBehaviour
{
    public TMPro.TMP_Text headingText;

    private bool startTracking = false;

    void Start()
    {
        Input.compass.enabled = true;
        Input.location.Start();
        StartCoroutine(InitializeCompass());
    }

    void Update()
    {
        if (startTracking)
        {
            transform.rotation = Quaternion.Euler(90, Input.compass.trueHeading, 0);
            headingText.text = ((int)Input.compass.trueHeading).ToString() + "° " + DegreesToCardinalDetailed(Input.compass.trueHeading);
        }
    }

    IEnumerator InitializeCompass()
    {
        yield return new WaitForSeconds(1f);
        startTracking |= Input.compass.enabled;
    }

    private static string DegreesToCardinalDetailed(double degrees)
    {
        string[] caridnals = { "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW", "N" };
        return caridnals[(int)Math.Round(((double)degrees * 10 % 3600) / 225)];
    }
}
