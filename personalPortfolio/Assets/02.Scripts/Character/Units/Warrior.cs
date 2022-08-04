using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character , IMelee 
{
    [Header("빌딩공격시 사거리")]
    public int BuidingTargetRange = 6;

    private int UnitTargetRange;



    public override void Start()
    {
        base.Start(); 
        WarriorHero.WarriorBuff += SpeedUp;
        UnitTargetRange = AttackRange;
    }


    public override void AttackTarget(GameObject[] Targets)
    {
        if (Targets == null)
            return;

        foreach (GameObject target in Targets) //Damaged 인터페이스가 근거리일때는 적에게 데미지를, 원거리일때는 투사체에 데미지를 설정하는 역할을 한다.
        {
            transform.LookAt(target.transform);
            if (AttackRangeFucn(target.transform))
                target.SendMessage("Damaged", AttackDamage);
        }
    }

    public override void Upgrade()
    {
        throw new System.NotImplementedException();
    }

    public override void RangeSet()
    {
        
        if (GetComponent<AI>().target.GetComponent<Building>())
        {
            AttackRange = BuidingTargetRange;
        }
        else
        {
            AttackRange = UnitTargetRange;
        }
    }
}
