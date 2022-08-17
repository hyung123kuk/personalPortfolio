using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoolManager : MonoBehaviour
{
    public static PoolManager poolManager;  //싱글톤

    GameObject arrowPrefab;
    GameObject Arrows;
    List<GameObject> ArrowPool = new List<GameObject>();

    GameObject SFXPrefab;
    GameObject SFXs;
    List<GameObject> SFXPool = new List<GameObject>();

    #region 자동 캐릭터 오브젝트 풀링용

   GameObject[] Prefabs;
    List<GameObject> Character = new List<GameObject>();
    public List<List<GameObject>> Pools = new List<List<GameObject>>();
    #endregion

   

    public void Awake()
    {
        if (poolManager == null)    //싱글톤을 선언해 맵에 한개만 있도록 합니다.
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

    //자동으로 2.Unit/Character에 추가된 유닛들은 오브젝트 풀링이 됩니다. 부족하면 새로 만들어서 리턴합니다.
    #region 캐릭터 오브젝트 풀링 및 받기

    public void CharacterMake(string name, int count = 10) // 이름을 보내면 자동으로 10개가 만들어 진다.
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



    #region 화살 오브젝트 풀링 및 받기
    public void ArrowMake(int count) //받은 count 만큼 화살을 만드는 함수입니다.
    {
        for (int i = 0; i < count; i++)
        {
            GameObject arrow = Instantiate<GameObject>(arrowPrefab, Arrows.transform);
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


    #region SFX 오브젝트 풀링 및 받기
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
