using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Archer, IHeroSkill
{
    [Header("���� �ɷ�")]
    [SerializeField]
    private float skill1CoolTime;
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    public float Skill1Duration;
    public float skill1XSpeed; //��ų1 �ӵ����
    public static event SkillManager.Buff ArcherBuff; //��� Archer��ũ��Ʈ���� SpeedUp�Լ��� �޾Ҵ�.
    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    public float SkillAngle = 70;



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
