using UnityEngine;
using UnityEngine.UI;
using TMPro;

namespace Michsky.UI.Shift
{
    public class ChapterButton : MonoBehaviour
    {
        [Header("Resources")]
        public Sprite backgroundImage;
        public string buttonTitle = "My Title";
        [TextArea] public string buttonDescription = "My Description";

        [Header("Settings")]
        public bool useCustomResources = false;

        [Header("Status")]
        public bool enableStatus;
        public StatusItem statusItem;

        Image backgroundImageObj;
        TextMeshProUGUI titleObj;
        TextMeshProUGUI descriptionObj;

        public enum StatusItem
        {
            None,
            Locked,
            Completed
        }

        void Start()
        {
            if (useCustomResources == false)
            {
                backgroundImageObj = gameObject.transform.Find("Content/Background").GetComponent<Image>();
                titleObj = gameObject.transform.Find("Content/Texts/Title").GetComponent<TextMeshProUGUI>();
                descriptionObj = gameObject.transform.Find("Content/Texts/Description").GetComponent<TextMeshProUGUI>();

                backgroundImageObj.sprite = backgroundImage;
                titleObj.text = buttonTitle;
                descriptionObj.text = buttonDescription;
            }
        }
    }
}