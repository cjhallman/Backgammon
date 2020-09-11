using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseControl : PieceContainer
{ 
    public List<PieceContainer> PossibleMoves = new List<PieceContainer>();

    // Start is called before the first frame update
    void Start()
    {
        if (this.gameObject.name.StartsWith("Black"))
            Position = -1;
        else
            Position = 24;
    }

    // Update is called once per frame
    void Update()
    {
        if (Changed)
        {
            for (int x = 0; x < Pieces.Count; x++)
            {
                Pieces[x].transform.position = new Vector3(InitialPiece + (BetweenPieces * x), y, transform.position.z);
                if(Pieces[x].transform.rotation.eulerAngles.z==0)
                    Pieces[x].transform.Rotate(new Vector3(0, 0, 1), 90f);
            }   
            Changed = false;
        }
    }

    public override void GetPossibleMoves(bool black, int roll1, int roll2)
    {
        ActualPossibleMoves.Clear();
        SpotControl sc1 = (SpotControl) PossibleMoves[roll1 - 1];
        SpotControl sc2 = (SpotControl) PossibleMoves[roll2 - 1];
        if (sc1.OccupyingColorIsBlack == black && sc1.Pieces.Count > 0)
            if (!GameMaster.CurrentMover.Doubles)
            {
                if (!GameMaster.CurrentMover.RollsUsed[0])
                    ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);  
            }
            else
            {
                if (!GameMaster.CurrentMover.RollsUsed[3])
                    ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);
            }

        if (!GameMaster.CurrentMover.Doubles && sc2.OccupyingColorIsBlack == black && sc2.Pieces.Count > 0 && !GameMaster.CurrentMover.RollsUsed[1])
            ActualPossibleMoves.Add(PossibleMoves[roll2 - 1]);
        if (ActualPossibleMoves.Count == 0)
        {
            if (!GameMaster.CurrentMover.Doubles)
            {
                if (GameMaster.CurrentMover.RollsUsed[0] && !GameMaster.CurrentMover.RollsUsed[1])
                    CheckAbove(roll2, black);
                else if (!GameMaster.CurrentMover.RollsUsed[0] && GameMaster.CurrentMover.RollsUsed[1])
                    CheckAbove(roll1, black);
                else if (!GameMaster.CurrentMover.RollsUsed[0] && !GameMaster.CurrentMover.RollsUsed[1])
                {
                    if (roll1 < roll2)
                        CheckAbove(roll1, black);
                    else
                        CheckAbove(roll2, black);
                }
            }
            else if (!GameMaster.CurrentMover.RollsUsed[3])
                CheckAbove(roll1, black);
        }
    }

    public override void CalcPossibleMoves()
    {
        int x = 0;
        int endx = 6;
        if (Position == 24)
        {
            x = 23;
            endx = 17;
        }
        while (x != endx)
        {
            PossibleMoves.Add(GameMaster.AllSpots[x]);
            if (endx > x)
                x++;
            else x--;
        }
    }

    public void CheckAbove(int roll,bool black)
    {
        SpotControl sc;
        //Check if there are any pieces above, if there are, do nothing
        for(int x = roll; x < PossibleMoves.Count; x++)
        {
            sc = (SpotControl) PossibleMoves[x];
            if (sc.OccupyingColorIsBlack == black && sc.Pieces.Count > 0)
                return;
        }
        //Find next spot below with pieces and add to available moves
        for(int x = roll-2; x >= 0; x--)
        {
            sc = (SpotControl) PossibleMoves[x];
            if (sc.OccupyingColorIsBlack == black && sc.Pieces.Count > 0)
            {
                ActualPossibleMoves.Add(PossibleMoves[x]);
                return;
            }
        }
    }

    public bool BearingOff() {
        //Check to see if Mover can start bearing off
        int sum = 0;
        foreach (SpotControl s in PossibleMoves)
        {
            if (s.OccupyingColorIsBlack == this.gameObject.name.StartsWith("Black"))
                sum += s.Pieces.Count;
        }
        sum += Pieces.Count;
        return sum == GameMaster.BlackPieces.Length;
    }
}
