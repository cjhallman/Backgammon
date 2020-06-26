using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpotControl : PieceContainer
{
    public bool OccupyingColorIsBlack;
    public bool Controlled;
    public List<PieceContainer>[,] PossibleMovesWhite = new List<PieceContainer>[6,6];
    public List<PieceContainer>[,] PossibleMovesBlack = new List<PieceContainer>[6, 6];
    private JailControl Jail;

    // Start is called before the first frame update
    void Start()
    {
        BetweenPieces = 1.2f;
        InitialPiece = 5.85f;
        StackPieces = .2f;
        Position = (int)(((char.GetNumericValue(gameObject.name[4]) - 1) * 6) + char.GetNumericValue(gameObject.name[6]) - 1);
        Changed = true;
        if (transform.parent.name == "Quadrant1" || transform.parent.name == "Quadrant2")
            InitialPiece = InitialPiece * -1;
        else
        {
            BetweenPieces = BetweenPieces * -1;
        }
        SetControlledVariables();
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

    public override void AddPiece(GameObject piece)
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

    public override void CalcPossibleMoves()
    {
        //Called for each spot from startsetup
        for(int roll1 = 1; roll1 < 7; roll1++)
        {
            for (int roll2 = 1; roll2 < 7; roll2++)
            {
                PossibleMovesWhite[roll1 - 1, roll2 - 1] = new List<PieceContainer>();
                PossibleMovesBlack[roll1 - 1, roll2 - 1] = new List<PieceContainer>();
                if (Position + roll1 < 24)
                    PossibleMovesWhite[roll1 - 1, roll2 - 1].Add(GameMaster.AllSpots[Position + roll1]);
                if (Position - roll1 >= 0)
                    PossibleMovesBlack[roll1 - 1, roll2 - 1].Add(GameMaster.AllSpots[Position - roll1]);
                if (Position + roll2 < 24 && roll2!=roll1)
                    PossibleMovesWhite[roll1 - 1, roll2 - 1].Add(GameMaster.AllSpots[Position + roll2]);
                if (Position - roll2 >= 0 && roll2 != roll1)
                    PossibleMovesBlack[roll1 - 1, roll2 - 1].Add(GameMaster.AllSpots[Position - roll2]);
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

    public override void GetPossibleMoves(bool black, int roll1, int roll2)
    {
        ActualPossibleMoves.Clear();
        if (black == OccupyingColorIsBlack)
        {
            List<PieceContainer> temp;
            if (!black)
                temp = PossibleMovesWhite[roll1-1, roll2-1];
            else
                temp = PossibleMovesBlack[roll1-1, roll2-1];

            if (temp.Count != 0)
            {
                SpotControl contspot;
                int counter = 0;
                foreach (PieceContainer s in temp)
                {
                    contspot = s.GetComponent(typeof(SpotControl)) as SpotControl;
                    if (!contspot.Controlled || contspot.OccupyingColorIsBlack == OccupyingColorIsBlack)
                    {
                        //if doubles
                        if (GameMaster.CurrentMover.Doubles)
                        {
                            //Add to possible moves if the the increment hasn't been used yet
                            if (!GameMaster.CurrentMover.RollsUsed[3-counter]&&ActualPossibleMoves.Count==counter)
                                ActualPossibleMoves.Add(s);
                        }
                        else {
                            //If not doubles add to list if the roll hasn't been used
                            int spotdiff = Mathf.Abs(contspot.Position - Position);
                            if (spotdiff == roll1 && !GameMaster.CurrentMover.RollsUsed[0])
                                ActualPossibleMoves.Add(s);
                            else if (spotdiff == roll2 && !GameMaster.CurrentMover.RollsUsed[1])
                                ActualPossibleMoves.Add(s);
                            else if (ActualPossibleMoves.Count > 0 && !(GameMaster.CurrentMover.RollsUsed[0]||GameMaster.CurrentMover.RollsUsed[1]))
                                ActualPossibleMoves.Add(s);
                        }
                    }
                    counter++;
                }          
            }   
        }
    }
}
