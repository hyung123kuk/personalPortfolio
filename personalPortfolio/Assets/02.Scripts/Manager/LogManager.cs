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

    public float SpeedDisappear; //�̰� ��ŭ ��ٷȴ� �̰͸�ŭ ��´� (1�ʰ� �ؽ�Ʈ�� ���̰Եȴ� a�� 1���� 0���� �̹Ƿ�)
    IEnumerator DisappearText()
    {
        while(logtext.color.a >= SpeedDisappear)
        {
            yield return new WaitForSeconds(SpeedDisappear);
            LogTextColorMinus(SpeedDisappear); //*2 �ϸ� 0.5�ʰ� ���δ�.

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
