using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveControl : MonoBehaviour
{
    public StartSetup GameMaster;
    private List<GameObject> AvailablePieces = new List<GameObject>();
    private List<PieceContainer> AvailableSpots = new List<PieceContainer>();
    private List<PieceContainer> AvailableMoves = new List<PieceContainer>();
    public float y;
    private float LocationX, LocationY, LocationZ;
    private short piece, spot = 0;
    private int roll1, roll2 = 0;
    private Transform OldParent;
    private PieceContainer OldSpot;
    private PieceContainer CurrentSpot;
    public bool MyTurn, DiceRolled, Doubles, InitialSet, PieceSelected, PlayerRolledDice, TurnOver, Winner = false;
    private bool ListsSet, DiceViewed = false;
    public bool IsBlack;
    private JailControl Jail;
    private BaseControl Base;
    private bool ListenForSpace = true;

    //This is how to keep track of which rolls has been used
    public bool[] RollsUsed; 

    // Start is called before the first frame update
    void Start()
    {
        //Black goes first
        MyTurn = IsBlack;

        //Set jail and base variable based on color
        if (IsBlack)
        {
            Jail = GameMaster.BlackJailControl;
            Base = GameMaster.BlackBaseControl;
        }
        else
        {
            Jail = GameMaster.WhiteJailControl;
            Base = GameMaster.WhiteBaseControl;
        }
            
        PieceSelected = false;
        GetComponentInChildren<MeshRenderer>().enabled = false;

        //Declare length of 4 for Doubles
        RollsUsed = new bool[4];
    }

    // Update is called once per frame
    void Update()
    {
        if (!Winner)
        {
            if (MyTurn)
            {
                GameMaster.CurrentMover = this;

                if (TurnOver)
                {
                    //Press Space to hand off to other player
                    if (Input.GetKeyDown(KeyCode.Space))
                        GameMaster.SwitchTurns();
                }
                else
                {
                    //Roll dice if they haven't been yet
                    if (!DiceRolled)
                    {
                        if (PlayerRolledDice)
                            StartCoroutine(RollDice());
                        else if (Input.GetKeyDown(KeyCode.Space))
                            PlayerRolledDice = true;
                    }

                    //Set list of available spots and pieces
                    if (DiceViewed && !ListsSet)
                        SetAvailableLists();

                    //Set Location after lists have been set
                    if (ListsSet & !InitialSet)
                        SetInitialLocation();

                    //Enough time has passed for player to see result of dice
                    if (ListsSet & InitialSet)
                    {
                        //Select the next available piece or spot to move piece
                        if (Input.GetKeyDown(KeyCode.UpArrow))
                            SelectNext("Up");
                        if (Input.GetKeyDown(KeyCode.DownArrow))
                            SelectNext("Down");
                        //Select/Deselect piece or roll dice
                        if (Input.GetKeyDown(KeyCode.Space)&& ListenForSpace)
                        {
                            if(!PieceSelected)
                                StartCoroutine(SelectPiece());
                            else
                                StartCoroutine(SelectSpot());
                        }
                    }

                    //Cancel selection
                    if (Input.GetKeyDown(KeyCode.X))
                    {
                        if (PieceSelected)
                            CancelSelection();
                    }
                    transform.position = new Vector3(LocationX, LocationY, LocationZ);
                }
            }
            else
            {
                if (GameMaster.CurrentMover != this && !GameMaster.CurrentMover.MyTurn && !GameMaster.cam.flipping)
                    MyTurn = true;
                DiceRolled = DiceViewed = PlayerRolledDice = ListsSet = InitialSet = PieceSelected = false;
                GetComponentInChildren<MeshRenderer>().enabled = false;
            }
        }
    }

    bool PickingFromJail()
    {
        return (Jail.Pieces.Count > 0);
    }

    void CancelSelection()
    {
        PieceSelected = false;
        GetComponentInChildren<Renderer>().material.color = Color.red;
        AvailablePieces[piece].transform.parent = OldParent;
        OldSpot.GetComponent<SpotControl>().Changed = true;
        InitialSet = false;
    }
    void SetRollsUsed(int spotsmoved)
    {
        if (!Doubles)
        {
            //If the number of spots moved =  one of the rolls -> That's the one used
            if (spotsmoved == roll1 && !RollsUsed[0]) {
                SetUsedRoll(0);
            }   
            else if (spotsmoved == roll2 && !RollsUsed[1])
            {
                SetUsedRoll(1);
            }   
            else
            {
                //Spots moved is less than the rolls. Pick which ever one hasn't been used yet or the smallest.
                if (RollsUsed[0] && !RollsUsed[1])
                {
                    SetUsedRoll(1);
                }
                else if (!RollsUsed[0] && RollsUsed[1])
                {
                    SetUsedRoll(0);
                }
                else if (!RollsUsed[0] && !RollsUsed[1])
                {
                    if (roll1 < roll2)
                    {
                        SetUsedRoll(0);
                    } 
                    else
                    {
                        SetUsedRoll(1);
                    }    
                }
            }    
        }
        else
        {
            int x = 0;
            while(RollsUsed[x])
                x++;
            SetUsedRoll(x);
        }
        ListsSet=false;
    }

    void SetUsedRoll(int x)
    {
        RollsUsed[x] = true;
        GameObject.Find(string.Concat("DiceRoll", x + 1)).GetComponent<DiceControl>().SetSprite(0);
    }

    void SetInitialLocation()
    {
        spot = 0;
        CurrentSpot = AvailableSpots[spot];
        AvailablePieces = new List<GameObject>(CurrentSpot.Pieces);
        piece = 0;
        LocationX = AvailablePieces[piece].transform.position.x;
        LocationY = AvailablePieces[piece].transform.position.y + y;
        LocationZ = AvailablePieces[piece].transform.position.z;
        GetComponentInChildren<MeshRenderer>().enabled = true;
        InitialSet = true;
    }

    void SelectNext(string direction)
    {
        switch (direction)
        {
            case "Up":
                if (!PieceSelected)
                {
                    if (piece < AvailablePieces.Count - 1)
                        piece++;
                    else
                    {
                        if (spot < AvailableSpots.Count - 1)
                            spot++;
                        else
                            spot = 0;
                        CurrentSpot = AvailableSpots[spot];
                        AvailablePieces = new List<GameObject>(CurrentSpot.Pieces);
                        piece = 0;
                    }   
                }
                else
                {
                    if (spot < AvailableMoves.Count - 1)
                        spot++;
                    else
                        spot = 0;
                    CurrentSpot = AvailableMoves[spot];
                }
                break;
            case "Down":
                if (!PieceSelected)
                {
                    if (piece > 0)
                        piece--;
                    else
                    {
                        if (spot > 0)
                            spot--;
                        else
                            spot = (short)(AvailableSpots.Count - 1);
                        CurrentSpot = AvailableSpots[spot];
                        AvailablePieces = new List<GameObject>(CurrentSpot.Pieces);
                        piece = (short)(AvailablePieces.Count - 1);
                    }
                }
                else
                {
                    if (spot > 0)
                        spot--;
                    else
                        spot = (short)(AvailableMoves.Count - 1);
                    CurrentSpot = AvailableMoves[spot];
                }
                break;

        }
        if (!PieceSelected)
        {
            LocationX = AvailablePieces[piece].transform.position.x;
            LocationY = AvailablePieces[piece].transform.position.y + y;
            LocationZ = AvailablePieces[piece].transform.position.z;
        }
        else
        {
            LocationX = AvailableMoves[spot].transform.position.x;
            LocationY = AvailableMoves[spot].transform.position.y + y;
            LocationZ = AvailableMoves[spot].transform.position.z;
        }
    }

    IEnumerator RollDice() {

        DiceViewed = false;
        roll1 = Random.Range(1, 6);
        roll2 = Random.Range(1, 6);
        Doubles = (roll1 == roll2);
        GameObject.Find("DiceRoll1").GetComponent<DiceControl>().SetSprite(roll1);
        GameObject.Find("DiceRoll2").GetComponent<DiceControl>().SetSprite(roll2);
        if (Doubles)
        {
            GameObject.Find("DiceRoll3").GetComponent<DiceControl>().SetSprite(roll1);
            GameObject.Find("DiceRoll4").GetComponent<DiceControl>().SetSprite(roll1);
        }
        else
        {
            GameObject.Find("DiceRoll3").GetComponent<DiceControl>().SetSprite(0);
            GameObject.Find("DiceRoll4").GetComponent<DiceControl>().SetSprite(0);
        }

        //Set values for rolls used
        RollsUsed[0] = RollsUsed[1] = false;
        RollsUsed[2] = RollsUsed[3] = !Doubles;
        GameMaster.SetMessage("");
        yield return new WaitForSecondsRealtime(1f);
        DiceRolled = true;
        yield return new WaitForSecondsRealtime(.5f);
        DiceViewed = true;
    }

    IEnumerator SelectPiece()
    {
        if (PickingFromJail())
        {
            AvailableMoves = Jail.ActualPossibleMoves;
        }
        else
        {
            OldSpot = CurrentSpot;
            AvailableMoves = OldSpot.ActualPossibleMoves;
            if (Base.BearingOff() && Base.ActualPossibleMoves.Contains(OldSpot))
                AvailableMoves.Add(Base);
        }
        OldParent = AvailablePieces[piece].transform.parent;
        AvailablePieces[piece].transform.parent = transform;
        GetComponentInChildren<Renderer>().material.color = Color.yellow;
        PieceSelected = true;
        yield return new WaitForSecondsRealtime(.1f);
        SelectNext("Up");
        yield return new WaitForSecondsRealtime(.1f);
        ListenForSpace = true;
    }

    IEnumerator SelectSpot()
    {
        int spotsmoved;
        if (PickingFromJail())
        {
            if (IsBlack)
                spotsmoved = 24 - CurrentSpot.Position;
            else
                spotsmoved = 1 + CurrentSpot.Position;
            Jail.RemovePiece(AvailablePieces[piece]);
            CurrentSpot.AddPiece(AvailablePieces[piece]);
        }
        else
        {
            OldSpot.RemovePiece(AvailablePieces[piece]);
            if (CurrentSpot != null)
            {
                spotsmoved = Mathf.Abs(CurrentSpot.Position - OldSpot.Position);
                CurrentSpot.AddPiece(AvailablePieces[piece]);
            }
            else
            {
                spotsmoved = Mathf.Abs(Base.Position - OldSpot.Position);
                Base.AddPiece(AvailablePieces[piece]);
            }
        }
        AvailablePieces[piece].transform.parent = OldParent;
        GetComponentInChildren<Renderer>().material.color = Color.red;
        PieceSelected = false;
        SetRollsUsed(spotsmoved);
        yield return new WaitForSecondsRealtime(.1f);
        ListenForSpace = true;
    }

    void SetAvailableLists()
    {
        //Check if win
        if(Base.Pieces.Count == 15)
        {
            Winner = true;
        }
        else
        {
            AvailableSpots.Clear();
            AvailablePieces.Clear();
            if (PickingFromJail())
            {
                Jail.GetPossibleMoves(IsBlack, roll1, roll2);
                if (Jail.ActualPossibleMoves.Count > 0)
                {
                    AvailableSpots.Add(Jail);
                }
            }
            else
            {
                foreach (PieceContainer s in GameMaster.AllSpots)
                {
                    s.GetPossibleMoves(IsBlack, roll1, roll2);
                    if (s.ActualPossibleMoves.Count > 0)
                    {
                        if (!AvailableSpots.Contains(s) && s.Pieces.Count > 0)
                        {
                            AvailableSpots.Add(s);
                        }
                    }
                }
                if (Base.BearingOff())
                {
                    Base.GetPossibleMoves(IsBlack, roll1, roll2);
                    if (Base.ActualPossibleMoves.Count > 0)
                    {
                        foreach (PieceContainer s in Base.ActualPossibleMoves)
                        {
                            if (!AvailableSpots.Contains(s) && s.Pieces.Count > 0)
                                AvailableSpots.Add(s);
                        }
                    }
                }
            }
            if (AvailableSpots.Count == 0)
            {
                TurnOver = true;
            }
            else
            {
                ListsSet = true;
                InitialSet = false;
            }
        }        
    }
}
