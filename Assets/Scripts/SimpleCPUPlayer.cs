using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleCPUPlayer : Player
{
    public override void PickPieceOrSpot()
    {
        //Select first piece or spot
        if (ListenForPick)
        {
            ListenForPick = false;
            if (!PieceSelected)
                MoveCont.SelectPiece();
            else
                MoveCont.SelectMove();
        }
    }
}
