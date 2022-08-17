using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //�̱���

    GameObject arrowPrefab;
    GameObject Arrows;
    List<GameObject> ArrowPool = new List<GameObject>();

    GameObject SFXPrefab;
    GameObject SFXs;
    List<GameObject> SFXPool = new List<GameObject>();

    #region �ڵ� ĳ���� ������Ʈ Ǯ����

   GameObject[] Prefabs;
    List<GameObject> Character = new List<GameObject>();
    public List<List<GameObject>> Pools = new List<List<GameObject>>();
    #endregion

   

    public void Awake()
    {
        if (poolManager == null)    //�̱����� ������ �ʿ� �Ѱ��� �ֵ��� �մϴ�.
            poolManager = this;
        else if (poolManager != this)
            Destroy(gameObject);

        arrowPrefab = Resources.Load<GameObject>("Arrow");
        Arrows = new GameObject("Arrows");

        SFXPrefab = Resources.Load<GameObject>("SFX");
        SFXs = new GameObject("SFXs");
        SFXMake(10);


        Prefabs = Resources.LoadAll<GameObject>("2.Unit/Character");
        for (int i = 0; i < Prefabs.Length; i++)
        {
            Character.Add(new GameObject(Prefabs[i].name + "s"));
            Pools.Add(new List<GameObject>());
        }


    }

    //�ڵ����� 2.Unit/Character�� �߰��� ���ֵ��� ������Ʈ Ǯ���� �˴ϴ�. �����ϸ� ���� ���� �����մϴ�.
    #region ĳ���� ������Ʈ Ǯ�� �� �ޱ�

    public void CharacterMake(string name, int count = 10) // �̸��� ������ �ڵ����� 10���� ����� ����.
    {
        for (int i = 0; i < Prefabs.Length; i++)
        {


            if (Prefabs[i].name == name)
            {
                for (int j = 0; j < count; j++)
                {
                    GameObject character = Instantiate<GameObject>(Prefabs[i], Character[i].transform);
                    character.SetActive(false);
                    Pools[i].Add(character);


                }
            }
        }
    }

    public GameObject GetCharacter(string name)
    {
        for (int i = 0; i < Prefabs.Length; i++)
        {

            if (Prefabs[i].name == name)
            {
                List<GameObject> TargetPool = Pools[i];

                foreach (GameObject character in TargetPool)
                {
                    if (!character.activeSelf)
                    {
                        return character;
                    }
                }
            }
        }

        CharacterMake(name);
        return GetCharacter(name);
    }

    #endregion 



    #region ȭ�� ������Ʈ Ǯ�� �� �ޱ�
    public void ArrowMake(int count) //���� count ��ŭ ȭ���� ����� �Լ��Դϴ�.
    {
        for (int i = 0; i < count; i++)
        {
            GameObject arrow = Instantiate<GameObject>(arrowPrefab, Arrows.transform);
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


    #region SFX ������Ʈ Ǯ�� �� �ޱ�
    public void SFXMake(int count) 
    {
        for (int i = 0; i < count; i++)
        {
            GameObject sfx = Instantiate<GameObject>(SFXPrefab, SFXs.transform);
            SFXPool.Add(sfx);
            sfx.SetActive(false);
        }
    }
    public GameObject GetSFX() 
    {
        foreach (GameObject sfx in SFXPool)
        {
            if (!sfx.activeSelf)
            {

                return sfx;
            }
        }


        SFXMake(10);
        return GetSFX();

    }
    #endregion

}
