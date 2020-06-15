using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JailControl : MonoBehaviour
{
    public List<GameObject> Pieces;
    public StartSetup GameMaster;
    public bool Changed;
    public float y = 1.15F;
    public float BetweenPieces = 1.2F;
    public float StackPieces = .2F;
    public List<GameObject> PossibleMoves = new List<GameObject>();
    public List<GameObject> ActualPossibleMoves = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (Changed)
        {
            for (int x = 0; x < Pieces.Count; x++)
            {
                if (x < 5)
                {
                    Pieces[x].transform.position = new Vector3(transform.position.x + (BetweenPieces * x), y, transform.position.z);
                }
                else
                {
                    Pieces[x].transform.position = new Vector3(transform.position.x + (BetweenPieces * (x % 5)), y + (StackPieces * (x / 5)), transform.position.z);
                }

            }
            Changed = false;
        }
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
        SpotControl sc1 = PossibleMoves[roll1 - 1].GetComponent<SpotControl>();
        SpotControl sc2 = PossibleMoves[roll2 - 1].GetComponent<SpotControl>();
        if (!sc1.Controlled || sc1.OccupyingColorIsBlack == black)
            if (!GameMaster.CurrentMover.Doubles)
            {
                if(!GameMaster.CurrentMover.RollsUsed[0])
                    ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);
            }
            else
            {
                if (!GameMaster.CurrentMover.RollsUsed[3])
                    ActualPossibleMoves.Add(PossibleMoves[roll1 - 1]);
            }
            
        if (roll1 !=roll2 && (!sc2.Controlled || sc2.OccupyingColorIsBlack == black) && !GameMaster.CurrentMover.RollsUsed[1])
            ActualPossibleMoves.Add(PossibleMoves[roll2 - 1]);

    }
}
