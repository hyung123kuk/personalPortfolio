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
       

        base.AttackTarget(Targets);
    }





}
