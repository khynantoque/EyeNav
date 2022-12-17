using Assets.Scripts;
using Michsky.UI.Shift;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class CustomMenu : MonoBehaviour
{
    public GameObject MenuManager;
    public GameObject selectedLocBg1;
    public GameObject selectedLocBg2;
    public GameObject userObject;
    public TMPro.TMP_Text selectedLocTitle;
    public TMPro.TMP_Text profileName;
    public TMPro.TMP_Text genderTmp;

    public TMPro.TMP_InputField inpName;
    public TMPro.TMP_InputField inpCourse;
    public TMPro.TMP_InputField inpYear;

    public Button login;

    public Sprite locBg1;
    public Sprite locBg2;
    public Sprite locBg3;
    public Sprite locBg4;
    public Sprite locBg5;

    int locID = 2;
    bool loggedIn = false;
    string gender = "MALE";

    Player player = new Player();

    private SplashScreenManager splashManager;

    private void Awake()
    {
        CalibrationData calibrationData = DataSaver.loadData<CalibrationData>("CalibrationData");
        if (calibrationData != null)
        {
            locID = calibrationData.selectedLocation;
            splashManager = MenuManager.GetComponent<SplashScreenManager>();
            loggedIn = true;
            splashManager.disableSplashScreen = true;
            splashManager.enableLoginScreen = false;
            splashManager.enablePressAnyKeyScreen = false;
            DataSaver.deleteData("CalibrationData");
        }

        Player playerData = DataSaver.loadData<Player>("PlayerData");
        if (playerData != null)
        {
            player = playerData;
            DataSaver.deleteData("PlayerData");
        }
    }

    // Start is called before the first frame update
    void Start()
    {
        login.gameObject.SetActive(false);
        profileName.text = player.name;
        SetLocation(locID);
    }

    // Update is called once per frame
    void Update()
    {
        if(!loggedIn)
        {
            if ((inpName.text != "" && inpCourse.text != "") && inpYear.text != "")
            {
                login.gameObject.SetActive(true);
            }
        }
    }

    private void OnDestroy()
    {
        DataSaver.saveData(player, "PlayerData" + inpName.text);
    }

    public void Logout()
    {
        DataSaver.deleteData("CalibrationData");
        DataSaver.deleteData("PlayerData");
    }

    int toNum(string text)
    {
        return Regex.IsMatch(text, "^\\d+$") || Regex.IsMatch(text, "^\\d*\\.?\\d*$") ? int.Parse(text) : 0;
    }

    public void switchGender(bool isMan)
    {
        if(isMan)
        {
            gender = "MALE";
            genderTmp.text = gender;
        } else
        {
            gender = "FEMALE";
            genderTmp.text = gender;
        }
    }

    public void Login()
    {
        profileName.text = inpName.text;

        player.name = inpName.text;
        player.course = inpCourse.text;
        player.year = toNum(inpYear.text);
        player.gender = gender;

        loggedIn = true;
    }

    public void Navigate()
    {
        CalibrationData playerData = new CalibrationData();

        playerData.selectedLocation = locID;

        playerData.ux = userObject.transform.position.x;
        playerData.uz = userObject.transform.position.y;

        DataSaver.saveData(playerData, "CalibrationData");
        DataSaver.saveData(player, "PlayerData");
        SceneManager.LoadScene("NavigationHUD");
    }

    public void SetLocation(int locID)
    {
        this.locID = locID;
        switch(locID)
        {
            case 1:
                selectedLocTitle.text = "Location 1";
                selectedLocBg1.gameObject.GetComponent<Image>().sprite = locBg1;
                selectedLocBg2.gameObject.GetComponent<Image>().sprite = locBg1;
                break;
            case 2:
                selectedLocTitle.text = "Location 2";
                selectedLocBg1.gameObject.GetComponent<Image>().sprite = locBg2;
                selectedLocBg2.gameObject.GetComponent<Image>().sprite = locBg2;
                break;
            case 3:
                selectedLocTitle.text = "Location 3";
                selectedLocBg1.gameObject.GetComponent<Image>().sprite = locBg3;
                selectedLocBg2.gameObject.GetComponent<Image>().sprite = locBg3;
                break;
            case 4:
                selectedLocTitle.text = "Location 4";
                selectedLocBg1.gameObject.GetComponent<Image>().sprite = locBg4;
                selectedLocBg2.gameObject.GetComponent<Image>().sprite = locBg4;
                break;
            case 5:
                selectedLocTitle.text = "Location 5";
                selectedLocBg1.gameObject.GetComponent<Image>().sprite = locBg5;
                selectedLocBg2.gameObject.GetComponent<Image>().sprite = locBg5;
                break;
        }
    }
}
