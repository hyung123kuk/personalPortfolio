using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class ItemBuilding : MonoBehaviour ,IShopItem
{
    [SerializeField]
    Building item;
    [SerializeField]
    Image image;

    public Image Images { get { return image; } set { image = value; } }

    public void ItemSet(Building building)
    {
        item = building;

        image.sprite = item.image;
    }

    public void ItemClick()
    {
        ItemShop.itemShop.BuildingSet(item);

    }
}
