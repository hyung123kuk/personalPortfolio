using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character , IMelee , IUpgrade
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


        transform.LookAt(Targets[0].transform);
        if (AttackRangeFucn(Targets[0].transform))
        {
            Targets[0].SendMessage("Damaged", AttackDamage);
        }

    }

    public override void Upgrade()
    {
        base.Upgrade();
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
