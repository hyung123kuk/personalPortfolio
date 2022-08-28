using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class Item : MonoBehaviour
{
    [SerializeField]
    Building item;
    [SerializeField]
    Image image;

    public void ItemSet(Building building)
    {
        item = building;

        image.sprite = item.image;
    }

    public void ItemClick()
    {
        ItemShop.itemShop.BuildingSet(item);
        SoundManager.soundManager.SFXPlay("UIButton");
    }
}
