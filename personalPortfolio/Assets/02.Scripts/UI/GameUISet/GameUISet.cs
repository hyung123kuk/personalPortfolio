using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameUISet : MonoBehaviour
{

    

    [SerializeField]
    GameObject TouchControll;
    [SerializeField]
    GameObject LevelSelCanvas;
    [SerializeField]
    GameObject StartCanvas;
    private void OnEnable()
    {
        TouchControll.SetActive(false);
        LevelSelCanvas.SetActive(true);
        StartCanvas.SetActive(false);
    }

    public void backButton()
    {
        TeamManager.teamManager.TeamCastle(0).Damaged(9999999);
    }
}
