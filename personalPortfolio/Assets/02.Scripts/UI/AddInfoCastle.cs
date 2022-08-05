using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AddInfoCastle : MonoBehaviour ,IBuildingSet
{

    [SerializeField]
    Text MaxBuildingNum;
    [SerializeField]
    Text MaxUnitNum;


    private void OnEnable()
    {
        BuildingSet();
    }

    public void BuildingSet()
    {
        Castle building = FindObjectOfType<ItemShop>().SelectBuilding.GetComponent<Castle>();

        MaxBuildingNum.text = "최대 건물 수 : " + (building.MaxbuildingNum).ToString() + "(+" + building.levelBuildingNum + ")";
        MaxUnitNum.text = "최대 유닛 수 : " + (building.MaxUnitNum).ToString() + "(+" + building.levelUnitNum + ")";
    }


}
