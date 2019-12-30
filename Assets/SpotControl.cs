using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpotControl : MonoBehaviour
{
    public bool occupyingcolorisblack;
    public bool controlled;
    public int position;
    public GameObject gamemaster;
    private GameObject[] allSpots;
    private List<GameObject>[,] possiblemoves = new List<GameObject>[6,6];
    public List<GameObject> pieces;
    public bool changed;
    public float y = .15F;
    public float betweenspots = 1.5833333F;
    public float initialspot = 1.3F;
    public float betweenpieces = 1.2F;
    public float initialpiece = 5.85F;

    // Start is called before the first frame update
    void Start()
    {
        changed = false;
        if (transform.parent.name == "Quadrant1" || transform.parent.name == "Quadrant2")
            initialpiece = initialpiece * -1;
        else
        {
            betweenpieces = betweenpieces * -1;
        }
        StartSetup spotcontainer = gamemaster.GetComponent(typeof(StartSetup)) as StartSetup;
        allSpots = spotcontainer.allSpots;
        SetControlledVariables();
        CalcPossibleMoves();
    }

    // Update is called once per frame
    void Update()
    {
        if (changed){
            SetControlledVariables();
            for (int x=0; x<pieces.Count; x++){
                if (x < 5)
                {
                    pieces[x].transform.position = new Vector3(initialpiece + (betweenpieces * x), y, transform.position.z);
                }
                else
                {
                    pieces[x].transform.position = new Vector3(initialpiece + (betweenpieces * 5), y, transform.position.z);
                    MeshRenderer piecerenderer = pieces[x].GetComponent(typeof(MeshRenderer)) as MeshRenderer;

                    piecerenderer.enabled = false;
                }

            }
            changed = false;
        }
    }

    public void AddPiece(GameObject piece)
    {
        pieces.Add(piece);
        changed = true;
    }

    public void RemovePiece(GameObject piece)
    {
        pieces.Remove(piece);
        changed = true;
    }

    private void CalcPossibleMoves()
    {
        for(int roll1 = 1; roll1 < 7; roll1++)
        {
            for (int roll2 = 1; roll2 < 7; roll2++)
            {
                if(position + roll1 < 24)
                {
                    possiblemoves[roll1 - 1, roll2 - 1].Add(allSpots[position + roll1]);
                }
                if (position + roll2 < 24)
                {
                    possiblemoves[roll1 - 1, roll2 - 1].Add(allSpots[position + roll2]);
                }
                if (position + roll1 + roll2 < 24)
                {
                    possiblemoves[roll1 - 1, roll2 - 1].Add(allSpots[position + roll2 + roll1]);
                }
            }
        }
    }

    private void SetControlledVariables()
    {
        if(pieces.Count == 0){
            controlled = false;
            occupyingcolorisblack = false;
        }
        else
        {
            controlled = pieces.Count > 1;
            occupyingcolorisblack = (pieces[0].name[0] == 'B');
        }
    }

    public List<GameObject> GetPossibleMoves(int roll1, int roll2)
    {
        List<GameObject> actualpossmoves = new List<GameObject>();
        if(possiblemoves[roll1,roll2].Count != 0)
        {
            SpotControl contspot;
            foreach (GameObject s in possiblemoves[roll1, roll2])
            {
                contspot = s.GetComponent(typeof(SpotControl)) as SpotControl;
                if(!contspot.controlled || contspot.occupyingcolorisblack == occupyingcolorisblack)
                {
                    actualpossmoves.Add(s);
                }
            }
        }
        return actualpossmoves;
    }
}
