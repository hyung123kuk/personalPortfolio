using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameUI : MonoBehaviour
{
    public static GameUI gameUI;

    [SerializeField]
    Text moneyText;

    public int money;

    [SerializeField]
    Text buildingText;
    [SerializeField]
    Text unitText;

    private void Awake()
    {
        if (gameUI == null)
            gameUI = this;
        if (gameUI != this)
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
