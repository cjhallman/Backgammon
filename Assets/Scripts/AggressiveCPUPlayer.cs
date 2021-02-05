using System;
using System.Collections;
using System.Collections.Generic;

public class AggressiveCPUPlayer : Player
{
    int selectedSpot = 0;
    int selectedMove = 0;
    int ups = -1;
    bool moveChosen = false;

    public override void PickPieceOrSpot(bool input)
    {
        if (listenForPick)
        {
            listenForPick = false;
            if (!moveChosen)
                CalculateMove();
            if (!pieceSelected)
                ups = selectedSpot;
            else ups = selectedMove;
        }
        else if (listenForSelect)
        {
            if (ups > 0)
            {
                listenForSelect = false;
                SelectNext("Up");
                ups--;
            }
            else if (ups == 0)
            {
                if (!pieceSelected)
                    moveCont.SelectPiece();
                else
                {
                    moveCont.SelectMove();
                    moveChosen = false;
                }
                ups = -1;
            }
        }
        
    }
    private void CalculateMove()
    {
        moveChosen = false;
        selectedMove = 0;
        selectedSpot = 0;
        //Find move that leads to most opponent players off board
        List<PieceContainerControl> spots = moveCont.GetAvailableSpots();
        MoveStruct bestMove = new MoveStruct();
        foreach (PieceContainerControl init in spots)
        {
            foreach (int end in init.actualPossibleMoves)
            {
                //Decide if this is the move we want
                GameState gs = new GameState(moveCont.gameMaster);
                MoveStruct ms = new MoveStruct();
                ms.initPosition = init.position;
                ms.endPosition = end;
                ms.isBlack = moveCont.isBlack;
                ms.moveUps = selectedMove;
                ms.spotUps = selectedSpot;
                int currentNumOpponentsInJail = gs.GetNumOpponentsInJail(moveCont.isBlack);
                ms.score = gs.MakeMove(ms);
                if (gs.GetNumOpponentsInJail(moveCont.isBlack) > currentNumOpponentsInJail)
                {
                    moveChosen = true;
                    break;
                }
                if(ms.score > bestMove.score)
                    bestMove = ms;
                selectedMove++;
            }
            if (moveChosen)
                break;
            selectedMove = 0;
            selectedSpot++;
        }
        if (!moveChosen)
        {
            moveChosen = true;
            selectedSpot = bestMove.spotUps;
            selectedMove = bestMove.moveUps;
        }
    }
}

