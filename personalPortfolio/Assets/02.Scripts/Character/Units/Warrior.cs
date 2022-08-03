using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character , IMelee 
{
    public int BuidingTargetRange = 5;
    public int UnitTargetRange;


    public override void Start()
    {
        base.Start(); //��ŸƮ�� ���� üũ�� �ִ� ����üũ ���� �Ѵ����� �����ش�.
        WarriorHero.WarriorBuff += SpeedUp;
        UnitTargetRange = AttackRange;
    }


    public override void AttackTarget(GameObject[] Targets)
    {
        foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
        {
            transform.LookAt(target.transform);
            if (AttackRangeFucn(target.transform))
                target.SendMessage("Damaged", AttackDamage);
        }

        base.AttackTarget(Targets);
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
