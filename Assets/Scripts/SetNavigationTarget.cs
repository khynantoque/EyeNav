using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

public class SetNavigationTarget : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField] Camera camera;
    [SerializeField] GameObject destObj;

    private NavMeshPath path;
    private LineRenderer line;

    public Button b1;
    TextMeshProUGUI b1text;

    private bool lineToggle = false;

    void Start()
    {
        path = new NavMeshPath();
        line = transform.GetComponent<LineRenderer>();
        b1text = b1.GetComponentInChildren<TextMeshProUGUI>();
    }

    public void NavigateToggle()
    {
        lineToggle = !lineToggle;
        if(lineToggle)
        {
            b1text.text = "Stop Navigation";
        } 
        else
        {
            b1text.text = "Start Navigation";
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(lineToggle)
        {
            NavMesh.CalculatePath(transform.localPosition, destObj.transform.position, NavMesh.AllAreas, path);
            line.positionCount = path.corners.Length;
            line.SetPositions(path.corners);
            line.enabled = true;
        }
    }
}
