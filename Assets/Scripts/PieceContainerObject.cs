using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PieceContainerObject : MonoBehaviour
{
    public PieceContainerControl pcc;
    public GameControl gameMaster;
    public List<GameObject> pieces;
    public string pcType;

    // Start is called before the first frame update
    void Start()
    {
        gameMaster = GameObject.Find("Board").GetComponent<GameControl>();
        pcType = gameObject.name.Substring(0, 4);
        pcc = PieceContainerFactory.GetPieceContainer(pcType, gameObject.name, gameMaster, pieces);
        pcc.Start();
        pcc.CalcPossibleMoves();
    }

    public void InitializeAllSpotsOnControl()
    {
        SpotControl sc = (SpotControl)pcc;
        sc.InitializeOtherPieceContainerControls(gameMaster);
    }

    // Update is called once per frame
    void Update()
    {
        if (pcc.changed)
        {
            pcc.changed = false;
            pieces = pcc.pieces;

            for (int x = 0; x < pieces.Count; x++)
            {
                pieces[x].transform.position = pcc.CalculatePiecePosition(x, transform.position);
                if (pcType == "Base")
                {
                    if (pieces[x].transform.rotation.eulerAngles.z == 0)
                        pieces[x].transform.Rotate(new Vector3(0, 0, 1), 90f);
                }
            }    
        }
    }

    public void Outline(bool on)
    {
        gameObject.transform.Find("Outline").gameObject.SetActive(on);
    }
}
