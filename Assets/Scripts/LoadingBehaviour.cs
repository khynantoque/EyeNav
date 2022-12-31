using Assets.Scripts;
using Michsky.UI.Shift;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LoadingBehaviour : MonoBehaviour
{
    public bool isPermitted = false;
    public GameObject LoaderTextObject;
    public GameObject TapToContinueObject;
    public GameObject HotKeys;
    PressKeyEvent pressKeyEvent;

    private void Start()
    {
        TapToContinueObject.gameObject.SetActive(false);
        StartCoroutine(StartLoading());
        pressKeyEvent = HotKeys.GetComponent<PressKeyEvent>();
        pressKeyEvent.isPermitted = false;
    }

    private void OnDestroy()
    {
        StopCoroutine(StartLoading());
    }

    IEnumerator StartLoading()
    {
        yield return new WaitForSecondsRealtime(4f);
        LoaderTextObject.gameObject.SetActive(false);
        TapToContinueObject.SetActive(true);
        pressKeyEvent.isPermitted = true;
    }

    public void ToNavigate()
    {
        SceneManager.LoadScene("NavigationHUD");
    }
}
