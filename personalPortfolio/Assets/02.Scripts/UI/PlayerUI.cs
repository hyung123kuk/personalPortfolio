using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerUI : MonoBehaviour
{
    public static PlayerUI playerUI;

    [SerializeField]
    Text moneyText;

    public int money;

    [SerializeField]
    Text buildingText;
    [SerializeField]
    Text unitText;

    private void Awake()
    {
        if (playerUI == null)
            playerUI = this;
        if (playerUI != this)
            Destroy(gameObject);
    }

    private void Start()
    {
        MoneySet();
    }

    public void MoneySet(int _value= 0)
    {
        money += _value;
        moneyText.text = money.ToString();

    }

    public void BuildingSet(int _nowBuilding, int _maxBuilding)
    {
        buildingText.text = _nowBuilding.ToString() + "/" + _maxBuilding.ToString();
    }

    public void UnitSet(int _nowUnit , int _maxUnit)
    {
        unitText.text = _nowUnit.ToString() + "/" + _maxUnit.ToString();
    }
}
