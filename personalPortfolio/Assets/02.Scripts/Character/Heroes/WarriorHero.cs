using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class WarriorHero : Warrior, IHeroSkill
{
    [Header("영웅 능력")]
    public float attackAngle=80f;


    [SerializeField]
    private float skill1CoolTime;
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    public float Skill1Duration;
    public float skill1XSpeed; //스킬1 속도배수
    
    public static event SkillManager.Buff WarriorBuff; //모든 Warrior스크립트에서 SpeedUp함수를 받았다.
   

    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    public float Skill2Angle = 80f;
    public int Skill2Damage = 200;
    public float Skill2Range = 5f;


    public override void AttackTarget(GameObject[] Targets)
    {
        if (Hp <= 0)
            return;
        
        foreach (Character Unit in SkillManager.skillManager.Units)
        {
            if (!SameTeam(Unit.Team) && AttackRangeFucn(Unit.transform, attackAngle, AttackRange))
            {
                Unit.Damaged(AttackDamage, Team);
            }
        }
        foreach (Building building in SkillManager.skillManager.Buildings)
        {
            if (!SameTeam(building.Team) && AttackRangeFucn(building.transform, Range: AttackRange))
            {
                building.Damaged(AttackDamage, Team);
            }
        }
    }



    public void Skill1() //모든 전사의 공격속도와 이동속도 증가
    {
        
        if (Hp <= 0)
            return;

        WarriorBuff(skill1XSpeed, Team, Skill1Duration);

    }

    public void Skill2()
    {
        if (Hp <= 0)
            return;
        foreach (Character Unit in  SkillManager.skillManager.Units)
        {
            if( !SameTeam(Unit.Team) && AttackRangeFucn(Unit.transform , Skill2Angle, Skill2Range))
            {
                Unit.Damaged(Skill2Damage, Team);
            }
        }
        foreach (Building building in SkillManager.skillManager.Buildings)
        {
            if (!SameTeam(building.Team) && AttackRangeFucn(building.transform, Range: Skill2Range))
            {
                building.Damaged(Skill2Damage, Team);
            }
        }
    }



    public override void UnitSet() //히어로 세팅
    {
        SkillManager.skillManager.heros.Add(this);
        base.UnitSet();
    }


}
