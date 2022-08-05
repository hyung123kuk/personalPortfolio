using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Hero, IHeroSkill , IUpgrade
{
    [Header("영웅 능력")]

    [Header("스킬 1")]

    public float Skill1Duration; //스킬 지속시간
    protected float prevSkill1Duration;

    public float levelSkill1Duration;

    public float skill1XSpeed; //스킬1 속도배수
    protected float prevskill1XSpeed;

    public float levelskill1XSpeed;


    public static event SkillManager.Buff ArcherBuff; //모든 Archer스크립트에서 SpeedUp함수를 받았다.

    [Header("스킬 2")]


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

    public override void Skill1() //모든 궁수 이동속도 공격속도 상승
    {
        if (Hp <= 0)
            return;
        ArcherBuff(skill1XSpeed, Team , Skill1Duration); //같은 팀 아처 에게 버프 사용
    }

    public override void Skill2()
    {
        List<Character> TargetList = new List<Character>();


    }
    public override void UnitSet() //히어로 세팅
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
