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
            pcc.InitializeOtherPieceContainerControls(allSpots, whiteJail, blackJail, whiteBase, blackBase);
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

    public int MakeMove(MoveStruct ms)
    {
        GameObject currentPiece;
        //Remove from initial Spot
        if (ms.initPosition >= 0 && ms.initPosition < allSpots.Length)
        {
            currentPiece = allSpots[ms.initPosition].pieces[0];
            allSpots[ms.initPosition].RemovePiece(currentPiece);
        }
        else
        {
            if (ms.isBlack)
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
        if(ms.endPosition >= 0 && ms.endPosition < allSpots.Length)
            allSpots[ms.endPosition].AddPiece(currentPiece);
        else
        {
            if (ms.isBlack)
                blackBase.AddPiece(currentPiece);
            else
                whiteBase.AddPiece(currentPiece);
        }

        return GetScore(ms.isBlack);
    }

    private int GetScore(bool isBlack)
    {
        int score = 0;
        if (isBlack)
        {
            score += blackBase.pieces.Count*3;
            score += whiteJail.pieces.Count*2;
        }
        else
        {
            score += whiteBase.pieces.Count*3;
            score += blackJail.pieces.Count*2;
        }
            
        foreach(PieceContainerControl pc in allSpots)
        {
            if(pc.pieces.Count > 0)
            {
                if (pc.isBlack == isBlack)
                {
                    if (pc.pieces.Count > 1)
                        score+=1;
                    else
                        score-=2;
                }
            }
        }

        return score;
    }
}
