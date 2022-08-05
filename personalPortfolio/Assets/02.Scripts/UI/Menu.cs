using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Menu : MonoBehaviour
{
    [SerializeField]
    GameObject itemShop;
    [SerializeField]
    GameObject heroShop;

    public void ItemShop()
    {
        itemShop.SetActive(true);
        gameObject.SetActive(false);
    }
    public void HeroShop()
    {
        heroShop.SetActive(true);
        gameObject.SetActive(false);
    }
}
