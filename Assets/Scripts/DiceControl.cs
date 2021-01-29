using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DiceControl : MonoBehaviour
{
    private SpriteRenderer spr;
    public Sprite r1, r2, r3, r4, r5, r6;
    public int curRollNum = 0;
    // Start is called before the first frame update
    void Start()
    {
        spr = gameObject.GetComponent<SpriteRenderer>();
        SetSprite(0);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetSprite(int rollnum)
    {
        curRollNum = rollnum;
        switch(rollnum){
            case 1:
                spr.sprite = r1;
                break;
            case 2:
                spr.sprite = r2;
                break;
            case 3:
                spr.sprite = r3;
                break;
            case 4:
                spr.sprite = r4;
                break;
            case 5:
                spr.sprite = r5;
                break;
            case 6:
                spr.sprite = r6;
                break;
            default:
                spr.sprite = null;
                break;
        }
    }
}
