using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartCanvas : MonoBehaviour
{
    [SerializeField]
    GameObject startCanvas;
    [SerializeField]
    GameObject levelSelCanvas;
    [SerializeField]
    GameObject JoystickCanvas;
    public void BackButton()
    {
        levelSelCanvas.SetActive(true);
        startCanvas.SetActive(false);
    }

    public void StartButton()
    {
        JoystickCanvas.SetActive(true);
        TeamManager.teamManager.TeamCastle(0).UnitOn(true);
        TeamManager.teamManager.TeamCastle(1).UnitOn(true);
        TeamManager.teamManager.TeamCastle(0).AttackBuildingCheck(true);
        TeamManager.teamManager.TeamCastle(1).AttackBuildingCheck(true);

        StartCoroutine(start());
        IEnumerator start()
        {
            yield return new WaitForSeconds(0.1f);
            startCanvas.SetActive(false);
        }
       
    }
}
