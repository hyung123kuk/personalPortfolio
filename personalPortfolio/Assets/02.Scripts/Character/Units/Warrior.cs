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
       

        base.AttackTarget(Targets);
    }





}
