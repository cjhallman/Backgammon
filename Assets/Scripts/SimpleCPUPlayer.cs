using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SimpleCPUPlayer : Player
{
    public override void PickPieceOrSpot(bool input)
    {
        //Select first piece or spot
        if (listenForPick)
        {
            listenForPick = false;
            if (!pieceSelected)
                moveCont.SelectPiece();
            else
                moveCont.SelectMove();
        }
    }
}
