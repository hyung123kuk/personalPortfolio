using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour //���� ������ Enable�� �Ҷ� ������� �ؾ� �ڵ尡 �� �����̵ǰ� ������ �ȶ߱� �����̴�. ( ĳ������ �ǹ����� �޴µ� �ǹ��� ���� ������ ������ ���. ���� ĳ������ �������� �Ѵ�.)
{
    public static LevelManager levelManager;

    [SerializeField]
    GameObject myTeam;
    [SerializeField]
    public GameObject enemyTeam1;
    [SerializeField]
    GameObject enemyTeam2;

    public int Maxlevel;
    public int Nowlevel;

    [SerializeField]
    GameObject TouchScreen;


    [SerializeField]
    List<Building> enemyTeamBuilding = new List<Building>(); // �μ��� �ǹ��� �ٽ� true �ؾ� �ϹǷ� �޾� ���´�.

    [SerializeField]
    public string level;

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
        Maxlevel = enemyTeam1.transform.childCount -1 ; //��簳�� -1 (ĳ��) �� �ִ� �������̴�.



        StartCoroutine(MybuildingSet());
       
    }



    IEnumerator MybuildingSet() //������ ĳ���� ��������� -> ������ ��������� ( ĳ���� ���� �߰��� ����) 
                                //-> TouchScreen�� Ų�� (ó���� ������忩�� �ǹ��� �ݶ��̴� ũ�Ⱑ 2�谡 �Ǿ�� �ϴµ� ��� �ǹ��� �������� �ؾ��Ѵ�.)
    {
        yield return new WaitForSeconds(0.1f);
        myTeam.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        SaveManager.saveManager.LoadData();
       
        yield return new WaitForSeconds(0.1f);

        TouchScreen.SetActive(true);
    }

    bool islevelSet; //������ �̹� �ε����ΰ�? (���� ���ý� �ߺ�Ŭ�� ����)
    public void LevelSet(int _level)
    {
        if (islevelSet)
        {
            LogManager.logManager.Log("�̹� ���� �ε��� �Դϴ�.");
            return;
        }

        if (level != "-1")
        {
            enemyTeam1.transform.Find(level).gameObject.SetActive(false);
          
        }
        SaveManager.saveManager.SaveBuilding(); // ���� ���� ���� ����(�������� ������ �ٽ� ������ �ϹǷ�)
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
        int lv = int.Parse(level);
        yield return new WaitForSeconds(0.1f);

        if (lv >= 0 && lv <= 4)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 0;
        }
        else if(lv >= 5 && lv <= 7)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 1;
        }
        else if (lv >= 8 && lv <= 10)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 2;
        }
        else if (lv >= 11 && lv <= 15)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 3;
        }
        else if (lv >= 16 && lv <= 19)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 4;
        }
        else if (lv >= 20 && lv <= 23)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 5;
        }
        else if (lv >= 24 && lv <= 27)
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 6;
        }
        else
        {
            enemyTeam1.transform.Find("Castle").GetComponent<Castle>().Level = 7;
        }



        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find(level).gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        levelSelCanvas.SetActive(false);
        StartCanvas.SetActive(true);
        islevelSet = false;

        enemyTeamBuilding.Clear(); //���� �ִ� ������ �� ������ �����Ѵ�.
        enemyTeamBuilding.AddRange(enemyTeam1.GetComponentsInChildren<Building>()); //���� ������ �� ������ ��� �߰��� ���´�.
    }



    public IEnumerator Enemybuilding2Set(string level)
    {
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find(level).gameObject.SetActive(true);
    }


    public IEnumerator gameEnd(int Team) //�й����� ��ȣ�� �´�.
    {

        TeamManager.teamManager.TeamCastle(0).AttackBuildingCheck(false); //���� ���� ����
        TeamManager.teamManager.TeamCastle(0).UnitOn(false);              //���� ���� ����
        TeamManager.teamManager.TeamCastle(1).AttackBuildingCheck(false); //�� ���� ���� ����
        TeamManager.teamManager.TeamCastle(1).UnitOn(false);              //�� ���� ���� ����





        enemyTeam1.transform.Find(level).gameObject.SetActive(false); //��� �� ���� ������ false�� �� �� ���´�.
        foreach (Building enemybuilding in enemyTeamBuilding) // ����� ��� �� ������ true�� �ٲ� ���´�. (������ ų�� �� ���� �־�� �ϹǷ�)
        {
            
            enemybuilding.Hp = enemybuilding.MaxHp;
            if (enemybuilding.GetComponent<Castle>() == null)
            {
                enemybuilding.gameObject.SetActive(true);
            }
        }
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find("Castle").gameObject.SetActive(false); //���� ���� false�� �� ���´�.
        
        foreach(Building myBuilding in SaveManager.saveManager.buildings)
        {
            if(!myBuilding.gameObject.activeSelf) //�� ������ ���� ������ �ٽ� Ų��.
            {
                myBuilding.gameObject.SetActive(true);
            }
            myBuilding.Hp = myBuilding.MaxHp; //������ ü���� ��� �÷��ش�.
            
        }

        Character teamhero = null;

        List<Character> allch = new List<Character>(); //���� ���� �ִ� ĳ���� ��� ���� 

        allch.AddRange(GameObject.FindObjectsOfType<Character>());
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

       

        if (Team == 1) // ���� �¸���
        {
            Win();

        }
        else //���� �й��
        {
            Lose();
        }

        levelSelCanvas.SetActive(true);
        TouchControlCanvas.SetActive(false);
        if (teamhero != null) //���� ĳ���ʹ� �������� false �ؼ� �̺�Ʈ�� ��� �����Ŀ� �������� ������ �Ѵ�. + 
        {
            teamhero.gameObject.SetActive(false);
            teamhero.gameObject.SetActive(true);
            teamhero.transform.position = TeamManager.teamManager.TeamCastle(0).PositionSet.transform.position;
        }
    }



    private void Lose()
    {
        LogManager.logManager.Log("���￡�� �й� �Ͽ����ϴ�.");
    }

    private void Win()
    {
        if (int.Parse(level) == Nowlevel + 1) //���� ���� �������� ������ ���������� ����
        {
            Nowlevel = int.Parse(level);
            SaveManager.saveManager.SaveLevel();
        }
        SoundManager.soundManager.SFXPlay("Win");
       
        
    }
}
