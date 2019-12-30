using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveControl : MonoBehaviour
{
    public GameObject gamemaster;
    private GameObject[] allSpots;
    public List<GameObject> availablepieces;
    public List<GameObject> availablespots;
    public bool MyTurn, InitialMove, pieceselected;
    public float y;
    public float locationx, locationy, locationz;
    public short piece, spot = 0;
    public int roll1, roll2 = 0;
    public Vector3 templocation;
    private Transform OldParent;
    public GameObject OldSpot;
    public GameObject CurrentSpot;

    // Start is called before the first frame update
    void Start()
    {
        MyTurn = true;
        InitialMove = true;
        pieceselected = false;
        GetComponentInChildren<MeshRenderer>().enabled = false;
        StartSetup spotcontainer = gamemaster.GetComponent(typeof(StartSetup)) as StartSetup;
        allSpots = spotcontainer.allSpots;
    }

    private void OnTriggerStay(Collider other)
    {
        CurrentSpot = other.gameObject;
    }

    // Update is called once per frame
    void Update()
    {
        if (MyTurn)
        {
            // Set inital location of mover object
            if (InitialMove)
            {
                RollDice();
                SetAvailableLists();
                SetInitialLocation();
            }

            //Select the next available piece or spot to move piece
            if (Input.GetKeyDown(KeyCode.UpArrow))
            {
                SelectNext("Up");
            }

            if (Input.GetKeyDown(KeyCode.DownArrow))
            {
                SelectNext("Down");
            }

            //Select/Deselect piece
            if (Input.GetKeyDown(KeyCode.Space)) {
                pieceselected = !pieceselected;
                if (pieceselected)
                {
                    OldSpot = CurrentSpot;
                    OldParent = availablepieces[piece].transform.parent;
                    availablepieces[piece].transform.parent = transform;
                    SetSpotToCurrentSpotLocationInArray();
                }
                else
                {
                    availablepieces[piece].transform.parent = OldParent;
                    CurrentSpot.GetComponent<SpotControl>().AddPiece(availablepieces[piece]);
                    OldSpot.GetComponent<SpotControl>().RemovePiece(availablepieces[piece]);
                    InitialMove = true;
                }
            }

        }
        transform.position = new Vector3(locationx, locationy, locationz);
    }

    void SetInitialLocation()
    {
        piece = 0;
        locationx = availablepieces[piece].transform.position.x;
        locationy = availablepieces[piece].transform.position.y + y;
        locationz = availablepieces[piece].transform.position.z;
        GetComponentInChildren<MeshRenderer>().enabled = true;
        InitialMove = false;
    }

    void SelectNext(string direction)
    {
        switch (direction)
        {
            case "Up":
                if (!pieceselected)
                {
                    if (piece != availablepieces.Count - 1)
                    {
                        piece++;
                    }
                    else
                    {
                        piece = 0;
                    }

                }
                else
                {
                    if (spot != availablespots.Count - 1)
                    {
                        spot++;
                    }
                    else
                    {
                        spot = 0;
                    }
                }
                break;
            case "Down":
                if (!pieceselected)
                {
                    if (piece != 0)
                    {
                        piece--;
                    }
                    else
                    {
                        piece = (short)(availablepieces.Count - 1);
                    }
                }
                else
                {
                    if (spot != 0)
                    {
                        spot--;
                    }
                    else
                    {
                        spot = (short)(availablespots.Count - 1);
                    }
                }
                break;

        }
        if (!pieceselected)
        {
            locationx = availablepieces[piece].transform.position.x;
            locationy = availablepieces[piece].transform.position.y + y;
            locationz = availablepieces[piece].transform.position.z;
        }
        else
        {
            locationx = availablespots[spot].transform.position.x;
            locationy = availablespots[spot].transform.position.y + y;
            locationz = availablespots[spot].transform.position.z;

        }

    }
    void SetSpotToCurrentSpotLocationInArray()
    {
        short counter = 0;
        foreach (GameObject g in availablespots)
        {
            if(g == CurrentSpot)
            {
                spot = counter;
            }
            counter++;
        }
    }

    void RollDice() { 

        roll1 = Random.Range(1, 6);
        roll2 = Random.Range(1, 6);
    }

    void SetAvailableLists()
    {
        availablespots.Clear();
        availablepieces.Clear();
        SpotControl contspot;
        foreach (GameObject s in allSpots)
        {
            contspot = s.GetComponent(typeof(SpotControl)) as SpotControl;
            List<GameObject> SpotsToAdd = contspot.GetPossibleMoves(roll1, roll2);
            foreach (GameObject add in SpotsToAdd)
            {
                if (!availablespots.Contains(add))
                {
                    availablespots.Add(add);
                    availablepieces.AddRange(add.GetComponent)
                }
            }
        }
    }
}
