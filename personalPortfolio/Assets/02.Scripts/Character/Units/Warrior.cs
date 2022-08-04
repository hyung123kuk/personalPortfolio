using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character , IMelee 
{
    [Header("�������ݽ� ��Ÿ�")]
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

        foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
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
