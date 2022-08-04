using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Archer, IHeroSkill
{
    [Header("���� �ɷ�")]

    [Header("��ų 1")]
    [SerializeField]
    private float skill1CoolTime;
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    protected float prevSkill1CoolTime;

    public float Skill1Duration;
    protected float prevSkill1Duration;

    public float skill1XSpeed; //��ų1 �ӵ����
    protected float prevskill1XSpeed;

    public static event SkillManager.Buff ArcherBuff; //��� Archer��ũ��Ʈ���� SpeedUp�Լ��� �޾Ҵ�.

    [Header("��ų 2")]
    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    protected float prevSkill2CoolTime;

    public float SkillAngle = 70;

    public override void Awake()
    {
        prevSkill1CoolTime = skill1CoolTime;
        prevSkill1Duration = Skill1Duration;
        prevskill1XSpeed = skill1XSpeed;
        prevSkill2CoolTime = Skill2CoolTime;

        base.Awake();
    }

    public void Skill1() //��� �ü� �̵��ӵ� ���ݼӵ� ���
    {
        if (Hp <= 0)
            return;
        ArcherBuff(skill1XSpeed, Team , Skill1Duration); //���� �� ��ó ���� ���� ���
    }

    public void Skill2()
    {
        List<Character> TargetList = new List<Character>();


    }
    public override void UnitSet() //����� ����
    {
        SkillManager.skillManager.heros.Add(this);
        base.UnitSet();
    }
}
