using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour //만든 이유는 Enable을 할때 순서대로 해야 코드가 잘 적용이되고 에러가 안뜨기 때문이다. ( 캐슬에서 건물들을 받는데 건물이 먼저 켜지면 에러가 뜬다. 따라서 캐슬부터 켜지도록 한다.)
{
    public static LevelManager levelManager;

    [SerializeField]
    GameObject myTeam;
    [SerializeField]
    GameObject enemyTeam1;
    [SerializeField]
    GameObject enemyTeam2;

    public int Maxlevel;
    public int Nowlevel;

    [SerializeField]
    GameObject TouchScreen;


    [SerializeField]
    List<Building> enemyTeamBuilding = new List<Building>(); // 부서진 건물을 다시 true 해야 하므로 받아 놓는다.

    [SerializeField]
    string level;

    [SerializeField]
    GameObject levelSelCanvas;
    [SerializeField]
    GameObject StartCanvas;
    [SerializeField]
    GameObject TouchControlCanvas;

    [SerializeField]
    private GameObject[] buildings;

    public void LoadToBuilding(string buildingName, int buildingLevel, Vector3 buildingPos)
    {
        for (int i = 0; i < buildings.Length; i++)
        {

            if(buildings[i].GetComponent<Building>().Name == buildingName)
            {
                if (buildings[i].GetComponent<Castle>()) 
                {
                    FindObjectOfType<Castle>().transform.position = buildingPos;
                    FindObjectOfType<Castle>().Level = buildingLevel;
                   
                }
                else
                {
                    GameObject building = Instantiate<GameObject>(buildings[i], myTeam.transform);
                    building.transform.position = buildingPos;
                    building.GetComponent<Building>().Level = buildingLevel;
                  
                }
                break;

            }
        }
    }


    private void Awake()
    {
        if (levelManager == null)
            levelManager = this;
        if (levelManager != this)
            Destroy(gameObject);
        buildings = Resources.LoadAll<GameObject>("1.Building");
        myTeam = GameObject.Find("MyBuilding");
        enemyTeam1 = GameObject.Find("EnemyBuilding");
        enemyTeam2 = GameObject.Find("EnemyBuilding2");
        Maxlevel = enemyTeam1.transform.childCount -1 ; //모든개수 -1 (캐슬) 이 최대 레벨값이다.



        StartCoroutine(MybuildingSet());
       
    }



    IEnumerator MybuildingSet() //순서는 캐슬이 만들어지고 -> 빌딩이 만들어지고 ( 캐슬에 빌딩 추가를 위해) 
                                //-> TouchScreen을 킨다 (처음에 빌딩모드여서 건물의 콜라이더 크기가 2배가 되어야 하는데 모든 건물이 나오고나서 해야한다.)
    {
        yield return new WaitForSeconds(0.1f);
        myTeam.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        SaveManager.saveManager.LoadData();
       
        yield return new WaitForSeconds(0.1f);
        TouchScreen.SetActive(true);
    }

    bool islevelSet; //레벨이 이미 로딩중인가? (레벨 선택시 중복클릭 방지)
    public void LevelSet(int _level)
    {
        if (islevelSet)
        {
            LogManager.logManager.Log("이미 레벨 로딩중 입니다.");
            return;
        }

        if (level != "-1")
        {
            enemyTeam1.transform.Find(level).gameObject.SetActive(false);
        }
        SaveManager.saveManager.SaveBuilding(); // 내가 가진 빌딩 세팅(스테이지 끝나고 다시 켜져야 하므로)
        level = _level.ToString();
        StartCoroutine(EnemybuildingSet(level));
    }

    public void ResetButton()
    {
        if (level == "-1")
        {
            return;
        }
        enemyTeam1.transform.Find(level).gameObject.SetActive(false);
        StartCoroutine(EnemybuildingSet(level));
    }

    public IEnumerator EnemybuildingSet(string level)
    {
        islevelSet = true;

        
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find(level).gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        levelSelCanvas.SetActive(false);
        StartCanvas.SetActive(true);
        islevelSet = false;

        enemyTeamBuilding.Clear(); //원래 있던 레벨의 적 빌딩을 제거한다.
        enemyTeamBuilding.AddRange(enemyTeam1.GetComponentsInChildren<Building>()); //현재 레벨의 적 빌딩을 모두 추가해 놓는다.
    }



    public IEnumerator Enemybuilding2Set(string level)
    {
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find(level).gameObject.SetActive(true);
    }


    public IEnumerator gameEnd(int Team) //패배팀의 번호가 온다.
    {

        TeamManager.teamManager.TeamCastle(0).AttackBuildingCheck(false); //공격 빌딩 멈춤
        TeamManager.teamManager.TeamCastle(0).UnitOn(false);              //생성 빌딩 멈춤
        TeamManager.teamManager.TeamCastle(1).AttackBuildingCheck(false); //적 공격 빌딩 멈춤
        TeamManager.teamManager.TeamCastle(1).UnitOn(false);              //적 생성 빌딩 멈춤

        List<Character> allch = new List<Character>(); //전투 씬에 있는 캐릭터 모두 삭제 

        allch.AddRange(GameObject.FindObjectsOfType<Character>());


        foreach (Building enemybuilding in enemyTeamBuilding) // 상대한 모든 적 빌딩을 true로 바꿔 놓는다. (다음에 킬때 다 켜져 있어야 하므로)
        {
            
            enemybuilding.Hp = enemybuilding.MaxHp;
            enemybuilding.gameObject.SetActive(false);         
        }
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find(level).gameObject.SetActive(false); //모든 적 빌딩 레벨을 false로 해 꺼 놓는다.
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find("Castle").gameObject.SetActive(false); //적팀 성을 false로 꺼 놓는다.
        
        foreach(Building myBuilding in SaveManager.saveManager.buildings)
        {
            if(!myBuilding.gameObject.activeSelf) //내 빌딩이 꺼져 있으면 다시 킨다.
            {
                myBuilding.gameObject.SetActive(true);
            }
            myBuilding.Hp = myBuilding.MaxHp; //내빌딩 체력을 모두 올려준다.
            
        }

        Character teamhero = null;
        foreach (Character ch in allch)
        {
            if (ch.GetComponent<Hero>() == null)
            {
                ch.gameObject.SetActive(false);
            }
            else
            {
                teamhero = ch;
            }
        }

       

        if (Team == 1) // 게임 승리시
        {
            Win();

        }
        else //게임 패배시
        {
            Lose();
        }

        levelSelCanvas.SetActive(true);
        TouchControlCanvas.SetActive(false);
        if (teamhero != null) //영웅 캐릭터는 마지막에 false 해서 이벤트가 모두 꺼진후에 정상으로 꺼지게 한다. + 
        {
            teamhero.gameObject.SetActive(false);
            teamhero.gameObject.SetActive(true);
            teamhero.transform.position = TeamManager.teamManager.TeamCastle(0).PositionSet.transform.position;
        }
    }



    private void Lose()
    {
        LogManager.logManager.Log("전쟁에서 패배 하였습니다.");
    }

    private void Win()
    {
        if (int.Parse(level) == Nowlevel + 1) //원래 깼던 레벨보다 높으면 레벨세팅후 저장
        {
            Nowlevel = int.Parse(level);
            SaveManager.saveManager.SaveLevel();
        }
        LogManager.logManager.Log("전쟁에서 승리 하였습니다.");
    }
}
