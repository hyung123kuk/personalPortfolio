using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public interface IShopItem
{
    public Image Images{get;set;}
    public void ItemClick();
}
