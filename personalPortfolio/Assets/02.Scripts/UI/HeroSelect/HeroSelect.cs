using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HeroSelect : MonoBehaviour
{
    public static HeroSelect heroSelect;

    [SerializeField]
    GameObject Menu;
    [SerializeField]
    GameObject BuildingCanvas; // 빌딩 캔버스
    [SerializeField]
    GameObject levelChiceMenu; // 레벨 선택 메뉴

    [SerializeField]
    GameObject item;    //각각의 영웅이 담는 2D그림
    [SerializeField]
    GameObject Contents; // 영웅 정렬 하는곳
    [SerializeField]
    List<GameObject> Heros = new List<GameObject>();
    [SerializeField]
    List<GameObject> Items = new List<GameObject>();
    [SerializeField]
    public GameObject heroPosition; //영웅이 나오는 위치

    private void Awake()
    {
        if (heroSelect == null)
            heroSelect = this;
        else if (heroSelect != this)
            Destroy(gameObject);

        item = Resources.Load<GameObject>("ItemHero");
        Heros.AddRange(Resources.LoadAll<GameObject>("2.Unit/Hero"));
        for (int i = 0; i < Heros.Count; i++)
        {
            GameObject hero = Instantiate<GameObject>(item, Contents.transform);
            hero.GetComponent<HeroItem>().heroSet(Heros[i]);
            Items.Add(hero);
            
        }
    }

    private void OnEnable()
    {
        foreach(GameObject item in Items)
        {
            item.GetComponent<HeroItem>().heroColorSet();
        }
    }

    public void BackButton()
    {
        Menu.SetActive(true);
        gameObject.SetActive(false);
    }

    public void LevelSelect() //히어로 선택도 완료 되고 레벨 고르기 시작
    {
        levelChiceMenu.SetActive(true);
        BuildingCanvas.SetActive(false);
        
    }
}
