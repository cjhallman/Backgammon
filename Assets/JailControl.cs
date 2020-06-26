using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JailControl : PieceContainer 
{
    public List<PieceContainer> PossibleMoves = new List<PieceContainer>();

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (Changed)
        {
            for (int x = 0; x < Pieces.Count; x++)
            {
                if (x < 5)
                    Pieces[x].transform.position = new Vector3(transform.position.x + (BetweenPieces * x), y, transform.position.z);
                else
                    Pieces[x].transform.position = new Vector3(transform.position.x + (BetweenPieces * (x % 5)), y + (StackPieces * (x / 5)), transform.position.z);
            }
            Changed = false;
        }
    }

    public override void GetPossibleMoves(bool black, int roll1, int roll2)
    {
        ActualPossibleMoves.Clear();
        SpotControl sc1 = (SpotControl)PossibleMoves[roll1 - 1];
        SpotControl sc2 = (SpotControl)PossibleMoves[roll2 - 1];
        //if not doubles 
        if (!GameMaster.CurrentMover.Doubles)
        {
            //if spot that roll would get you to is not controlled or is occuppied by this color
            //and roll has not been used -> Add spot to possible moves
            if ((!sc1.Controlled || sc1.OccupyingColorIsBlack == black) && !GameMaster.CurrentMover.RollsUsed[0])
                ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);
            if ((!sc2.Controlled || sc2.OccupyingColorIsBlack == black) && !GameMaster.CurrentMover.RollsUsed[1])
                ActualPossibleMoves.Add(PossibleMoves[roll2 - 1]);
        }
        else if ((!sc1.Controlled || sc1.OccupyingColorIsBlack == black) && !GameMaster.CurrentMover.RollsUsed[3])
            //if doubles and spot that roll would get you to is not controlled or is occuppied by this color
            //and theres atleast one move left -> Add the spot
            ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);
    }

    public override void CalcPossibleMoves()
    {
        int x = 0;
        int endx = 6;
        if (this.gameObject.name.StartsWith("Black"))
        {
            x = 23;
            endx = 17;
        }
        while (x != endx)
        {
            PossibleMoves.Add(GameMaster.AllSpots[x]);
            if(endx > x)
                x++;
            else x--;
        }
    }
}
