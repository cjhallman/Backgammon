using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JailControl : PieceContainerControl
{
    public List<int> possibleMoves = new List<int>();

    public JailControl(string name, GameControl gm, List<GameObject> initPieces)
    {
        isBlack = name.EndsWith("Black");
        allSpots = new PieceContainerControl[24];
        for (int x = 0; x < gm.allSpots.Length; x++)
            allSpots[x] = gm.allSpots[x].pcc;
        pieces = initPieces;
    }

    public JailControl(PieceContainerControl pcc)
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
        stackPieces = .2f;
        y = 1f;
        if (isBlack)
        {
            position = 24;
            betweenPieces = -1.2f;
        }
        else
        {
            position = -1;
            betweenPieces = 1.2f;
        }
        changed = true;
    }

    // Update is called once per frame
    public override Vector3 CalculatePiecePosition(int x, Vector3 position)
    {
        if (x < 5)
            return new Vector3(position.x + (betweenPieces * x), y, position.z);
        else
            return new Vector3(position.x + (betweenPieces * (x % 5)), y + (stackPieces * (x / 5)), position.z);
    }

    public override void GetPossibleMoves(bool black, int roll1, int roll2, bool[] rollsUsed)
    {
        actualPossibleMoves.Clear();
        SpotControl sc1 = (SpotControl) allSpots[possibleMoves[roll1 - 1]];
        SpotControl sc2 = (SpotControl) allSpots[possibleMoves[roll2 - 1]];
        //if not doubles 
        if (!(roll1==roll2))
        {
            //if spot that roll would get you to is not controlled or is occuppied by this color
            //and roll has not been used -> Add spot to possible moves
            if ((!sc1.controlled || sc1.isBlack == black) && !rollsUsed[0])
                actualPossibleMoves.Add(possibleMoves[roll1 - 1]);
            if ((!sc2.controlled || sc2.isBlack == black) && !rollsUsed[1])
                actualPossibleMoves.Add(possibleMoves[roll2 - 1]);
        }
        else if ((!sc1.controlled || sc1.isBlack == black) && !rollsUsed[3])
            //if doubles and spot that roll would get you to is not controlled or is occuppied by this color
            //and theres atleast one move left -> Add the spot
            actualPossibleMoves.Add(possibleMoves[roll1 - 1]);
    }

    public override void CalcPossibleMoves()
    {
        int x = 0;
        int endx = 6;
        if (isBlack)
        {
            x = 23;
            endx = 17;
        }
        while (x != endx)
        {
            possibleMoves.Add(x);
            if(endx > x)
                x++;
            else x--;
        }
    }
}
