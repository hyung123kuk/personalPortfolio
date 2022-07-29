using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //�̱���

    GameObject arrowPrefab;
    GameObject Arrows;
    List<GameObject> ArrowPool = new List<GameObject>();

    public void Awake()
    {
        if (poolManager == null)    //�̱����� ������ �ʿ� �Ѱ��� �ֵ��� �մϴ�.
            poolManager = this;
        else if(poolManager !=this)
            Destroy(gameObject);

        arrowPrefab = Resources.Load<GameObject>("Arrow");
        Arrows = new GameObject("Arrows");
        ArrowMake(10);
    }

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
        foreach(GameObject arrow in ArrowPool)
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


}
