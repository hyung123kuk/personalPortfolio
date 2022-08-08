using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class AddInfoMakeBuilding : MonoBehaviour ,IBuildingSet
{
    [SerializeField]
    Image image;
    [SerializeField]
    Text Name;
    [SerializeField]
    Text Hp;
    [SerializeField]
    Text Damage;
    [SerializeField]
    Text Defence;
    [SerializeField]
    Text Population;
    [SerializeField]
    Text AttackSpeed;
    [SerializeField]
    Text MoveSpeed;



    public void BuildingSet(Building SelectBuilding)
    {
        MakeBuilding building = SelectBuilding.GetComponent<MakeBuilding>();
        Character makeUnit = building.makeUnit.GetComponent<Character>();

        image.sprite = makeUnit.image;
        Name.text = makeUnit.Name;
        Population.text = "인구수     : " + makeUnit.Population.ToString();

        if (building.Level >= building.MaxLevel) //최대 레벨일때는 추가 표시 안함.
        {
            Hp.text = "체력 : " + (makeUnit.MaxHp + (building.Level * makeUnit.levelMaxHp)).ToString();
            Damage.text = "공격 : " + (makeUnit.AttackDamage + (building.Level * makeUnit.levelAttackDamage)).ToString();
            Defence.text = "방어 : " + (makeUnit.Defense + (building.Level * makeUnit.levelDefense)).ToString();
            
            AttackSpeed.text = "공격속도 : " + (makeUnit.AttackSpeed + (building.Level * makeUnit.levelAttackSpeed)).ToString();
            MoveSpeed.text = "이동속도 : " + (makeUnit.Speed + (building.Level * makeUnit.levelSpeed)).ToString();
        }
        else
        {
            Hp.text = "체력 : " + (makeUnit.MaxHp + (building.Level * makeUnit.levelMaxHp)).ToString() + "(+" + makeUnit.levelMaxHp + ")";
            Damage.text = "공격 : " + (makeUnit.AttackDamage + (building.Level * makeUnit.levelAttackDamage)).ToString() + "(+" + makeUnit.levelAttackDamage + ")";
            Defence.text = "방어 : " + (makeUnit.Defense + (building.Level * makeUnit.levelDefense)).ToString() + "(+" + makeUnit.levelDefense + ")";
            
            AttackSpeed.text = "공격속도 : " + (makeUnit.AttackSpeed + (building.Level * makeUnit.levelAttackSpeed)).ToString() + "(+" + makeUnit.levelAttackSpeed + ")";
            MoveSpeed.text = "이동속도 : " + (makeUnit.Speed + (building.Level * makeUnit.levelSpeed)).ToString() + "(+" + makeUnit.levelSpeed + ")";
        }

    }

   

}
