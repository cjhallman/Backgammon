using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerSelectionControl : MonoBehaviour
{
    public GameControl gameMaster;
    private Text colorText, playerTypeText;
    public string[] playerTypes;
    private int typeIndex = 0;
    private AudioSource audioSource;
    private AudioClip toggleAudio;
    private AudioClip selectionAudio;
    
    // Start is called before the first frame update
    void Start()
    {
        colorText = GameObject.Find("ColorLabel").GetComponent<Text>();
        playerTypeText = GameObject.Find("TypeLabel").GetComponent<Text>();
        colorText.text = "Black";
        playerTypeText.text = playerTypes[typeIndex];
        audioSource = gameMaster.GetComponent<AudioSource>();
        toggleAudio = Resources.Load<AudioClip>("toggleUI");
        selectionAudio = Resources.Load<AudioClip>("selectionUI");
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            typeIndex++;
            if (typeIndex >= playerTypes.Length)
                typeIndex = 0;
            playerTypeText.text = playerTypes[typeIndex];
            //Play sound
            audioSource.PlayOneShot(toggleAudio);
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            typeIndex--;
            if (typeIndex < 0)
                typeIndex = playerTypes.Length - 1;
            playerTypeText.text = playerTypes[typeIndex];
            //Play sound
            audioSource.PlayOneShot(toggleAudio);
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            audioSource.PlayOneShot(selectionAudio);
            if (colorText.text == "Black")
            {
                gameMaster.blackMover.GetComponent<MoveControl>().SetPlayer(playerTypes[typeIndex]);
                colorText.text = "White";
                typeIndex = 0;
                playerTypeText.text = playerTypes[typeIndex];
            }
            else
            {
                gameMaster.whiteMover.GetComponent<MoveControl>().SetPlayer(playerTypes[typeIndex]);
                gameMaster.enabled = true;
                this.gameObject.SetActive(false);
            } 
        }

    }
}
