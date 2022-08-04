using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //싱글톤

    GameObject arrowPrefab;
    GameObject Arrows;
    List<GameObject> ArrowPool = new List<GameObject>();

    GameObject warriorPrefab;
    GameObject Warriors;
    
    public List<GameObject> WarriorPool = new List<GameObject>();

    GameObject archerPrefab;
    GameObject Archers;
    public List<GameObject> ArcherPool = new List<GameObject>();




    public void Awake()
    {
        if (poolManager == null)    //싱글톤을 선언해 맵에 한개만 있도록 합니다.
            poolManager = this;
        else if(poolManager !=this)
            Destroy(gameObject);

        arrowPrefab = Resources.Load<GameObject>("Arrow");
        warriorPrefab = Resources.Load<GameObject>("2.Unit/Character/Warrior");
        archerPrefab = Resources.Load<GameObject>("2.Unit/Character/Archer");


        Arrows = new GameObject("Arrows");
        Warriors= new GameObject("Warriors");
        Archers = new GameObject("Archers");
    }

    #region 화살 오브젝트 풀링 및 받기
    public void ArrowMake(int count) //받은 count 만큼 화살을 만드는 함수입니다.
    {
        for (int i = 0; i < count; i++)
        {
            GameObject arrow = Instantiate<GameObject>(arrowPrefab,Arrows.transform);
            ArrowPool.Add(arrow);
            arrow.SetActive(false);
        }
    }
    public GameObject GetArrow() // 호출하면 풀링된 화살하나를 보냅니다.
    {
        foreach (GameObject arrow in ArrowPool)
        {
            if (!arrow.activeSelf)
            {

                return arrow;
            }
        }

        //만약 화살이 다 떨어지면 새로생성하고 다시 화살 받기
        ArrowMake(10);
        return GetArrow();

    }
    #endregion
    #region Warrior 오브젝트 풀링 및 받기
    public void WarriorMake(int count) //받은 count 만큼 화살을 만드는 함수입니다.
    {
        for (int i = 0; i < count; i++)
        {
            GameObject warrior = Instantiate<GameObject>(warriorPrefab, Warriors.transform);
            WarriorPool.Add(warrior);
            warrior.SetActive(false);
        }
    }
    public GameObject GetWarrior() 
    {
        foreach (GameObject warrior in WarriorPool)
        {
            if (!warrior.activeSelf)
            {

                return warrior;
            }
        }

        
        WarriorMake(10);
        return GetWarrior();

    }
    #endregion
    #region Archer 오브젝트 풀링 및 받기
    public void ArcherMake(int count) 
    {
        for (int i = 0; i < count; i++)
        {
            GameObject archer = Instantiate<GameObject>(archerPrefab, Archers.transform);
            ArcherPool.Add(archer);
            archer.SetActive(false);
        }
    }
    public GameObject GetArcher() 
    {
        foreach (GameObject archer in ArcherPool)
        {
            if (!archer.activeSelf)
            {

                return archer;
            }
        }

      
        ArcherMake(10);
        return GetArcher();

    }
    #endregion


    


}
