using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartSetup : MonoBehaviour
{
    public GameObject[] WhitePieces;
    public GameObject[] BlackPieces;
    public GameObject[] AllSpots;
    public CameraControl cam;
    public float y = .15F;
    public float BetweenSpots = 1.5833333F;
    public float InitialSpot = 1.3F;
    public float BetweenPieces = 1.2F;
    public float InitialPiece = 5.85F;
    public MoveControl CurrentMover;
    public JailControl WhiteJailControl;
    public BaseControl WhiteBaseControl;
    public JailControl BlackJailControl;
    public BaseControl BlackBaseControl;

    // Start is called before the first frame update
    void Start()
    {
        WhitePieces[0].transform.position = new Vector3(-1F * InitialPiece, y,-1F * (InitialSpot + 5F * BetweenSpots));
        WhitePieces[1].transform.position = new Vector3((-1F * InitialPiece) + BetweenPieces, y, -1F * (InitialSpot + 5F * BetweenSpots));

        BlackPieces[0].transform.position = new Vector3(InitialPiece, y, -1f * (InitialSpot + 5F * BetweenSpots));
        BlackPieces[1].transform.position = new Vector3(InitialPiece - BetweenPieces, y, -1f * (InitialSpot + 5F * BetweenSpots));

        WhitePieces[2].transform.position = new Vector3(InitialPiece, y, -1f * InitialSpot);
        WhitePieces[3].transform.position = new Vector3(InitialPiece - BetweenPieces, y, -1f * InitialSpot);
        WhitePieces[4].transform.position = new Vector3(InitialPiece - (2f * BetweenPieces), y, -1f * InitialSpot);
        WhitePieces[5].transform.position = new Vector3(InitialPiece - (3f * BetweenPieces), y, -1f * InitialSpot);
        WhitePieces[6].transform.position = new Vector3(InitialPiece - (4f * BetweenPieces), y, -1f * InitialSpot);

        BlackPieces[2].transform.position = new Vector3(-1f * InitialPiece, y, -1f * InitialSpot);
        BlackPieces[3].transform.position = new Vector3(-1f * (InitialPiece - BetweenPieces), y, -1f * InitialSpot);
        BlackPieces[4].transform.position = new Vector3(-1f * (InitialPiece - (2f * BetweenPieces)), y, -1f * InitialSpot);
        BlackPieces[5].transform.position = new Vector3(-1f * (InitialPiece - (3f * BetweenPieces)), y, -1f * InitialSpot);
        BlackPieces[6].transform.position = new Vector3(-1f * (InitialPiece - (4f * BetweenPieces)), y, -1f * InitialSpot);

        WhitePieces[7].transform.position = new Vector3(InitialPiece, y, (InitialSpot + BetweenSpots));
        WhitePieces[8].transform.position = new Vector3(InitialPiece - BetweenPieces, y, (InitialSpot + BetweenSpots));
        WhitePieces[9].transform.position = new Vector3(InitialPiece - (2f * BetweenPieces), y, (InitialSpot + BetweenSpots));

        BlackPieces[7].transform.position = new Vector3(-1f * InitialPiece, y, (InitialSpot + BetweenSpots));
        BlackPieces[8].transform.position = new Vector3(-1f * (InitialPiece - BetweenPieces), y, (InitialSpot + BetweenSpots));
        BlackPieces[9].transform.position = new Vector3(-1f * (InitialPiece - (2f * BetweenPieces)), y, (InitialSpot + BetweenSpots));

        WhitePieces[10].transform.position = new Vector3(-1f * InitialPiece, y, InitialSpot + (5f * BetweenSpots));
        WhitePieces[11].transform.position = new Vector3(-1f * InitialPiece + BetweenPieces, y, InitialSpot + (5f * BetweenSpots));
        WhitePieces[12].transform.position = new Vector3(-1f * InitialPiece + (2f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));
        WhitePieces[13].transform.position = new Vector3(-1f * InitialPiece + (3f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));
        WhitePieces[14].transform.position = new Vector3(-1f * InitialPiece + (4f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));

        BlackPieces[10].transform.position = new Vector3(InitialPiece, y, InitialSpot + (5f * BetweenSpots));
        BlackPieces[11].transform.position = new Vector3(InitialPiece - BetweenPieces, y, InitialSpot + (5f * BetweenSpots));
        BlackPieces[12].transform.position = new Vector3(InitialPiece - (2f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));
        BlackPieces[13].transform.position = new Vector3(InitialPiece - (3f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));
        BlackPieces[14].transform.position = new Vector3(InitialPiece - (4f * BetweenPieces), y, InitialSpot + (5f * BetweenSpots));
    }

    // Update is called once per frame
    void Update()
    {
    }
}
