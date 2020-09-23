using System;
using System.Collections;
using System.Collections.Generic;

public class AggressiveCPUPlayer : Player
{
    int selectedSpot = 0;
    int selectedMove = 0;
    int ups = -1;
    bool moveChosen = false;

    public override void PickPieceOrSpot()
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
        else if (ups > 0)
        {
            SelectNext("Up");
            ups--;
        }else if(ups == 0)
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
    private void CalculateMove()
    {
        moveChosen = false;
        selectedMove = 0;
        selectedSpot = 0;
        //Find move that leads to most opponent players off board
        List<PieceContainerControl> spots = moveCont.GetAvailableSpots();
        foreach (PieceContainerControl init in spots)
        {
            foreach (int end in init.actualPossibleMoves)
            {
                //Decide if this is the move we want
                GameState gs = new GameState(moveCont.gameMaster);
                int currentNumOpponentsInJail = gs.GetNumOpponentsInJail(moveCont.isBlack);
                gs.MakeMove(init.position, end, moveCont.isBlack);
                if (gs.GetNumOpponentsInJail(moveCont.isBlack) > currentNumOpponentsInJail)
                {
                    moveChosen = true;
                    break;
                }
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
            selectedSpot = 0;
        }
    }
}

