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
        LevelManager.levelManager.enemyTeam1.transform.Find(LevelManager.levelManager.level).gameObject.SetActive(false);
        levelSelCanvas.SetActive(true);
        startCanvas.SetActive(false);
        
        SoundManager.soundManager.SFXPlay("UIButton");
    }

    public void StartButton()
    {
        JoystickCanvas.SetActive(true);
        TeamManager.teamManager.TeamCastle(0).UnitOn(true);
        TeamManager.teamManager.TeamCastle(1).UnitOn(true);
        TeamManager.teamManager.TeamCastle(0).AttackBuildingCheck(true);
        TeamManager.teamManager.TeamCastle(1).AttackBuildingCheck(true);
        SoundManager.soundManager.SFXPlay("UIButton");
        StartCoroutine(start());
        IEnumerator start()
        {
            yield return new WaitForSeconds(0.1f);
            startCanvas.SetActive(false);
        }

       
    }
}
