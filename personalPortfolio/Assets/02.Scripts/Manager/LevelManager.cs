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

    IEnumerator MybuildingSet() //순서는 캐슬이 만들어지고 -> 빌딩이 만들어지고 ( 캐슬에 빌딩 추가를 위해) 
                                //-> TouchScreen을 킨다 (처음에 빌딩모드여서 건물의 콜라이더 크기가 2배가 되어야 하는데 모든 건물이 나오고나서 해야한다.)
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
