using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MoveControl : MonoBehaviour
{
    public GameControl gameMaster;
    private GameObject currentPiece;
    private List<PieceContainerObject> availableSpots = new List<PieceContainerObject>();
    private List<PieceContainerObject> availableMoves = new List<PieceContainerObject>();
    public float y;
    private float locationX, locationY, locationZ;
    private short spot = 0;
    public int roll1, roll2 = 0;
    private Transform oldParent;
    private PieceContainerControl oldSpot;
    private PieceContainerControl currentSpot;
    public bool myTurn, diceRolled, doubles, playerRolledDice, turnOver, winner = false;
    private bool listsSet, initialSet, diceViewed = false;
    public bool isBlack;
    private PieceContainerObject jailControl;
    private PieceContainerObject baseControl;
    private Player player;
    private MeshRenderer meshRend;
    private AudioSource audioSource;

    //This is how to keep track of which rolls has been used
    public bool[] rollsUsed; 

    // Start is called before the first frame update
    void Start()
    {
        //Black rolls one die first
        myTurn = isBlack;

        //Set jailControl and baseControl variable based on color
        if (isBlack)
        {
            jailControl = gameMaster.blackJailControl;
            baseControl = gameMaster.blackBaseControl;
        }
        else
        {
            jailControl = gameMaster.whiteJailControl;
            baseControl = gameMaster.whiteBaseControl;
        }
            
        meshRend = GetComponentInChildren<MeshRenderer>();
        meshRend.enabled = false;

        //Declare length of 4 for doubles
        rollsUsed = new bool[4];

        //Set audio objects
        audioSource = gameMaster.GetComponent<AudioSource>();
        
    }

    // Update is called once per frame
    void Update()
    {
        if (!winner)
        {
            if (myTurn)
            {
                if(gameMaster.currentMover != this)
                    gameMaster.currentMover = this;

                if (turnOver)
                    gameMaster.SwitchTurns();
                else
                {
                    if (gameMaster.gameStart)
                    {
                        if (!diceRolled)
                        {
                            if (playerRolledDice)
                                StartCoroutine(RollDie());
                            else
                                player.RollDice();
                        }
                        else if (diceViewed)
                        {
                            StopAllCoroutines();
                            if (isBlack)
                                turnOver = true;
                            else {
                                int largerFirstRoll = gameMaster.GetLargerFirstRoll();
                                if(largerFirstRoll == 0)
                                {
                                    turnOver = true;
                                }else{
                                    if (largerFirstRoll == roll2)
                                        diceRolled = diceViewed = playerRolledDice = false;
                                    else
                                        turnOver = true;
                                    gameMaster.gameStart = false;
                                }
                            }
                        }
                    }
                    //Dice have not been rolled for this turn yet
                    else if (!diceRolled)
                    {
                        if (playerRolledDice)
                            //Player rolled dice
                            StartCoroutine(RollDice());
                        else
                            //Waiting for player to roll dice
                            player.RollDice();
                    }
                    else if (diceViewed && !listsSet)
                        //Set list of available spots and pieces
                        SetAvailableLists();
                    else if (listsSet & !initialSet)
                        //Set Location after lists have been set
                        SetInitialLocation();
                    else if (listsSet & initialSet)
                        //Enough time has passed for player to see result of dice
                        player.PickPieceOrSpot();

                    player.CancelInquiry();

                    transform.position = new Vector3(locationX, locationY, locationZ);
                }
            }
            else
            {
                if (gameMaster.currentMover != this && !gameMaster.currentMover.myTurn && !gameMaster.cam.flipping)
                    myTurn = true;
                player.ResetVariables();
                diceRolled = diceViewed = playerRolledDice = listsSet = initialSet = false;
                meshRend.enabled = false;
            }
        }
    }

    public void CancelSelection()
    {
        PlaySound("selectionPiece");
        meshRend.material.color = Color.red;
        currentPiece.transform.parent = oldParent;
        oldSpot.changed = true;
        initialSet = false;
    }

    public void SelectNextSpot(string direction)
    {
        PlaySound("togglePiece");
        /*If there is a piece available in the direction chosen pick that one,
        *else move to next spot also in that direction and pick the first piece based on direction*/
        switch (direction)
        {
            case "Up":
                if (spot < availableSpots.Count - 1)
                    spot++;
                else
                    spot = 0;
                break;
            case "Down":
                if (spot > 0)
                    spot--;
                else
                    spot = (short)(availableSpots.Count - 1);
                break;
        }
        currentSpot = availableSpots[spot].pcc;
        currentPiece = currentSpot.pieces[0];
        locationX = currentPiece.transform.position.x;
        locationY = currentPiece.transform.position.y + y;
        locationZ = currentPiece.transform.position.z;
        StartCoroutine(player.SetListenForNextSelect());
        SetAvailableMoves();
    }

    public void SelectFirstSpot()
    {
        /*Move to first available Spot*/
        spot = 0;
        currentSpot = availableSpots[spot].pcc;
        currentPiece = currentSpot.pieces[0];
        locationX = currentPiece.transform.position.x;
        locationY = currentPiece.transform.position.y + y;
        locationZ = currentPiece.transform.position.z;
        StartCoroutine(player.SetListenForNextSelect());
        SetAvailableMoves();
    }

    public void SelectFirstMove()
    {
        /*Move to first available move*/
        spot = 0;
        currentSpot = availableMoves[spot].pcc;
        locationX = availableMoves[spot].transform.position.x;
        locationY = availableMoves[spot].transform.position.y + y;
        locationZ = availableMoves[spot].transform.position.z;
        StartCoroutine(player.SetListenForNextSelect());
    }

    public void SelectNextMove(string direction)
    {
        PlaySound("togglePiece");
        /*If there is a spot in the direction chosen move there
             * else loop to around list to first/last spot*/
        switch (direction)
        {
            case "Up":
                if (spot < availableMoves.Count - 1)
                    spot++;
                else
                    spot = 0;
                break;
            case "Down":
                if (spot > 0)
                    spot--;
                else
                    spot = (short)(availableMoves.Count - 1);
                break;
        }
        currentSpot = availableMoves[spot].pcc;
        locationX = availableMoves[spot].transform.position.x;
        locationY = availableMoves[spot].transform.position.y + y;
        locationZ = availableMoves[spot].transform.position.z;
        StartCoroutine(player.SetListenForNextSelect());
    }

    public void SelectPiece()
    {
        PlaySound("selectionPiece");
        //Set possible moves for piece selected
        oldSpot = currentSpot;
        //Save old parent of piece and set new parent to mover so piece moves with it
        oldParent = currentPiece.transform.parent;
        currentPiece.transform.parent = transform;
        //Set mover color to yellow to indicate piece selected 
        GetComponentInChildren<Renderer>().material.color = Color.yellow;
        StartCoroutine(player.SelectedPiece());
    }

    public void SelectMove()
    {
        PlaySound("selectionPiece");
        foreach (PieceContainerObject pc in availableMoves)
            pc.Outline(false);
        //Calc Spots Moved (use abs because direction for white/black are opposite)
        int spotsMoved = Mathf.Abs(currentSpot.position - oldSpot.position);
        //Remove piece from old spot and add to new
        oldSpot.RemovePiece(currentPiece);
        currentSpot.AddPiece(currentPiece);
        //Drop piece from mover
        currentPiece.transform.parent = oldParent;
        //Set mover color to red to indicate piece not selected
        GetComponentInChildren<Renderer>().material.color = Color.red;
        StartCoroutine(player.SelectedSpot());
        //Update Rolls used based on spots moved
        SetRollsUsed(spotsMoved);
    }

    public void SetPlayer(string playerType)
    {
        player = PlayerFactory.GetPlayer(playerType);
        player.SetMover(this);
    }

    bool PickingFromJail()
    {
        return (jailControl.pieces.Count > 0);
    }

    void SetRollsUsed(int spotsmoved)
    {
        if (!doubles)
        {
            //If the number of spots moved = one of the rolls -> That's the one used
            if (spotsmoved == roll1 && !rollsUsed[0])
                SetUsedRoll(0); 
            else if (spotsmoved == roll2 && !rollsUsed[1])
                SetUsedRoll(1);  
            else
            {
                //Spots moved is less than the rolls. Pick which ever one hasn't been used yet or the smallest.
                if (rollsUsed[0] && !rollsUsed[1])
                    SetUsedRoll(1);
                else if (!rollsUsed[0] && rollsUsed[1])
                    SetUsedRoll(0);
                else if (!rollsUsed[0] && !rollsUsed[1])
                {
                    if (roll1 < roll2)
                        SetUsedRoll(0);
                    else
                        SetUsedRoll(1);    
                }
            }    
        }
        else
        {
            //If doubles just set next one that hasn't been used
            int x = 0;
            while(rollsUsed[x])
                x++;
            SetUsedRoll(x);
        }
        listsSet=false;
    }

    void SetUsedRoll(int x)
    {
        rollsUsed[x] = true;
        GameObject.Find(string.Concat("DiceRoll", x + 1)).GetComponent<DiceControl>().SetSprite(0);
    }

    void SetInitialLocation()
    {
        //Resets the location of mover after recalcing available spots
        spot = 0;
        currentSpot = availableSpots[spot].pcc;
        currentPiece = currentSpot.pieces[0];
        locationX = currentPiece.transform.position.x;
        locationY = currentPiece.transform.position.y + y;
        locationZ = currentPiece.transform.position.z;
        SetAvailableMoves();
        meshRend.enabled = true;
        initialSet = true;
    }

    IEnumerator RollDie()
    {
        //This will run on every update in the 1 second(s) it takes to set DiceRolled = true
        diceViewed = false;

        //Pick a random number between 1->6 for 1 dice
        if (isBlack)
            roll1 = Random.Range(1, 6);
        else
            roll2 = Random.Range(1, 6);

        //Have gameMaster control displaying the role
        gameMaster.DisplayDie(isBlack);

        //Wait a little to simulate real dice roll
        yield return new WaitForSecondsRealtime(1f);
        diceRolled = true;
        yield return new WaitForSecondsRealtime(.5f);
        diceViewed = true;
    }

    IEnumerator RollDice() { 
        //This will run on every update in the 1 second(s) it takes to set DiceRolled = true
        diceViewed = false;

        //Pick a random number between 1->6 for each dice
        roll1 = Random.Range(1, 6);
        roll2 = Random.Range(1, 6);

        //Set doubles bool
        doubles = (roll1 == roll2);

        //Have gameMaster control displaying the role
        gameMaster.DisplayDice();

        //Refresh rollsUsed variables
        rollsUsed[0] = rollsUsed[1] = false;
        rollsUsed[2] = rollsUsed[3] = !doubles;

        //Wait a little to simulate real dice roll
        yield return new WaitForSecondsRealtime(1f);
        diceRolled = true;
        yield return new WaitForSecondsRealtime(.5f);
        diceViewed = true;
    }

    void SetAvailableLists()
    {
        //Check if win
        if(baseControl.pieces.Count == 15)
            winner = true;
        else
        {
            //Clear old lists
            availableSpots.Clear();
            currentPiece = null;
            //If picking from Jail there is no need to check all other spots
            if (PickingFromJail())
            {
                jailControl.pcc.GetPossibleMoves(isBlack, roll1, roll2, rollsUsed);
                if (jailControl.pcc.actualPossibleMoves.Count > 0)
                    availableSpots.Add(jailControl);       
            }
            else
            {
                //set basecontrol possible moves so spot can use it to calc its possible moves
                baseControl.pcc.GetPossibleMoves(isBlack, roll1, roll2, rollsUsed);
                //Check each spot for possible moves
                foreach (PieceContainerObject s in gameMaster.allSpots)
                {
                    s.pcc.GetPossibleMoves(isBlack, roll1, roll2, rollsUsed);
                    if (s.pcc.actualPossibleMoves.Count > 0)
                    {
                        if (!availableSpots.Contains(s) && s.pieces.Count > 0)
                        {
                            if (!isBlack)
                                availableSpots.Add(s);
                            else
                                availableSpots.Insert(0, s);
                        }   
                    }
                }
            }
            //If there are no available spots left -> turn is over
            if (availableSpots.Count == 0)
                turnOver = true;
            else
            {
                //Indicate that lists are set and the mover can move to initial spot
                listsSet = true;
                initialSet = false;
            }
        }        
    }

    private void SetAvailableMoves()
    {
        foreach (PieceContainerObject pc in availableMoves)
            pc.Outline(false);
        availableMoves.Clear();
        foreach(int spotPos in currentSpot.actualPossibleMoves)
        {
            if(spotPos>-1 && spotPos < 24)
                availableMoves.Add(gameMaster.allSpots[spotPos]);
            else
                availableMoves.Add(baseControl);
        }
        foreach (PieceContainerObject pc in availableMoves)
            pc.Outline(true);
    }

    public int GetNumAvailable(bool PieceSelected)
    {
        if (!PieceSelected)
            return availableSpots.Count;
        else
            return availableMoves.Count;
    }

    public List<PieceContainerControl> GetAvailableSpots()
    {
        List<PieceContainerControl> pcList = new List<PieceContainerControl>();
        foreach (PieceContainerObject pco in availableSpots)
            pcList.Add(pco.pcc);
        return pcList;
    }

    public void PlaySound(string soundName)
    {
        //play sound
        AudioClip audioClip = Resources.Load<AudioClip>(soundName);
        audioSource.PlayOneShot(audioClip);
    }

}
