using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Player
{
    protected MoveControl MoveCont;
    protected bool PieceSelected = false;
    protected bool ListenForPick = true;
    protected float SecondsToWait = 1f;

    public abstract void PickPieceOrSpot();

    public void SetMover(MoveControl ParamMoveCont)
    {
        MoveCont = ParamMoveCont;
    }

    public void TurnOver()
    {
        MoveCont.GameMaster.SwitchTurns();
    }
    public virtual void RollDice()
    {
        MoveCont.PlayerRolledDice = true;
    }

    public virtual void CancelInquiry()
    {
        //Default do nothing. Only human player will have the need for this function
    }

    public void ResetVariables()
    {
        PieceSelected = false;
    }

    public virtual IEnumerator SelectedPiece()
    {
        PieceSelected = true;
        //Move mover to first available spot
        SelectNext("Up");
        yield return new WaitForSecondsRealtime(SecondsToWait);
        ListenForPick = true;
    }

    public virtual IEnumerator SelectedSpot()
    {
        PieceSelected = false;
        yield return new WaitForSecondsRealtime(SecondsToWait);
        ListenForPick = true;
    }

    public void SelectNext(string direction)
    {
        //If choosing piece to move
        if (!PieceSelected)
            MoveCont.SelectNextPiece(direction);
        //choosing a spot to move piece to
        else
            MoveCont.SelectNextSpot(direction);
    }
}
