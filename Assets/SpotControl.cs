using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpotControl : MonoBehaviour
{
    public bool OccupyingColorIsBlack;
    public bool Controlled;
    public int Position;
    public StartSetup GameMaster;
    public GameObject[] AllSpots;
    public List<GameObject>[,] PossibleMovesWhite = new List<GameObject>[6,6];
    public List<GameObject>[,] PossibleMovesBlack = new List<GameObject>[6, 6];
    public List<GameObject> ActualPossMoves = new List<GameObject>();
    public List<GameObject> Pieces;
    public bool Changed;
    public float y = .15F;
    public float BetweenPieces = 1.2F;
    public float InitialPiece = 5.85F;
    public float StackPieces = .2F;
    private JailControl Jail;

    // Start is called before the first frame update
    void Start()
    {
        Position = (int)(((char.GetNumericValue(gameObject.name[4]) - 1) * 6) + char.GetNumericValue(gameObject.name[6]) - 1);
        Changed = false;
        if (transform.parent.name == "Quadrant1" || transform.parent.name == "Quadrant2")
            InitialPiece = InitialPiece * -1;
        else
        {
            BetweenPieces = BetweenPieces * -1;
        }
        AllSpots = GameMaster.AllSpots;
        SetControlledVariables();
        CalcPossibleMoves();
    }

    // Update is called once per frame
    void Update()
    {
        if (Changed){
            SetControlledVariables();
            for (int x=0; x<Pieces.Count; x++){
                if (x < 5)
                {
                    Pieces[x].transform.position = new Vector3(InitialPiece + (BetweenPieces * x), y, transform.position.z);
                }
                else
                {
                    Pieces[x].transform.position = new Vector3(InitialPiece + (BetweenPieces * (x%5)), y + (StackPieces * (x/5)), transform.position.z);
                }

            }
            Changed = false;
        }
    }

    public void AddPiece(GameObject piece)
    {
        if (Pieces.Count == 1)
        {
            if(piece.name[0] == 'B' != OccupyingColorIsBlack)
            {
                Jail.AddPiece(Pieces[0]);
                Pieces.Remove(Pieces[0]);
            }
        }
        Pieces.Add(piece);
        Changed = true;
    }

    public void RemovePiece(GameObject piece)
    {
        Pieces.Remove(piece);
        Changed = true;
    }

    private void CalcPossibleMoves()
    {
        for(int roll1 = 1; roll1 < 7; roll1++)
        {
            for (int roll2 = 1; roll2 < 7; roll2++)
            {
                PossibleMovesWhite[roll1 - 1, roll2 - 1] = new List<GameObject>();
                PossibleMovesBlack[roll1 - 1, roll2 - 1] = new List<GameObject>();
                if (Position + roll1 < 24)
                    PossibleMovesWhite[roll1 - 1, roll2 - 1].Add(AllSpots[Position + roll1]);
                if (Position - roll1 >= 0)
                    PossibleMovesBlack[roll1 - 1, roll2 - 1].Add(AllSpots[Position - roll1]);
                if (Position + roll2 < 24 && roll2!=roll1)
                    PossibleMovesWhite[roll1 - 1, roll2 - 1].Add(AllSpots[Position + roll2]);
                if (Position - roll2 >= 0 && roll2 != roll1)
                    PossibleMovesBlack[roll1 - 1, roll2 - 1].Add(AllSpots[Position - roll2]);
            }
        }
    }

    private void SetControlledVariables()
    {
        if(Pieces.Count == 0){
            Controlled = false;
            OccupyingColorIsBlack = false;
        }
        else
        {
            Controlled = Pieces.Count > 1;
            OccupyingColorIsBlack = (Pieces[0].name[0] == 'B');
        }
        if (OccupyingColorIsBlack)
            Jail = GameMaster.BlackJailControl;
        else
            Jail = GameMaster.WhiteJailControl;
    }

    public void GetPossibleMoves(bool black, int roll1, int roll2)
    {
        ActualPossMoves.Clear();
        if (black == OccupyingColorIsBlack)
        {
            List<GameObject> temp;
            if (!black)
                temp = PossibleMovesWhite[roll1-1, roll2-1];
            else
                temp = PossibleMovesBlack[roll1-1, roll2-1];
            if (temp.Count != 0)
            {
                SpotControl contspot;
                int counter = 0;
                foreach (GameObject s in temp)
                {
                    contspot = s.GetComponent(typeof(SpotControl)) as SpotControl;
                    if (!contspot.Controlled || contspot.OccupyingColorIsBlack == OccupyingColorIsBlack)
                    {
                        //if doubles add to possible moves if the the increment hasn't been used yet & there are enough available moves before that
                        if (GameMaster.CurrentMover.Doubles)
                        {
                            if (!GameMaster.CurrentMover.RollsUsed[3-counter]&&ActualPossMoves.Count==counter)
                                ActualPossMoves.Add(s);
                        }
                        else {
                            //If not doubles add to list if the roll hasn't been used and the subsequent moves are available
                            int spotdiff = Mathf.Abs(contspot.Position - Position);
                            if (spotdiff == roll1 && !GameMaster.CurrentMover.RollsUsed[0])
                            {
                                ActualPossMoves.Add(s);
                            }
                            else if (spotdiff == roll2 && !GameMaster.CurrentMover.RollsUsed[1])
                            {
                                ActualPossMoves.Add(s);
                            }
                            else if (ActualPossMoves.Count > 0 && !(GameMaster.CurrentMover.RollsUsed[0]||GameMaster.CurrentMover.RollsUsed[1]))
                            {
                                ActualPossMoves.Add(s);
                            }
                        }
                    }
                    counter++;
                }          
            }   
        }
    }

    public List<GameObject> GetPieces()
    {
        return Pieces;
    }
}
