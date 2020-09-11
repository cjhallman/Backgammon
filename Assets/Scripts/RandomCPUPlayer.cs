using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomCPUPlayer : Player
{
    private int rand = -1;

    public override void PickPieceOrSpot()
    {
        //Select random piece or spot
        if (ListenForPick)
        {
            ListenForPick = false;
            rand = Random.Range(0, MoveCont.GetNumAvailable(PieceSelected));
        }else if (rand > 0)
        {
            SelectNext("Up");
            rand--;
        }else if (rand == 0)
        {
            if (!PieceSelected)
                MoveCont.SelectPiece();
            else
                MoveCont.SelectMove();
            rand = -1;
        }
    }
}
