using Assets.Scripts;
using Michsky.UI.Shift;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine.Video;

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
    public TMPro.TMP_InputField inpAge;

    public Button login;

    public Sprite locBg1;
    public Sprite locBg2;
    public Sprite locBg3;
    public Sprite locBg4;
    public Sprite locBg5;

    public VideoPlayer videoPlayer;
    public VideoPlayer videoPlayerAgain;
    public RawImage assistantImage;

    public GameObject assistantAvatarObject;

    int locID = 2;
    bool loggedIn = false;

    Player player = new Player();

    private SplashScreenManager splashManager;
    CalibrationData calibrationData;
    Player playerData;

    private void Awake()
    {
        calibrationData = DataSaver.loadData<CalibrationData>("CalibrationData");
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

        playerData = DataSaver.loadData<Player>("PlayerData");
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
        assistantAvatarObject.SetActive(false);
        if (calibrationData != null)
        {
            userObject.transform.position = Vector3.zero;
            if(player != null)
            {
                if(player.numberOfBackToMenu <= 1)
                    StartCoroutine(ShowAssistant());
            }
            
            SetLocation(calibrationData.selectedLocation);
        } else
        {
            SetLocation(locID);
        }
    }

    // Update is called once per frame
    void Update()
    {
        if(!loggedIn)
        {
            if (inpName.text != "")
            {
                login.gameObject.SetActive(true);
            }
        }

        if (!videoPlayer.isPlaying && calibrationData == null)
        {
            videoPlayer.Stop();
            assistantAvatarObject.SetActive(false);
        } 
        if (calibrationData != null)
        {
            if (!videoPlayerAgain.isPlaying)
            {
                videoPlayerAgain.Stop();
                assistantAvatarObject.SetActive(false);
            }
        }
        
        if(userObject.transform.position.x < -1.4f)
        {
            userObject.transform.position = new Vector3(-1.5f, 0, userObject.transform.position.z);
        }
        if (userObject.transform.position.x > 1.4f)
        {
            userObject.transform.position = new Vector3(1.5f, 0, userObject.transform.position.z);
        }
        if (userObject.transform.position.z < -1.4f)
        {
            userObject.transform.position = new Vector3(userObject.transform.position.x, 0, -1.5f);
        }
        if (userObject.transform.position.z > 1.4f)
        {
            userObject.transform.position = new Vector3(userObject.transform.position.x, 0, 1.5f);
        }
    }

    private void OnDestroy()
    {
        StopCoroutine(ShowAssistant());

        if(calibrationData != null)
        {
            StopCoroutine(PlayAssistantAgain());
        } else
        {
            StopCoroutine(PlayAssistantVideo());
        }

        DataSaver.saveData(player, "PlayerData_" + player.name);
    }

    public void StartVideoAssistant()
    {
        StartCoroutine(ShowAssistant());
    }

    IEnumerator ShowAssistant()
    {
        yield return new WaitForSecondsRealtime(3f);
        assistantAvatarObject.SetActive(true);

        if(calibrationData != null)
        {
            StartCoroutine(PlayAssistantAgain());
        } else
        {
            StartCoroutine(PlayAssistantVideo());
        }

    }

    IEnumerator PlayAssistantVideo()
    {
        videoPlayer.Prepare();
        WaitForSecondsRealtime wait = new(1);
        while (videoPlayer.isPrepared)
        {
            yield return wait;
            break;
        }
        assistantImage.texture = videoPlayer.targetTexture;
        videoPlayer.Play();
    }

    IEnumerator PlayAssistantAgain()
    {
        videoPlayerAgain.Prepare();
        WaitForSecondsRealtime wait = new(1);
        while (videoPlayerAgain.isPrepared)
        {
            yield return wait;
            break;
        }
        assistantImage.texture = videoPlayerAgain.targetTexture;
        videoPlayerAgain.Play();
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

    public void Login()
    {
        profileName.text = inpName.text;

        player.name = inpName.text;

        loggedIn = true;
        DataSaver.saveData(player, "PlayerData");
    }

    public void Navigate()
    {
        CalibrationData playerData = new CalibrationData();

        playerData.selectedLocation = locID;

        playerData.ux = userObject.transform.position.x;
        playerData.uz = userObject.transform.position.y;

        DataSaver.saveData(playerData, "CalibrationData");
        DataSaver.saveData(player, "PlayerData");
        SceneManager.LoadScene("LoadingScene");
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
