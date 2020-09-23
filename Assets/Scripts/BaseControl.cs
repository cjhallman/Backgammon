using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseControl : PieceContainerControl
{ 
    public List<int> possibleMoves = new List<int>();

    public BaseControl(string name, GameControl gm, List<GameObject> initPieces)
    {
        isBlack = name.EndsWith("Black");
        allSpots = new PieceContainerControl[24];
        for (int x = 0; x < gm.allSpots.Length; x++)
            allSpots[x] = gm.allSpots[x].pcc;
        pieces = initPieces;
    }

    public BaseControl(PieceContainerControl pcc)
    {
        pieces = new List<GameObject>();
        foreach (GameObject piece in pcc.pieces)
            pieces.Add(piece);
        position = pcc.position;
        actualPossibleMoves = pcc.actualPossibleMoves;
        isBlack = pcc.isBlack;
    }

    public override void InitializeOtherPieceContainerControls(PieceContainerControl[] arrPcc, PieceContainerControl whiteJail, PieceContainerControl blackJail)
    {
        allSpots = arrPcc;
    }

    // Start is called before the first frame update
    public override void Start()
    {
        stackPieces = 1f;
        y = .6f;
        if (isBlack)
        {
            position = -1;
            betweenPieces = .22f;
            initialPiece = -6.25f;
        }
        else
        {
            position = 24;
            betweenPieces = -.22f;
            initialPiece = 6.25f;
        }
        changed = true;
    }

    // Update is called once per frame
    public override Vector3 CalculatePiecePosition(int x, Vector3 position)
    {
        return new Vector3(initialPiece + (betweenPieces * x), y, position.z);
    }

    public override void GetPossibleMoves(bool black, int roll1, int roll2, bool[] rollsUsed)
    {
        bool doubles = (roll1 == roll2);
        actualPossibleMoves.Clear();
        SpotControl sc1 = (SpotControl) allSpots[possibleMoves[roll1 - 1]];
        SpotControl sc2 = (SpotControl)allSpots[possibleMoves[roll2 - 1]];
        if (sc1.isBlack == black && sc1.pieces.Count > 0)
            if (!doubles)
            {
                if (!rollsUsed[0])
                    actualPossibleMoves.Add(possibleMoves[roll1 - 1]);  
            }
            else
            {
                if (!rollsUsed[3])
                    actualPossibleMoves.Add(possibleMoves[roll1 - 1]);
            }

        if (!doubles && sc2.isBlack == black && sc2.pieces.Count > 0 && !rollsUsed[1])
            actualPossibleMoves.Add(possibleMoves[roll2 - 1]);
        if (actualPossibleMoves.Count == 0)
        {
            if (!doubles)
            {
                if (rollsUsed[0] && !rollsUsed[1])
                    CheckAbove(roll2, black);
                else if (!rollsUsed[0] && rollsUsed[1])
                    CheckAbove(roll1, black);
                else if (!rollsUsed[0] && !rollsUsed[1])
                {
                    if (roll1 < roll2)
                        CheckAbove(roll1, black);
                    else
                        CheckAbove(roll2, black);
                }
            }
            else if (!rollsUsed[3])
                CheckAbove(roll1, black);
        }
    }

    public override void CalcPossibleMoves()
    {
        int x = 0;
        int endx = 6;
        if (position == 24)
        {
            x = 23;
            endx = 17;
        }
        while (x != endx)
        {
            possibleMoves.Add(x);
            if (endx > x)
                x++;
            else x--;
        }
    }

    public void CheckAbove(int roll,bool black)
    {
        SpotControl sc;
        //Check if there are any pieces above, if there are, do nothing
        for(int x = roll; x < possibleMoves.Count; x++)
        {
            sc = (SpotControl) allSpots[possibleMoves[x]];
            if (sc.isBlack == black && sc.pieces.Count > 0)
                return;
        }
        //Find next spot below with pieces and add to available moves
        for(int x = roll-2; x >= 0; x--)
        {
            sc = (SpotControl)allSpots[possibleMoves[x]];
            if (sc.isBlack == black && sc.pieces.Count > 0)
            {
                actualPossibleMoves.Add(possibleMoves[x]);
                return;
            }
        }
    }

    public bool BearingOff() {
        //Check to see if Mover can start bearing off
        int sum = 0;
        foreach (int pos in possibleMoves)
        {
            SpotControl s = (SpotControl)allSpots[pos];
            if (s.isBlack == isBlack)
                sum += s.pieces.Count;
        }
        sum += pieces.Count;
        return sum == 15;
    }
}
