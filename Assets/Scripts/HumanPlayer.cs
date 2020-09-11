using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HumanPlayer : Player 
{
    public HumanPlayer()
    {
        SecondsToWait = .1f;
    }
    public override void RollDice()
    {
        if (Input.GetKeyDown(KeyCode.Space))
            MoveCont.PlayerRolledDice = true;
    }

    public override void PickPieceOrSpot()
    {
        //Select the next available piece or spot to move piece
        if (Input.GetKeyDown(KeyCode.UpArrow))
            SelectNext("Up");
        if (Input.GetKeyDown(KeyCode.DownArrow))
            SelectNext("Down");
        //Select/Deselect piece or roll dice
        if (Input.GetKeyDown(KeyCode.Space) && ListenForPick)
        {
            ListenForPick = false;
            if (!PieceSelected)
                MoveCont.SelectPiece();
            else
                MoveCont.SelectMove();
        }
    }

    public override void CancelInquiry()
    {
        //Cancel selection
        if (Input.GetKeyDown(KeyCode.X))
        {
            if (PieceSelected)
                CancelSelection();
        }
    }

    void CancelSelection()
    {
        PieceSelected = false;
        MoveCont.CancelSelection();
    }
}
