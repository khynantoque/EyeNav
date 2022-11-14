using System.IO;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class Growth : MonoBehaviour
{

    private int currentProgression = 0;
    public int timeBetweenGrowths;
    public int maxGrowth;
   



    void Start()
    {
        // Invokes the method methodName in time seconds, then repeatedly every repeatRate seconds.
        InvokeRepeating("PlantGrowth", timeBetweenGrowths, timeBetweenGrowths);

        StreamWriter sw = new StreamWriter("progress.text");
        sw.WriteLine(currentProgression + "");
        sw.Flush();
        sw.Close();
    }
    

    void Update()
    {


      
    }

    public void Save() {
        
    }

    public void Load() {

    }

    public void PlantGrowth()
    {

        if (currentProgression != maxGrowth)
        {
            gameObject.transform.GetChild(currentProgression).gameObject.SetActive(true);
        }
        if (currentProgression > 1 && currentProgression < maxGrowth)
        {
            gameObject.transform.GetChild(currentProgression - 1).gameObject.SetActive(false);
        }
        if (currentProgression < maxGrowth)
        {
            currentProgression++;
           
        }



    }
}