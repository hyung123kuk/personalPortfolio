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
    GameObject BuildingCanvas; // ���� ĵ����
    [SerializeField]
    GameObject levelChiceMenu; // ���� ���� �޴�

    [SerializeField]
    GameObject item;    //������ ������ ��� 2D�׸�
    [SerializeField]
    GameObject Contents; // ���� ���� �ϴ°�
    [SerializeField]
    List<GameObject> Heros = new List<GameObject>();
    [SerializeField]
    List<GameObject> Items = new List<GameObject>();
    [SerializeField]
    public GameObject heroPosition; //������ ������ ��ġ

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

    public void LevelSelect() //����� ���õ� �Ϸ� �ǰ� ���� ���� ����
    {
        levelChiceMenu.SetActive(true);
        BuildingCanvas.SetActive(false);
        
    }
}
