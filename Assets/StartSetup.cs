using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartSetup : MonoBehaviour
{
    public GameObject[] whitepieces;
    public GameObject[] blackpieces;
    public GameObject[] allSpots;
    public float y = .15F;
    public float betweenspots = 1.5833333F;
    public float initialspot = 1.3F;
    public float betweenpieces = 1.2F;
    public float initialpiece = 5.85F;

    // Start is called before the first frame update
    void Start()
    {
        whitepieces[0].transform.position = new Vector3(-1F * initialpiece, y,-1F * (initialspot + 5F * betweenspots));
        whitepieces[1].transform.position = new Vector3((-1F * initialpiece) + betweenpieces, y, -1F * (initialspot + 5F * betweenspots));

        blackpieces[0].transform.position = new Vector3(initialpiece, y, -1f * (initialspot + 5F * betweenspots));
        blackpieces[1].transform.position = new Vector3(initialpiece - betweenpieces, y, -1f * (initialspot + 5F * betweenspots));

        whitepieces[2].transform.position = new Vector3(initialpiece, y, -1f * initialspot);
        whitepieces[3].transform.position = new Vector3(initialpiece - betweenpieces, y, -1f * initialspot);
        whitepieces[4].transform.position = new Vector3(initialpiece - (2f * betweenpieces), y, -1f * initialspot);
        whitepieces[5].transform.position = new Vector3(initialpiece - (3f * betweenpieces), y, -1f * initialspot);
        whitepieces[6].transform.position = new Vector3(initialpiece - (4f * betweenpieces), y, -1f * initialspot);

        blackpieces[2].transform.position = new Vector3(-1f * initialpiece, y, -1f * initialspot);
        blackpieces[3].transform.position = new Vector3(-1f * (initialpiece - betweenpieces), y, -1f * initialspot);
        blackpieces[4].transform.position = new Vector3(-1f * (initialpiece - (2f * betweenpieces)), y, -1f * initialspot);
        blackpieces[5].transform.position = new Vector3(-1f * (initialpiece - (3f * betweenpieces)), y, -1f * initialspot);
        blackpieces[6].transform.position = new Vector3(-1f * (initialpiece - (4f * betweenpieces)), y, -1f * initialspot);

        whitepieces[7].transform.position = new Vector3(initialpiece, y, (initialspot + betweenspots));
        whitepieces[8].transform.position = new Vector3(initialpiece - betweenpieces, y, (initialspot + betweenspots));
        whitepieces[9].transform.position = new Vector3(initialpiece - (2f * betweenpieces), y, (initialspot + betweenspots));

        blackpieces[7].transform.position = new Vector3(-1f * initialpiece, y, (initialspot + betweenspots));
        blackpieces[8].transform.position = new Vector3(-1f * (initialpiece - betweenpieces), y, (initialspot + betweenspots));
        blackpieces[9].transform.position = new Vector3(-1f * (initialpiece - (2f * betweenpieces)), y, (initialspot + betweenspots));

        whitepieces[10].transform.position = new Vector3(-1f * initialpiece, y, initialspot + (5f * betweenspots));
        whitepieces[11].transform.position = new Vector3(-1f * initialpiece + betweenpieces, y, initialspot + (5f * betweenspots));
        whitepieces[12].transform.position = new Vector3(-1f * initialpiece + (2f * betweenpieces), y, initialspot + (5f * betweenspots));
        whitepieces[13].transform.position = new Vector3(-1f * initialpiece + (3f * betweenpieces), y, initialspot + (5f * betweenspots));
        whitepieces[14].transform.position = new Vector3(-1f * initialpiece + (4f * betweenpieces), y, initialspot + (5f * betweenspots));

        blackpieces[10].transform.position = new Vector3(initialpiece, y, initialspot + (5f * betweenspots));
        blackpieces[11].transform.position = new Vector3(initialpiece - betweenpieces, y, initialspot + (5f * betweenspots));
        blackpieces[12].transform.position = new Vector3(initialpiece - (2f * betweenpieces), y, initialspot + (5f * betweenspots));
        blackpieces[13].transform.position = new Vector3(initialpiece - (3f * betweenpieces), y, initialspot + (5f * betweenspots));
        blackpieces[14].transform.position = new Vector3(initialpiece - (4f * betweenpieces), y, initialspot + (5f * betweenspots));
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
