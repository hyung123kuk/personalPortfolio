using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour //���� ������ Enable�� �Ҷ� ������� �ؾ� �ڵ尡 �� �����̵ǰ� ������ �ȶ߱� �����̴�. ( ĳ������ �ǹ����� �޴µ� �ǹ��� ���� ������ ������ ���. ���� ĳ������ �������� �Ѵ�.)
{
    public static LevelManager levelManager;

    [SerializeField]
    GameObject myTeam;
    [SerializeField]
    GameObject enemyTeam1;
    [SerializeField]
    GameObject enemyTeam2;
    [SerializeField]
    GameObject TouchScreen;
    [SerializeField]
    Building[] myTeamBuilding;

    private void Awake()
    {
        if (levelManager == null)
            levelManager = this;
        if (levelManager != this)
            Destroy(gameObject);

        myTeam = GameObject.Find("MyBuilding");
        enemyTeam1 = GameObject.Find("EnemyBuilding");
        enemyTeam2 = GameObject.Find("EnemyBuilding2");

        StartCoroutine(MybuildingSet());
       
    }

    IEnumerator MybuildingSet() //������ ĳ���� ��������� -> ������ ��������� ( ĳ���� ���� �߰��� ����) 
                                //-> TouchScreen�� Ų�� (ó���� ������忩�� �ǹ��� �ݶ��̴� ũ�Ⱑ 2�谡 �Ǿ�� �ϴµ� ��� �ǹ��� �������� �ؾ��Ѵ�.)
    {
        yield return new WaitForSeconds(0.1f);
        myTeam.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        myTeam.transform.Find("Building").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        TouchScreen.SetActive(true);
    }

    IEnumerator EnemybuildingSet(string level)
    {
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        enemyTeam1.transform.Find(level).gameObject.SetActive(true);
    }
    IEnumerator Enemybuilding2Set(string level)
    {
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find("Castle").gameObject.SetActive(true);
        yield return new WaitForSeconds(0.1f);
        enemyTeam2.transform.Find(level).gameObject.SetActive(true);
    }

}
