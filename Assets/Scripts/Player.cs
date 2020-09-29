using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Player
{
    protected MoveControl moveCont;
    protected bool pieceSelected = false;
    protected bool listenForPick = true;
    protected bool listenForSelect = true;
    protected float secondsToWait = .5f;
    
    public abstract void PickPieceOrSpot();

    public void SetMover(MoveControl paramMoveCont)
    {
        moveCont = paramMoveCont;
    }

    public void TurnOver()
    {
        moveCont.gameMaster.SwitchTurns();
    }

    public virtual void RollDice()
    {
        moveCont.playerRolledDice = true;
    }

    public virtual void CancelInquiry()
    {
        //Default do nothing. Only human player will have the need for this function
    }

    public void ResetVariables()
    {
        pieceSelected = false;
    }

    public IEnumerator SelectedPiece()
    {
        pieceSelected = true;
        //Move mover to first available spot
        SelectFirst();
        yield return new WaitForSecondsRealtime(secondsToWait);
        listenForPick = true;
    }

    public IEnumerator SelectedSpot()
    {
        pieceSelected = false;
        yield return new WaitForSecondsRealtime(secondsToWait);
        listenForPick = true;
    }

    public void SelectNext(string direction)
    {
        //If choosing piece to move
        if (!pieceSelected)
            moveCont.SelectNextSpot(direction);
        //choosing a spot to move piece to
        else
            moveCont.SelectNextMove(direction);
    }

    public void SelectFirst()
    {
        //If choosing piece to move
        if (!pieceSelected)
            moveCont.SelectFirstSpot();
        //choosing a spot to move piece to
        else
            moveCont.SelectFirstMove();
    }

    public IEnumerator SetListenForNextSelect()
    {
        yield return new WaitForSecondsRealtime(secondsToWait);
        listenForSelect = true;
    }
}
