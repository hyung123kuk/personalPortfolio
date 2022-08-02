using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character
{
    public override void Start()
    {
        base.Start(); //스타트에 영웅 체크가 있다 영웅체크 먼저 한다음에 더해준다.
        WarriorHero.WarriorBuff += SpeedUp;
        
    }


    public override void AttackTarget(GameObject[] Targets)
    {
        foreach (GameObject target in Targets) //Damaged 인터페이스가 근거리일때는 적에게 데미지를, 원거리일때는 투사체에 데미지를 설정하는 역할을 한다.
        {
            transform.LookAt(target.transform);
            if (AttackRangeFucn(target.transform))
                target.SendMessage("Damaged", AttackDamage);
        }

        base.AttackTarget(Targets);
    }





}
