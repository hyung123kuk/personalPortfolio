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

       
        if (building.Level >= building.MaxLevel) //�ִ� �����϶��� �߰� ǥ�� ����.
        {
            MaxBuildingNum.text = "�ִ� �ǹ� �� : " + (building.MaxbuildingNum).ToString() ;
            MaxUnitNum.text = "�ִ� ���� �� : " + (building.MaxUnitNum).ToString() ;
        }
        else
        {
            MaxBuildingNum.text = "�ִ� �ǹ� �� : " + (building.MaxbuildingNum).ToString() + "(+" + building.levelBuildingNum + ")";
            MaxUnitNum.text = "�ִ� ���� �� : " + (building.MaxUnitNum).ToString() + "(+" + building.levelUnitNum + ")";
        }
    }


}
