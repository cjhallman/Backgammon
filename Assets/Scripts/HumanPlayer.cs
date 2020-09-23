﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HumanPlayer : Player 
{
    public HumanPlayer()
    {
        secondsToWait = .1f;
    }
    public override void RollDice()
    {
        if (Input.GetKeyDown(KeyCode.Space))
            moveCont.playerRolledDice = true;
    }

    public override void PickPieceOrSpot()
    {
        //Select the next available piece or spot to move piece
        if (Input.GetKeyDown(KeyCode.UpArrow))
            SelectNext("Up");
        if (Input.GetKeyDown(KeyCode.DownArrow))
            SelectNext("Down");
        //Select/Deselect piece or roll dice
        if (Input.GetKeyDown(KeyCode.Space) && listenForPick)
        {
            listenForPick = false;
            if (!pieceSelected)
                moveCont.SelectPiece();
            else
                moveCont.SelectMove();
        }
    }

    public override void CancelInquiry()
    {
        //Cancel selection
        if (Input.GetKeyDown(KeyCode.X))
        {
            if (pieceSelected)
                CancelSelection();
        }
    }

    void CancelSelection()
    {
        pieceSelected = false;
        moveCont.CancelSelection();
    }
}
