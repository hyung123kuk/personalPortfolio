using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Menu : MonoBehaviour
{
    [SerializeField]
    GameObject itemShop;
    [SerializeField]
    GameObject heroSelect;

    public void ItemShop()
    {
        itemShop.SetActive(true);
        gameObject.SetActive(false);
        SoundManager.soundManager.SFXPlay("UIButton");
    }
    public void HeroSelect()
    {
        heroSelect.SetActive(true);
        gameObject.SetActive(false);
        SoundManager.soundManager.SFXPlay("UIButton");
    }
}
