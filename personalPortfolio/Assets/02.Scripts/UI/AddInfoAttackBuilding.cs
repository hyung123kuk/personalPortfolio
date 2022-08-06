using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AddInfoAttackBuilding : MonoBehaviour , IBuildingSet
{
    [SerializeField]
    Text Damage;
    [SerializeField]
    Text AttackRange;
    [SerializeField]
    Text AttackCool;



    public void BuildingSet(Building SelectBuilding)
    {
        AttackBuilding building = SelectBuilding.GetComponent<AttackBuilding>();
        
        Damage.text = "���ݷ� : " + (building.AttackDamage + (building.Level * building.levelAttackDamage)).ToString() + "(+" + building.levelAttackDamage + ")";
        AttackRange.text = "���ݹ��� : " + (building.AttackRange + (building.Level * building.levelAttackRange)).ToString() + "(+" + building.levelAttackRange + ")";
        AttackCool.text = "���ݼӵ� : " + (building.attackCoolTime + (building.Level * building.levelAttackCoolTime)).ToString() + "(+" + building.levelAttackCoolTime + ")";

    }

}
