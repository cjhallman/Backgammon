using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveControl : MonoBehaviour
{
    public StartSetup GameMaster;
    public List<GameObject> AvailablePieces;
    public List<GameObject> AvailableSpots;
    public List<GameObject> AvailableMoves;
    public bool MyTurn, PieceSelected;
    public float y;
    public float LocationX, LocationY, LocationZ;
    public short piece, spot = 0;
    public int roll1, roll2 = 0;
    public Vector3 TempLocation;
    private Transform OldParent;
    public SpotControl OldSpot;
    public SpotControl CurrentSpot;
    private bool DiceRolled = false;
    private bool ListsSet = false;
    public bool IsBlack;
    public bool Doubles;
    private bool SetInitial = false;
    private JailControl Jail;
    private bool PickingFromJail = false;
    private bool PlayerRolledDice = false;
    private BaseControl Base;
    private bool DiceViewed = false;

    //This is how to keep track of which rolls has been used
    public bool[] RollsUsed; 

    // Start is called before the first frame update
    void Start()
    {
        MyTurn = IsBlack;
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

    private void OnTriggerStay(Collider other)
    {
        if (other.gameObject.name.Substring(0,4)=="Spot")
            CurrentSpot = other.gameObject.GetComponent<SpotControl>();
        else if(other.gameObject.name.Substring(0, 4) == "Base")
        {
            CurrentSpot = null;
        }
            
    }

    // Update is called once per frame
    void Update()
    {
        if (MyTurn)
        {
            GameMaster.CurrentMover = this;
            //Roll dice if they haven't been yet
            if (!DiceRolled)
            {
                if (PlayerRolledDice)
                    StartCoroutine(RollDice());
                else
                    BlankDiceRollDisplays();
            }
                
            
            //Set list of available spots and pieces
            if(DiceViewed && !ListsSet)
                SetAvailableLists();

            if (SetInitial)
                SetInitialLocation();

            //Select the next available piece or spot to move piece
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                if (DiceViewed)
                    SelectNext("Up");
            }

            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                if(DiceViewed)
                    SelectNext("Down");
            }

            //Select/Deselect piece
            if (Input.GetKeyDown(KeyCode.Space)) {
                if (!PlayerRolledDice)
                    PlayerRolledDice = true;
                else if(DiceViewed)
                {
                    PieceSelected = !PieceSelected;
                    if (PieceSelected)
                    {
                        if (PickingFromJail)
                        {
                            AvailableMoves = Jail.ActualPossibleMoves;
                        }
                        else
                        {
                            OldSpot = CurrentSpot;
                            AvailableMoves = OldSpot.ActualPossMoves;
                            if (Base.BearingOff && Base.ActualPossibleMoves.Contains(OldSpot.gameObject))
                                AvailableMoves.Add(Base.gameObject);
                        }
                        OldParent = AvailablePieces[piece].transform.parent;
                        AvailablePieces[piece].transform.parent = transform;
                        GetComponentInChildren<Renderer>().material.color = Color.yellow;
                        SelectNext("Up");
                    }
                    else
                    {
                        int spotsmoved;
                        if (PickingFromJail)
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
                        SetRollsUsed(spotsmoved);
                    }
                }  
            }

            //Cancel selection
            if (Input.GetKeyDown(KeyCode.X))
            {
                if (PieceSelected)
                {
                    PieceSelected = false;
                    GetComponentInChildren<Renderer>().material.color = Color.red;
                    AvailablePieces[piece].transform.parent = OldParent;
                    OldSpot.GetComponent<SpotControl>().Changed = true;
                    SetInitial = true;
                }
            }
        }
        else
        {
            if (GameMaster.CurrentMover != this && !GameMaster.CurrentMover.MyTurn)
            {
                MyTurn = true;
            }
            DiceRolled = false;
            DiceViewed = false;
            PlayerRolledDice = false;
            ListsSet = false;
            SetInitial = false;
            PieceSelected = false;
            GetComponentInChildren<MeshRenderer>().enabled = false;
        }
        PickingFromJail = (Jail.Pieces.Count > 0);
        transform.position = new Vector3(LocationX, LocationY, LocationZ);
    }

    void SetRollsUsed(int spotsmoved)
    {
        if (!Doubles)
        {
            if (spotsmoved == roll1) {
                RollsUsed[0] = true;
                GameObject.Find("DiceRoll1").GetComponent<DiceControl>().SetSprite(0);
            }   
            else if (spotsmoved == roll2)
            {
                RollsUsed[1] = true;
                GameObject.Find("DiceRoll2").GetComponent<DiceControl>().SetSprite(0);
            }   
            else
            {
                if (RollsUsed[0] && !RollsUsed[1])
                {
                    RollsUsed[1] = true;
                    GameObject.Find("DiceRoll2").GetComponent<DiceControl>().SetSprite(0);
                }
                else if (!RollsUsed[0] && RollsUsed[1])
                {
                    RollsUsed[0] = true;
                    GameObject.Find("DiceRoll1").GetComponent<DiceControl>().SetSprite(0);
                }
                else if (!RollsUsed[0] && !RollsUsed[1])
                {
                    if (roll1 < roll2)
                    {
                        RollsUsed[0] = true;
                        GameObject.Find("DiceRoll1").GetComponent<DiceControl>().SetSprite(0);
                    } 
                    else
                    {
                        RollsUsed[1] = true;
                        GameObject.Find("DiceRoll2").GetComponent<DiceControl>().SetSprite(0);
                    }    
                }
            }    
        }
        else
        {
            int x = 0;
            while(spotsmoved > 0)
            {
                if (!RollsUsed[x])
                {
                    RollsUsed[x] = true;
                    GameObject.Find(string.Concat("DiceRoll",x+1)).GetComponent<DiceControl>().SetSprite(0);
                    spotsmoved -= roll1;
                }
                x++;
            }
        }
        ListsSet=false;
    }

    void SetInitialLocation()
    {
        SetInitial = false;
        piece = 0;
        LocationX = AvailablePieces[piece].transform.position.x;
        LocationY = AvailablePieces[piece].transform.position.y + y;
        LocationZ = AvailablePieces[piece].transform.position.z;
        GetComponentInChildren<MeshRenderer>().enabled = true;
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
                        piece = 0;
                }
                else
                {
                    if (spot < AvailableMoves.Count - 1)
                        spot++;
                    else
                        spot = 0;
                }
                break;
            case "Down":
                if (!PieceSelected)
                {
                    if (piece > 0)
                        piece--;
                    else
                        piece = (short)(AvailablePieces.Count - 1);
                }
                else
                {
                    if (spot > 0)
                        spot--;
                    else
                        spot = (short)(AvailableMoves.Count - 1);
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

    void BlankDiceRollDisplays()
    {
        GameObject.Find("DiceRoll1").GetComponent<DiceControl>().SetSprite(0);
        GameObject.Find("DiceRoll2").GetComponent<DiceControl>().SetSprite(0);
        GameObject.Find("DiceRoll3").GetComponent<DiceControl>().SetSprite(0);
        GameObject.Find("DiceRoll4").GetComponent<DiceControl>().SetSprite(0);
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
        yield return new WaitForSecondsRealtime(1f);
        DiceRolled = true;
        yield return new WaitForSecondsRealtime(.5f);
        DiceViewed = true;
    }

    void SetAvailableLists()
    {
        AvailableSpots.Clear();
        AvailablePieces.Clear();
        if(PickingFromJail)
        {
            Jail.GetPossibleMoves(IsBlack, roll1, roll2);
            if(Jail.ActualPossibleMoves.Count > 0)
            {
                foreach (GameObject p in Jail.Pieces)
                {
                    AvailablePieces.Add(p);
                }
            }
        }
        else
        {
            SpotControl ContSpot;
            foreach (GameObject s in GameMaster.AllSpots)
            {
                ContSpot = s.GetComponent(typeof(SpotControl)) as SpotControl;
                ContSpot.GetPossibleMoves(IsBlack, roll1, roll2);
                if (ContSpot.ActualPossMoves.Count > 0)
                {
                    if (!AvailableSpots.Contains(s))
                    {
                        AvailableSpots.Add(s);
                        foreach (GameObject p in s.GetComponent<SpotControl>().GetPieces())
                        {
                            AvailablePieces.Add(p);
                        }
                    }
                }
            }
            if (Base.BearingOff)
            {
                Base.GetPossibleMoves(IsBlack, roll1, roll2);
                if(Base.ActualPossibleMoves.Count > 0)
                {
                    foreach(GameObject s in Base.ActualPossibleMoves)
                    {
                        if (!AvailableSpots.Contains(s))
                        {
                            AvailableSpots.Add(s);
                            foreach (GameObject p in s.GetComponent<SpotControl>().GetPieces())
                             {
                                AvailablePieces.Add(p);
                            }
                        }
                    }
                }
            }
        }
        if (AvailablePieces.Count == 0)
        {
            MyTurn = false;
            GameMaster.cam.flip();
        }
        else
        {
            ListsSet = true;
            SetInitial=true;
        }
    }
}
