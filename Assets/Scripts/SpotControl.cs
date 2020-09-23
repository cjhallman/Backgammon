using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpotControl : PieceContainerControl
{
    public bool controlled;
    public List<int>[,] possibleMovesWhite = new List<int>[6,6];
    public List<int>[,] possibleMovesBlack = new List<int>[6, 6];
    private PieceContainerControl whiteJailControl;
    private PieceContainerControl blackJailControl;
    private PieceContainerControl jailControl;

    private int quadrant, numInQuadrant;

    public SpotControl(string name, List<GameObject> initPieces)
    {
        quadrant = (int)char.GetNumericValue(name[4]);
        numInQuadrant = (int)char.GetNumericValue(name[6]);
        pieces = initPieces;
    }

    public SpotControl(SpotControl pcc)
    {
        pieces = new List<GameObject>();
        foreach (GameObject piece in pcc.pieces)
            pieces.Add(piece);
        position = pcc.position;
        possibleMovesWhite = pcc.possibleMovesWhite;
        possibleMovesBlack = pcc.possibleMovesBlack;
        actualPossibleMoves = pcc.actualPossibleMoves;
    }

    public void InitializeOtherPieceContainerControls(GameControl gm)
    {
        allSpots = new PieceContainerControl[24];
        for (int x = 0; x < gm.allSpots.Length; x++)
            allSpots[x] = gm.allSpots[x].pcc;
        whiteJailControl = gm.whiteJailControl.pcc;
        blackJailControl = gm.blackJailControl.pcc;
        SetControlledVariables();
    }

    public override void InitializeOtherPieceContainerControls(PieceContainerControl[] arrPcc, PieceContainerControl whiteJail, PieceContainerControl blackJail)
    {
        allSpots = arrPcc;
        whiteJailControl = whiteJail;
        blackJailControl = blackJail;
        SetControlledVariables();
    }

    // Start is called before the first frame update
    public override void Start()
    {
        betweenPieces = 1.2f;
        initialPiece = 5.85f;
        stackPieces = .2f;
        position = ((quadrant - 1) * 6) + numInQuadrant - 1;
        changed = true;
        if (quadrant == 1 || quadrant == 2)
            initialPiece = initialPiece * -1;
        else
            betweenPieces = betweenPieces * -1;
        if (possibleMovesBlack == null)
            possibleMovesBlack = new List<int>[6, 6];
        if (possibleMovesWhite == null)
            possibleMovesWhite = new List<int>[6, 6];
        SetControlledVariables();
    }

    // Update is called once per frame
    public override Vector3 CalculatePiecePosition(int x, Vector3 position)
    {
        if (x < 5)
            return new Vector3(initialPiece + (betweenPieces * x), y, position.z);
        else
            return new Vector3(initialPiece + (betweenPieces * (x % 5)), y + (stackPieces * (x / 5)), position.z);
    }

    public override void AddPiece(GameObject piece)
    {
        if (pieces.Count == 1)
        { 
            if(piece.name[0] == 'B' != isBlack)
            {
                jailControl.AddPiece(pieces[0]); 
                pieces.Remove(pieces[0]);
            } 
        }
        pieces.Add(piece);
        changed = true;
        SetControlledVariables();
    }

    public override void RemovePiece(GameObject piece)
    {
        pieces.Remove(piece);
        changed = true;
        SetControlledVariables();
    }

    public override void CalcPossibleMoves()
    {
        //Called for each spot from startsetup
        for(int roll1 = 1; roll1 < 7; roll1++)
        {
            for (int roll2 = 1; roll2 < 7; roll2++)
            {
                possibleMovesWhite[roll1 - 1, roll2 - 1] = new List<int>();
                possibleMovesBlack[roll1 - 1, roll2 - 1] = new List<int>();
                if (position + roll1 < 24)
                    possibleMovesWhite[roll1 - 1, roll2 - 1].Add(position + roll1);
                if (position - roll1 >= 0)
                    possibleMovesBlack[roll1 - 1, roll2 - 1].Add(position - roll1);
                if (position + roll2 < 24 && roll2!=roll1)
                    possibleMovesWhite[roll1 - 1, roll2 - 1].Add(position + roll2);
                if (position - roll2 >= 0 && roll2 != roll1)
                    possibleMovesBlack[roll1 - 1, roll2 - 1].Add(position - roll2);
            }
        }
    }

    private void SetControlledVariables()
    {
        if (pieces.Count == 0)
        {
            controlled = false;
            isBlack = false;
        }
        else
        {
            controlled = pieces.Count > 1;
            isBlack = (pieces[0].name[0] == 'B');
        }
        if (isBlack)
            jailControl = blackJailControl;
        else
            jailControl = whiteJailControl;
    }

    public override void GetPossibleMoves(bool black, int roll1, int roll2, bool[] rollsUsed)
    {
        bool doubles = (roll1 == roll2);
        actualPossibleMoves.Clear();
        if (black == isBlack)
        {
            List<int> positions;
            if (!black)
                positions = possibleMovesWhite[roll1-1, roll2-1];
            else
                positions = possibleMovesBlack[roll1-1, roll2-1];

            if (positions.Count != 0)
            {
                SpotControl contspot;
                int counter = 0;
                foreach (int pos in positions)
                {
                    contspot = (SpotControl) allSpots[pos];
                    if (!contspot.controlled || contspot.isBlack == isBlack)
                    {
                        //if doubles
                        if (doubles)
                        {
                            //Add to possible moves if the the increment hasn't been used yet
                            if (!rollsUsed[3-counter]&&actualPossibleMoves.Count==counter)
                                actualPossibleMoves.Add(pos);
                        }
                        else {
                            //If not doubles add to list if the roll hasn't been used
                            int spotdiff = Mathf.Abs(contspot.position - position);
                            if (spotdiff == roll1 && !rollsUsed[0])
                                actualPossibleMoves.Add(pos);
                            else if (spotdiff == roll2 && !rollsUsed[1])
                                actualPossibleMoves.Add(pos);
                            else if (actualPossibleMoves.Count > 0 && !(rollsUsed[0]||rollsUsed[1]))
                                actualPossibleMoves.Add(pos);
                        }
                    }
                    counter++;
                }          
            }   
        }
    }
}
