using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

public class WarriorHero : Hero, IHeroSkill ,IBuff ,IUpgrade ,ICondition
{


    [Header("���� �ɷ�")]

    public float attackAngle=80f;

    [Header("��ų 1")]
    
    [SerializeField]
    private float Skill1Duration; //��ų ���ӽð�
    public float BuffDurationTIme { get { return Skill1Duration; } set { Skill1Duration = value; } }



    protected float prevSkill1Duration;
 
    public float levelSkill1Duration;

    public float skill1XSpeed; //��ų1 �ӵ����
    protected float prevskill1XSpeed;
 
    public float levelskill1XSpeed;


    public static event SkillManager.Buff WarriorBuff; //��� Warrior��ũ��Ʈ���� SpeedUp�Լ��� �޾Ҵ�.

    [Header("��ų 2")]


    public float Skill2Angle=80;
    public int Skill2Damage;
    protected int prevSkill2Damage;

    public int levelSkill2Damage;

    public float Skill2Range = 5f;



    public override void Awake()
    {
        prevSkill1Duration = Skill1Duration;
        prevskill1XSpeed = skill1XSpeed;
        prevSkill2Damage = Skill2Damage;
        base.Awake();
    }

    public override void AttackTarget(GameObject[] Targets)
    {
        if (Hp <= 0)
            return;
        AttackReady = false;
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

        StartCoroutine(attackSet());

       IEnumerator attackSet()
        {
            yield return new WaitForSeconds(attackDelay);
            AttackReady = true;
        }
    }



    public override void Skill1() //��� ������ ���ݼӵ��� �̵��ӵ� ����
    {
        
        if (Hp <= 0)
            return;

        if (WarriorBuff != null)
        {

            WarriorBuff(skill1XSpeed, Team, Skill1Duration);

        }
     }

    public override void Skill2()
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
        SkillManager.skillManager.hero = this;
        base.UnitSet();
    }

    public override void Upgrade()
    {
        Skill1Duration = prevSkill1Duration + (levelSkill1Duration * Level);
        skill1XSpeed = prevskill1XSpeed + (levelskill1XSpeed * Level);
        Skill2Damage = prevSkill2Damage + (levelSkill2Damage * Level);

        base.Upgrade();
    }

    public override void ConditionSet()
    {
        List<Building> buildings =  TeamManager.teamManager.TeamCastle(0).buildings;
        IsCondition = false;        
        foreach(Building building in buildings)
        {
            if (building.GetComponent<WarriorBuilding>()) //������ ������ �����Ѵٸ� ���� �Ϸ�
            {
                IsCondition = true;
            }
        }
    }
}
