using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems; // Required when using Event data.

public class SoundControl : MonoBehaviour, IPointerDownHandler
{
    public AudioSource audioSource;
    private GameObject offDisplay;
    private bool off;
    // Start is called before the first frame update
    void Start()
    {
        offDisplay = gameObject.transform.Find("Off").gameObject;
        off = false;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        off = !off;
        offDisplay.SetActive(off);
        audioSource.mute = off;
    }
}
