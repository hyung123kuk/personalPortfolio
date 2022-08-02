using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character
{
    public override void Start()
    {
        base.Start(); //��ŸƮ�� ���� üũ�� �ִ� ����üũ ���� �Ѵ����� �����ش�.
        WarriorHero.WarriorBuff += SpeedUp;
        
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





}
