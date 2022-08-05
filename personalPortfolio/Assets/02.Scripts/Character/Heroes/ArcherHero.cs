using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Hero, IHeroSkill , IUpgrade
{
    [Header("���� �ɷ�")]

    [Header("��ų 1")]

    public float Skill1Duration; //��ų ���ӽð�
    protected float prevSkill1Duration;

    public float levelSkill1Duration;

    public float skill1XSpeed; //��ų1 �ӵ����
    protected float prevskill1XSpeed;

    public float levelskill1XSpeed;


    public static event SkillManager.Buff ArcherBuff; //��� Archer��ũ��Ʈ���� SpeedUp�Լ��� �޾Ҵ�.

    [Header("��ų 2")]


    public float Skill2Angle = 80f;
    public int Skill2Damage;
    protected int prevSkill2Damage;

    public int levelSkill2Damage;



    public override void Awake()
    {

        prevSkill1Duration = Skill1Duration;
        prevskill1XSpeed = skill1XSpeed;
        prevSkill2Damage = Skill2Damage;

        base.Awake();
    }

    public override void Skill1() //��� �ü� �̵��ӵ� ���ݼӵ� ���
    {
        if (Hp <= 0)
            return;
        ArcherBuff(skill1XSpeed, Team , Skill1Duration); //���� �� ��ó ���� ���� ���
    }

    public override void Skill2()
    {
        List<Character> TargetList = new List<Character>();


    }
    public override void UnitSet() //����� ����
    {
        SkillManager.skillManager.heros.Add(this);
        base.UnitSet();
    }

    public override void Upgrade()
    {
        Skill1Duration = prevSkill1Duration + (levelSkill1Duration * Level);
        skill1XSpeed = prevskill1XSpeed + (levelskill1XSpeed * Level);
        Skill2Damage = prevSkill2Damage + (levelSkill2Damage * Level);

        base.Upgrade();
    }

    public override void AttackTarget(GameObject[] Targets)
    {
        throw new System.NotImplementedException();
    }
}
