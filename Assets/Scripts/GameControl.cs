using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControl : MonoBehaviour
{
    public GameObject[] whitePieces;
    public GameObject[] blackPieces;
    
    public CameraControl cam;
    public MoveControl currentMover;
    public GameObject blackMover;
    public GameObject whiteMover;

    public Text uiText;
    private DiceControl die1, die2, die3, die4;

    public PieceContainerObject[] allSpots;
    public PieceContainerObject whiteJailControl;
    public PieceContainerObject whiteBaseControl;
    public PieceContainerObject blackJailControl;
    public PieceContainerObject blackBaseControl;

    //Awake is called before Start
    private void Awake()
    {
        GetAllSpots();
        SetBaseSpots();
        SetJailSpots();
    }
    // Start is called before the first frame update
    void Start()
    {
        //Turn on Piece Container Objects
        InitializeAllSpotsSpotObjects();
        blackMover.SetActive(true);
        whiteMover.SetActive(true);
        FindDice();
    }

    // Update is called once per frame
    void Update()
    {
        if (currentMover.winner)
            SetMessage((currentMover.isBlack ? "Black " : "White ") + "wins!");
        else if (currentMover.turnOver)
        {
            //Tell them that they have no more moves to make
            currentMover.GetComponentInChildren<MeshRenderer>().enabled = false;
        }
        else if (!currentMover.diceRolled && !currentMover.playerRolledDice && !cam.flipping)
        {
            SetMessage((currentMover.isBlack ? "Black: " : "White: ") + "Press space bar to roll dice");
            BlankDiceRollDisplays();
        }
        else
            SetMessage("");
    }

    void FindDice()
    {
        die1 = GameObject.Find("DiceRoll1").GetComponent<DiceControl>();
        die2 = GameObject.Find("DiceRoll2").GetComponent<DiceControl>();
        die3 = GameObject.Find("DiceRoll3").GetComponent<DiceControl>();
        die4 = GameObject.Find("DiceRoll4").GetComponent<DiceControl>();
    }

    public void DisplayDice()
    { 
        die1.SetSprite(currentMover.roll1);
        die2.SetSprite(currentMover.roll2);
        int extraDice = 0;
        if (currentMover.doubles)
            extraDice = currentMover.roll1;
        die3.SetSprite(extraDice);
        die4.SetSprite(extraDice);
    }

    void BlankDiceRollDisplays()
    {
        die1.GetComponent<DiceControl>().SetSprite(0);
        die2.GetComponent<DiceControl>().SetSprite(0);
        die3.GetComponent<DiceControl>().SetSprite(0);
        die4.GetComponent<DiceControl>().SetSprite(0);
    }

    void GetAllSpots()
    {
        allSpots = new PieceContainerObject[24];
        for (int x = 1; x <= 4; x++)
        {
            for (int z = 1; z <= 6; z++)
            {
                PieceContainerObject pobj = GameObject.Find("Spot" + x + "." + z).GetComponent<PieceContainerObject>();
                allSpots[((x - 1) * 6 + z) - 1] = pobj;
                pobj.enabled = true;
            }
                
        }
    }

    void SetBaseSpots()
    {
        whiteBaseControl = GameObject.Find("BaseWhite").GetComponent<PieceContainerObject>();
        blackBaseControl = GameObject.Find("BaseBlack").GetComponent<PieceContainerObject>();
        whiteBaseControl.enabled = true;
        blackBaseControl.enabled = true;
    }

    void SetJailSpots()
    {
        whiteJailControl = GameObject.Find("JailWhite").GetComponent<PieceContainerObject>();
        blackJailControl = GameObject.Find("JailBlack").GetComponent<PieceContainerObject>();
        whiteJailControl.enabled = true;
        blackJailControl.enabled = true;
    }

    void InitializeAllSpotsSpotObjects()
    {
        foreach (PieceContainerObject pobj in allSpots)
            pobj.InitializeAllSpotsOnControl();
    }

    public void SetMessage(string message)
    {
        uiText.text = message;
    }

    public void SwitchTurns()
    {
        currentMover.myTurn = false;
        currentMover.turnOver = false;
        SetMessage("");
        cam.flip();
    }
}
