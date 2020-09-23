using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameState
{
    private PieceContainerControl[] allSpots = new PieceContainerControl[24];
    private PieceContainerControl blackJail;
    private PieceContainerControl whiteJail;
    private PieceContainerControl blackBase;
    private PieceContainerControl whiteBase;

    public GameState(GameControl initGameMaster)
    {
        foreach (PieceContainerObject pObj in initGameMaster.allSpots)
            allSpots[pObj.pcc.position] = PieceContainerFactory.GetPieceContainer(pObj);
        blackJail = PieceContainerFactory.GetPieceContainer(initGameMaster.blackJailControl);
        whiteJail = PieceContainerFactory.GetPieceContainer(initGameMaster.whiteJailControl);
        blackBase = PieceContainerFactory.GetPieceContainer(initGameMaster.blackBaseControl);
        whiteBase = PieceContainerFactory.GetPieceContainer(initGameMaster.whiteBaseControl);
        foreach (PieceContainerControl pcc in allSpots)
            pcc.InitializeOtherPieceContainerControls(allSpots, whiteJail, blackJail);
        blackJail.InitializeOtherPieceContainerControls(allSpots);
        whiteJail.InitializeOtherPieceContainerControls(allSpots);
        blackBase.InitializeOtherPieceContainerControls(allSpots);
        whiteBase.InitializeOtherPieceContainerControls(allSpots);
    }

    public int GetNumOpponentsInJail(bool isBlack)
    {
        if (isBlack)
            return whiteJail.pieces.Count;
        else
            return blackJail.pieces.Count;
    }

    public void UndoLastMove(int initPosition, int endPosition, bool isBlack)
    {
        GameObject currentPiece;
        //Remove from end spot
        if (endPosition >= 0 && endPosition < allSpots.Length)
        {
            currentPiece = allSpots[endPosition].pieces[allSpots[endPosition].pieces.Count - 1];
            allSpots[endPosition].RemovePiece(currentPiece);
        }
        else
        {
            if (isBlack)
            {
                currentPiece = blackBase.pieces[blackBase.pieces.Count - 1];
                blackBase.RemovePiece(currentPiece);
            }
            else
            {
                currentPiece = whiteBase.pieces[whiteBase.pieces.Count - 1];
                whiteBase.RemovePiece(currentPiece);
            }   
        }
        //Add to initial Spot
        if (initPosition >= 0 && initPosition < allSpots.Length)
            allSpots[initPosition].AddPiece(currentPiece);
        else
        {
            if (isBlack)
                blackJail.AddPiece(currentPiece);
            else
                whiteJail.AddPiece(currentPiece);
        }
        
    }

    public void MakeMove(int initPosition, int endPosition, bool isBlack)
    {
        GameObject currentPiece;
        //Remove from initial Spot
        if (initPosition >= 0 && initPosition < allSpots.Length)
        {
            currentPiece = allSpots[initPosition].pieces[0];
            allSpots[initPosition].RemovePiece(currentPiece);
        }
        else
        {
            if (isBlack)
            {
                currentPiece = blackJail.pieces[0];
                blackJail.RemovePiece(currentPiece);
            }
            else
            {
                currentPiece = whiteJail.pieces[0];
                whiteJail.RemovePiece(currentPiece);
            }
        }
        //Add to end spot
        if(endPosition >= 0 && endPosition < allSpots.Length)
            allSpots[endPosition].AddPiece(currentPiece);
        else
        {
            if (isBlack)
                blackBase.AddPiece(currentPiece);
            else
                whiteBase.AddPiece(currentPiece);
        }
    }
}
