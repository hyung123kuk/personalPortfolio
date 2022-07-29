using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //싱글톤

    GameObject arrowPrefab;
    GameObject Arrows;
    List<GameObject> ArrowPool = new List<GameObject>();

    public void Awake()
    {
        if (poolManager == null)    //싱글톤을 선언해 맵에 한개만 있도록 합니다.
            poolManager = this;
        else if(poolManager !=this)
            Destroy(gameObject);

        arrowPrefab = Resources.Load<GameObject>("Arrow");
        Arrows = new GameObject("Arrows");
        ArrowMake(10);
    }

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
        foreach(GameObject arrow in ArrowPool)
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


}
