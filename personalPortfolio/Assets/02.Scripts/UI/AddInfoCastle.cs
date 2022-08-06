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




    public void BuildingSet(Building SelectBuilding)
    {
        Castle building = SelectBuilding.GetComponent<Castle>();

        MaxBuildingNum.text = "�ִ� �ǹ� �� : " + (building.MaxbuildingNum).ToString() + "(+" + building.levelBuildingNum + ")";
        MaxUnitNum.text = "�ִ� ���� �� : " + (building.MaxUnitNum).ToString() + "(+" + building.levelUnitNum + ")";
    }


}
