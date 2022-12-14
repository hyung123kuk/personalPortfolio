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
        
       
        if (building.Level >= building.MaxLevel) //최대 레벨일때는 추가 표시 안함.
        {
            Damage.text = "공격력 : " + (building.AttackDamage + (building.Level * building.levelAttackDamage)).ToString();
            AttackRange.text = "공격범위 : " + (building.AttackRange + (building.Level * building.levelAttackRange)).ToString();
            AttackCool.text = "공격속도 : " + (building.attackCoolTime + (building.Level * building.levelAttackCoolTime)).ToString();
        }
        else
        {
            Damage.text = "공격력 : " + (building.AttackDamage + (building.Level * building.levelAttackDamage)).ToString() + "(+" + building.levelAttackDamage + ")";
            AttackRange.text = "공격범위 : " + (building.AttackRange + (building.Level * building.levelAttackRange)).ToString() + "(+" + building.levelAttackRange + ")";
            AttackCool.text = "공격속도 : " + (building.attackCoolTime + (building.Level * building.levelAttackCoolTime)).ToString() + "(+" + building.levelAttackCoolTime + ")";
        }

    }

}
