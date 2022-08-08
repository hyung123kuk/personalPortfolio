using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LogManager : MonoBehaviour
{
    public static LogManager logManager;

    [SerializeField]
    Text logtext;

    private void Awake()
    {
        if (logManager == null)
            logManager = this;
        if (logManager != this)
            Destroy(gameObject);
    }

    public void Log(string log)
    {
        logtext.text = log;
        LogTextColorReset(1);
        StopAllCoroutines();
        StartCoroutine(DisappearText());

    }

    public float SpeedDisappear; //이것 만큼 기다렸다 이것만큼 깎는다 (1초간 텍스트가 보이게된다 a가 1부터 0까지 이므로)
    IEnumerator DisappearText()
    {
        while(logtext.color.a >= SpeedDisappear)
        {
            yield return new WaitForSeconds(SpeedDisappear);
            LogTextColorMinus(SpeedDisappear); //*2 하면 0.5초간 보인다.

        }
        LogTextColorReset(0);

    }


    private void LogTextColorMinus(float _color)
    {
        Color color = logtext.color;
        color.a -= _color;
        logtext.color = color;
    }
    private void LogTextColorReset(float a)
    {
        Color color = logtext.color;
        color.a = a;
        logtext.color = color;
    }



}
