using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //�̱���

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
        if (poolManager == null)    //�̱����� ������ �ʿ� �Ѱ��� �ֵ��� �մϴ�.
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

    #region ȭ�� ������Ʈ Ǯ�� �� �ޱ�
    public void ArrowMake(int count) //���� count ��ŭ ȭ���� ����� �Լ��Դϴ�.
    {
        for (int i = 0; i < count; i++)
        {
            GameObject arrow = Instantiate<GameObject>(arrowPrefab,Arrows.transform);
            ArrowPool.Add(arrow);
            arrow.SetActive(false);
        }
    }
    public GameObject GetArrow() // ȣ���ϸ� Ǯ���� ȭ���ϳ��� �����ϴ�.
    {
        foreach (GameObject arrow in ArrowPool)
        {
            if (!arrow.activeSelf)
            {

                return arrow;
            }
        }

        //���� ȭ���� �� �������� ���λ����ϰ� �ٽ� ȭ�� �ޱ�
        ArrowMake(10);
        return GetArrow();

    }
    #endregion
    #region Warrior ������Ʈ Ǯ�� �� �ޱ�
    public void WarriorMake(int count) //���� count ��ŭ ȭ���� ����� �Լ��Դϴ�.
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
    #region Archer ������Ʈ Ǯ�� �� �ޱ�
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
