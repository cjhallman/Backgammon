using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerSelectionControl : MonoBehaviour
{
    public GameControl GameMaster;
    public Text ColorText, PlayerTypeText;
    public string[] PlayerTypes;
    private int TypeIndex = 0;

    // Start is called before the first frame update
    void Start()
    {
        ColorText.text = "White";
        PlayerTypeText.text = PlayerTypes[TypeIndex];
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.RightArrow))
        {
            TypeIndex++;
            if (TypeIndex >= PlayerTypes.Length)
                TypeIndex = 0;
            PlayerTypeText.text = PlayerTypes[TypeIndex];
        }
        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            TypeIndex--;
            if (TypeIndex < 0)
                TypeIndex = PlayerTypes.Length - 1;
            PlayerTypeText.text = PlayerTypes[TypeIndex];
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if(ColorText.text == "White")
            {
                GameMaster.WhiteMover.GetComponent<MoveControl>().SetPlayer(PlayerTypes[TypeIndex]);
                ColorText.text = "Black";
                TypeIndex = 0;
                PlayerTypeText.text = PlayerTypes[TypeIndex];
            }
            else
            {
                GameMaster.BlackMover.GetComponent<MoveControl>().SetPlayer(PlayerTypes[TypeIndex]);
                GameMaster.enabled = true;
                this.gameObject.SetActive(false);
            } 
        }

    }
}
