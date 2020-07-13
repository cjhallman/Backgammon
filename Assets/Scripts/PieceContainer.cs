using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PieceContainer: MonoBehaviour
{
    public GameControl GameMaster;

    public List<GameObject> Pieces;
    public List<PieceContainer> ActualPossibleMoves = new List<PieceContainer>();

    public bool Changed;

    public float BetweenPieces;
    public float StackPieces;
    public float y;
    public float InitialPiece;
    public float z;

    public int Position;

    public virtual void AddPiece(GameObject piece)
    {
        Pieces.Add(piece);
        Changed = true;
    }
    public void RemovePiece(GameObject piece)
    {
        Pieces.Remove(piece);
        Changed = true;
    }

    public abstract void GetPossibleMoves(bool black, int roll1, int roll2);
    public abstract void CalcPossibleMoves();
}
