using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

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

    private bool gameOver;
    public bool gameStart;

    private bool mobile;
    public GameObject controlButtons;

    //Awake is called before Start
    private void Awake()
    {
        gameOver = false;
        gameStart = true;
        mobile = SceneManager.GetActiveScene().name.EndsWith("Mobile");
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
        if (!gameOver)
        {
            if (gameStart)
            {
                //Deciding who goes first
                if (!currentMover.diceRolled && !currentMover.playerRolledDice & !cam.flipping)
                {
                    if(!mobile)
                        SetMessage((currentMover.isBlack ? "Black: " : "White: ") + "Press space bar to roll 1 die");
                    else
                        SetMessage((currentMover.isBlack ? "Black: " : "White: ") + "Roll 1 die");

                }
                else {
                    SetMessage("");
                }
            }
            else if (currentMover.winner)
            {
                gameOver = true;
                AudioSource audioSource = GetComponent<AudioSource>();
                AudioClip audioClip = Resources.Load<AudioClip>("win");
                audioSource.PlayOneShot(audioClip);
                if(!mobile)
                    SetMessage((currentMover.isBlack ? "Black " : "White ") + "wins!\nPress space bar to play again");
                else
                    SetMessage((currentMover.isBlack ? "Black " : "White ") + "wins!\nPlay again?");
                blackMover.SetActive(false);
                whiteMover.SetActive(false);
            }    
            else if (currentMover.turnOver)
                currentMover.GetComponentInChildren<MeshRenderer>().enabled = false;
            else if (!currentMover.diceRolled && !currentMover.playerRolledDice && !cam.flipping && currentMover.myTurn)
            {
                if(!mobile)
                    SetMessage((currentMover.isBlack ? "Black: " : "White: ") + "Press space bar to roll dice");
                else
                    SetMessage((currentMover.isBlack ? "Black: " : "White: ") + "Roll dice");
                BlankDiceRollDisplays();
            }
            else
                SetMessage("");
        }
        else if (Input.GetKeyDown(KeyCode.Space))
                SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public int GetLargerFirstRoll()
    {
        if (die1.curRollNum == die2.curRollNum)
            return 0;
        else return Mathf.Max(die1.curRollNum, die2.curRollNum);
    }

    void FindDice()
    {
        die1 = GameObject.Find("DiceRoll1").GetComponent<DiceControl>();
        die2 = GameObject.Find("DiceRoll2").GetComponent<DiceControl>();
        die3 = GameObject.Find("DiceRoll3").GetComponent<DiceControl>();
        die4 = GameObject.Find("DiceRoll4").GetComponent<DiceControl>();
    }
    public void DisplayDie(bool one)
    {
        if (one)
            die1.SetSprite(currentMover.roll1);
        else
            die2.SetSprite(currentMover.roll2);
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

    public void BlankDiceRollDisplays()
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
        if (message == "")
            uiText.gameObject.transform.parent.gameObject.SetActive(false);
        else
            uiText.gameObject.transform.parent.gameObject.SetActive(true);
    }

    public void SwitchTurns()
    {
        currentMover.myTurn = false;
        currentMover.turnOver = false;
        if (controlButtons != null)
            controlButtons.SetActive(false);
        SetMessage("");
        cam.flip();
        
    }

    public void CurrentMoverRollDice()
    {
        currentMover.RollDice();
    }

    public void CurrentMoverSelectNext(string direction)
    {
        currentMover.SelectNext(direction);
    }

    public void CurrentMoverSelectPieceOrSpot()
    {
        currentMover.PickPieceOrSpot();
    }
}
