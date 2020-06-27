using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraControl : MonoBehaviour
{
    public bool flipping = false;
    private float y = 90;
    public float speed;
    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (flipping)
            if (transform.rotation.eulerAngles.y != y)
                transform.rotation = Quaternion.RotateTowards(transform.rotation, Quaternion.Euler(90, y, 0), speed * Time.deltaTime);
            else
                flipping = false;
    }

    public void flip()
    {
        flipping = true;
        if (y == 90)
            y += 180;
        else
            y -= 180;
    }
}
