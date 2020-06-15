using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BaseControl : MonoBehaviour
{
    public List<GameObject> Pieces;
    public bool Changed;
    public float BetweenPieces;
    public float y;
    public float InitialPiece;
    public float z;
    public List<GameObject> HomeSpots = new List<GameObject>();
    public List<GameObject> ActualPossibleMoves = new List<GameObject>();
    public bool black;
    public StartSetup GameMaster;
    public bool BearingOff;
    public int Position;

    // Start is called before the first frame update
    void Start()
    {
        if (black)
            Position = -1;
        else
            Position = 24;

    }

    // Update is called once per frame
    void Update()
    {
        if (Changed)
        {
            for (int x = 0; x < Pieces.Count; x++)
            {
                Pieces[x].transform.position = new Vector3(InitialPiece + (BetweenPieces * x), y, transform.position.z);
                if(Pieces[x].transform.rotation.eulerAngles.z==0)
                    Pieces[x].transform.Rotate(new Vector3(0, 0, 1), 90f);
            }
                
            Changed = false;
        }

        //Check to see if Mover can start bearing off
        int sum = 0;
        SpotControl sc;
        foreach(GameObject s in HomeSpots)
        {
            sc = s.GetComponent<SpotControl>();
            if(sc.OccupyingColorIsBlack==black)
                sum += sc.Pieces.Count;
        }
        sum += Pieces.Count;
        BearingOff = (sum == GameMaster.BlackPieces.Length);
    }

    public void AddPiece(GameObject piece)
    {
        Pieces.Add(piece);
        Changed = true;
    }

    public void RemovePiece(GameObject piece)
    {
        Pieces.Remove(piece);
        Changed = true;
    }

    public void GetPossibleMoves(bool black, int roll1, int roll2)
    {
        ActualPossibleMoves.Clear();
        SpotControl sc1 = HomeSpots[roll1 - 1].GetComponent<SpotControl>();
        SpotControl sc2 = HomeSpots[roll2 - 1].GetComponent<SpotControl>();
        if (sc1.OccupyingColorIsBlack == black && sc1.Pieces.Count > 0)
            if (!GameMaster.CurrentMover.Doubles)
            {
                if (!GameMaster.CurrentMover.RollsUsed[0])
                    ActualPossibleMoves.Add(HomeSpots[roll1 - 1]);
            }
            else
            {
                if (!GameMaster.CurrentMover.RollsUsed[3])
                    ActualPossibleMoves.Add(HomeSpots[roll1 - 1]);
            }

        if (!GameMaster.CurrentMover.Doubles && sc2.OccupyingColorIsBlack == black && sc2.Pieces.Count > 0 && !GameMaster.CurrentMover.RollsUsed[1])
            ActualPossibleMoves.Add(HomeSpots[roll2 - 1]);
        if (ActualPossibleMoves.Count == 0)
        {
            if (!GameMaster.CurrentMover.Doubles)
            {
                if (GameMaster.CurrentMover.RollsUsed[0] && !GameMaster.CurrentMover.RollsUsed[1])
                    CheckAbove(roll2, black);
                else if (!GameMaster.CurrentMover.RollsUsed[0] && GameMaster.CurrentMover.RollsUsed[1])
                    CheckAbove(roll1, black);
                else if (!GameMaster.CurrentMover.RollsUsed[0] && !GameMaster.CurrentMover.RollsUsed[1])
                {
                    if (roll1 < roll2)
                        CheckAbove(roll1, black);
                    else
                        CheckAbove(roll2, black);
                }
            }
            else if (!GameMaster.CurrentMover.RollsUsed[3])
                CheckAbove(roll1, black);
        }
    }
    public void CheckAbove(int roll,bool black)
    {
        SpotControl sc;
        //Check if there are any pieces above, if there are, do nothing
        for(int x = roll; x < HomeSpots.Count; x++)
        {
            sc = HomeSpots[x].GetComponent<SpotControl>();
            if (sc.OccupyingColorIsBlack == black && sc.Pieces.Count > 0)
                return;
        }
        //Find next spot below with pieces and add to available moves
        for(int x = roll-2; x >= 0; x--)
        {
            sc = HomeSpots[x].GetComponent<SpotControl>();
            if (sc.OccupyingColorIsBlack == black && sc.Pieces.Count > 0)
            {
                ActualPossibleMoves.Add(HomeSpots[x]);
                return;
            }
        }
    }
}
