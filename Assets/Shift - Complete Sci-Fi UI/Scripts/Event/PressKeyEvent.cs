using UnityEngine;
using UnityEngine.Events;

namespace Michsky.UI.Shift
{
    public class PressKeyEvent : MonoBehaviour
    {
        [Header("Key")]
        [SerializeField]
        public KeyCode hotkey;
        public bool pressAnyKey;
        public bool invokeAtStart;
        public bool isPermitted;

        [Header("Action")]
        [SerializeField]
        public UnityEvent pressAction;

        void Start()
        {
            if (invokeAtStart == true && isPermitted == true)
                pressAction.Invoke();
        }

        void Update()
        {
            if (pressAnyKey == true && isPermitted == true)
            {
                if (Input.anyKeyDown)
                    pressAction.Invoke();
            }

            else
            {
                if (Input.GetKeyDown(hotkey))
                    pressAction.Invoke();
            }
        }
    }
}