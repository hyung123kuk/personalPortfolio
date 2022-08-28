using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HeroShop : MonoBehaviour
{

    [SerializeField]
    GameObject Menu;
    public void BackButton()
    {
        Menu.SetActive(true);
        gameObject.SetActive(false);
        SoundManager.soundManager.SFXPlay("UIButton");
    }

}
