using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class WarriorHero : Warrior, IHeroSkill
{
    [Header("���� �ɷ�")]

    public float attackAngle=80f;

    [Header("��ų 1")]
    [SerializeField]
    private float skill1CoolTime;
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    protected float prevSkill1CoolTime;

    public float Skill1Duration;
    protected float prevSkill1Duration;

    public float skill1XSpeed; //��ų1 �ӵ����
    protected float prevskill1XSpeed;

    public static event SkillManager.Buff WarriorBuff; //��� Warrior��ũ��Ʈ���� SpeedUp�Լ��� �޾Ҵ�.

    [Header("��ų 2")]
    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    protected float prevSkill2CoolTime;

    public float Skill2Angle = 80f;
    public int Skill2Damage = 200;
    protected int prevSkill2Damage;
    public float Skill2Range = 5f;


    public override void Awake()
    {
        prevSkill1CoolTime = skill1CoolTime;
        prevSkill1Duration = Skill1Duration;
        prevskill1XSpeed = skill1XSpeed;
        prevSkill2CoolTime = Skill2CoolTime;
        prevSkill2Damage = Skill2Damage;
        base.Awake();
    }

    public override void AttackTarget(GameObject[] Targets)
    {
        if (Hp <= 0)
            return;
        
        foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
        {
            if (AttackRangeFucn(Unit.transform, attackAngle, AttackRange))
            {
                Unit.Damaged(AttackDamage, Team);
            }
        }
        foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
        {
            if (AttackRangeFucn(building.transform, Range: AttackRange))
            {
                building.Damaged(AttackDamage, Team);
            }
        }
    }



    public void Skill1() //��� ������ ���ݼӵ��� �̵��ӵ� ����
    {
        
        if (Hp <= 0)
            return;

        WarriorBuff(skill1XSpeed, Team, Skill1Duration);

    }

    public void Skill2()
    {
        if (Hp <= 0)
            return;
        foreach (Character Unit in TeamManager.teamManager.enemyTeamCharacter(Team))
        {
            if(AttackRangeFucn(Unit.transform , Skill2Angle, Skill2Range))
            {
                Unit.Damaged(Skill2Damage, Team);
            }
        }
        foreach (Building building in TeamManager.teamManager.enemyTeamBuilding(Team))
        {
            if (AttackRangeFucn(building.transform, Range: Skill2Range))
            {
                building.Damaged(Skill2Damage, Team);
            }
        }
    }



    public override void UnitSet() //����� ����
    {
        SkillManager.skillManager.heros.Add(this);
        base.UnitSet();
    }


}
