using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameControl : MonoBehaviour
{
    public GameObject[] WhitePieces;
    public GameObject[] BlackPieces;
    public PieceContainer[] AllSpots;
    public CameraControl cam;
    public MoveControl CurrentMover;
    public GameObject BlackMover;
    public GameObject WhiteMover;
    public JailControl WhiteJailControl;
    public BaseControl WhiteBaseControl;
    public JailControl BlackJailControl;
    public BaseControl BlackBaseControl;
    public Text UIText;
    private DiceControl Die1, Die2, Die3, Die4;

    // Start is called before the first frame update
    void Start()
    {
        GetAllSpots();
        SetBaseSpots();
        SetJailSpots();
        FindDice();
        BlackMover.SetActive(true);
        WhiteMover.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        if (CurrentMover.Winner)
            SetMessage((CurrentMover.IsBlack ? "Black " : "White ") + "wins!");
        else if (CurrentMover.TurnOver)
        {
            //Tell them that they have no more moves to make
            SetMessage("Press space to pass control to other player");
            CurrentMover.GetComponentInChildren<MeshRenderer>().enabled = false;
        }
        else if (!CurrentMover.DiceRolled && !CurrentMover.PlayerRolledDice && !cam.flipping)
        {
            SetMessage((CurrentMover.IsBlack ? "Black: " : "White: ") + "Press space bar to roll dice");
            BlankDiceRollDisplays();
        }
        else
            SetMessage("");
    }

    void FindDice()
    {
        Die1 = GameObject.Find("DiceRoll1").GetComponent<DiceControl>();
        Die2 = GameObject.Find("DiceRoll2").GetComponent<DiceControl>();
        Die3 = GameObject.Find("DiceRoll3").GetComponent<DiceControl>();
        Die4 = GameObject.Find("DiceRoll4").GetComponent<DiceControl>();
    }

    public void DisplayDice()
    { 
        Die1.SetSprite(CurrentMover.roll1);
        Die2.SetSprite(CurrentMover.roll2);
        int ExtraDice = 0;
        if (CurrentMover.Doubles)
            ExtraDice = CurrentMover.roll1;
        Die3.SetSprite(ExtraDice);
        Die4.SetSprite(ExtraDice);
    }

    void BlankDiceRollDisplays()
    {
        Die1.GetComponent<DiceControl>().SetSprite(0);
        Die2.GetComponent<DiceControl>().SetSprite(0);
        Die3.GetComponent<DiceControl>().SetSprite(0);
        Die4.GetComponent<DiceControl>().SetSprite(0);
    }

    void GetAllSpots()
    {
        AllSpots = new PieceContainer[24];
        for(int x = 1; x <= 4; x++)
        {
            for (int z = 1; z <= 6; z++)
                AllSpots[((x - 1) * 6 + z)-1] = GameObject.Find("Spot" + x + "." + z).GetComponent<SpotControl>();
        }
        foreach(SpotControl s in AllSpots)
        {
            s.CalcPossibleMoves();
        }
    }

    void SetBaseSpots()
    {
        WhiteBaseControl.CalcPossibleMoves();
        BlackBaseControl.CalcPossibleMoves();
    }

    void SetJailSpots()
    {
        WhiteJailControl.CalcPossibleMoves();
        BlackJailControl.CalcPossibleMoves();
    }

    public void SetMessage(string message)
    {
        UIText.text = message;
    }

    public void SwitchTurns()
    {
        CurrentMover.MyTurn = false;
        CurrentMover.TurnOver = false;
        SetMessage("");
        cam.flip();
    }
}
