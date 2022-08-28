using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeftTime : MonoBehaviour
{

    Text text;
    public int setTime = 5;
    private int leftTime;


    private void OnEnable()
    {

        if(text == null)
        {
            text = GetComponent<Text>();
        }


        leftTime = setTime;

        StartCoroutine("Count");        
    }

    private void OnDisable()
    {

        StopCoroutine("Count");
    }


    IEnumerator Count()
    {
        while (true) {
            timeSet();
            yield return new WaitForSeconds(1f);
            leftTime--;
            if (leftTime <= 0)
            {
                TeamManager.teamManager.TeamCastle(0).Damaged(9999999);
                break;
            }
        }
    }


    public void timeSet()
    {
        int min = leftTime/60;
        int sec = leftTime%60;
        if (sec / 10 == 0) {
            text.text = min + ":0" + sec;
        }
        else
        {
            text.text = min + ":" + sec;
        }


    }
}
