using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Archer, IHeroSkill
{
    [Header("영웅 능력")]
    [SerializeField]
    private float skill1CoolTime;
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    public float Skill1Duration;
    public float skill1XSpeed; //스킬1 속도배수
    public static event SkillManager.Buff ArcherBuff; //모든 Archer스크립트에서 SpeedUp함수를 받았다.
    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    public float SkillAngle = 70;



    public void Skill1() //모든 궁수 이동속도 공격속도 상승
    {
        if (Hp <= 0)
            return;
        ArcherBuff(skill1XSpeed, Team , Skill1Duration); //같은 팀 아처 에게 버프 사용
    }

    public void Skill2()
    {
        List<Character> TargetList = new List<Character>();


    }
    public override void UnitSet() //히어로 세팅
    {
        SkillManager.skillManager.heros.Add(this);
        base.UnitSet();
    }
}
