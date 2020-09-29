using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class PieceContainerControl
{
    protected PieceContainerControl[] allSpots;

    public List<GameObject> pieces;
    public List<int> actualPossibleMoves = new List<int>();

    public float betweenPieces;
    public float stackPieces;
    public float y;
    public float initialPiece;
    public float z;

    public int position;

    public bool changed = false;
    public bool isBlack;

    public virtual void AddPiece(GameObject piece)
    {
        pieces.Add(piece);
        changed = true;
    }

    public virtual void RemovePiece(GameObject piece)
    {
        pieces.Remove(piece);
        changed = true;
    }

    public abstract void Start();
    public abstract Vector3 CalculatePiecePosition(int x, Vector3 position);
    public abstract void GetPossibleMoves(bool black, int roll1, int roll2, bool[] rollsUsed);
    public abstract void CalcPossibleMoves();
    public abstract void InitializeOtherPieceContainerControls(PieceContainerControl[] arrPcc, PieceContainerControl whiteJail = null, PieceContainerControl blackJail = null, PieceContainerControl whiteBase = null, PieceContainerControl blackBase = null);
}
