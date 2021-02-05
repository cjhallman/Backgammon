using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RandomCPUPlayer : Player
{
    private int rand = -1;

    public override void PickPieceOrSpot(bool input)
    {
        //Select random piece or spot
        if (listenForPick)
        {
            listenForPick = false;
            rand = Random.Range(0, moveCont.GetNumAvailable(pieceSelected));
        }
        else if (listenForSelect)
        {
            if (rand > 0)
            {
                listenForSelect = false;
                SelectNext("Up");
                rand--;
            }
            else if (rand == 0)
            {
                if (!pieceSelected)
                    moveCont.SelectPiece();
                else
                    moveCont.SelectMove();
                rand = -1;
            }
        }
    }
}
