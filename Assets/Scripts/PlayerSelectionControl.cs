using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerSelectionControl : MonoBehaviour
{
    public GameControl gameMaster;
    public Text colorText, playerTypeText;
    public string[] playerTypes;
    private int typeIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        colorText.text = "White";
        playerTypeText.text = playerTypes[typeIndex];
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
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            typeIndex--;
            if (typeIndex < 0)
                typeIndex = playerTypes.Length - 1;
            playerTypeText.text = playerTypes[typeIndex];
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if(colorText.text == "White")
            {
                gameMaster.whiteMover.GetComponent<MoveControl>().SetPlayer(playerTypes[typeIndex]);
                colorText.text = "Black";
                typeIndex = 0;
                playerTypeText.text = playerTypes[typeIndex];
            }
            else
            {
                gameMaster.blackMover.GetComponent<MoveControl>().SetPlayer(playerTypes[typeIndex]);
                gameMaster.enabled = true;
                this.gameObject.SetActive(false);
            } 
        }

    }
}
