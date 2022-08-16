using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherHero : Hero, IHeroSkill, IBuff, IUpgrade
{
    [Header("영웅 능력")]
    [SerializeField]
    Transform Pos;

    [Header("스킬 1")]
    [SerializeField]
    private float Skill1Duration; //스킬 지속시간
    public float BuffDurationTIme { get { return Skill1Duration; } set { Skill1Duration = value; } }

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

    public int Skill2ArrowNumber;
    public int prevSkill2ArrowNumber;
    public int levelSkill2ArrowNumber;


    public override void Awake()
    {

        prevSkill1Duration = Skill1Duration;
        prevskill1XSpeed = skill1XSpeed;
        prevSkill2Damage = Skill2Damage;
        prevSkill2ArrowNumber = Skill2ArrowNumber;

        base.Awake();
    }
    protected override void OnDisable()
    {

        AttackReady = true;
        base.OnDisable();
    }

    public override void AttackTarget(GameObject[] Targets)
    {
       
        GameObject arrowObj = PoolManager.poolManager.GetArrow();
        Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
        arrow.Team = Team;
        arrow.Damaged(AttackDamage);
        arrow.gameObject.SetActive(true);
        arrow.transform.position = Pos.position;
        arrow.transform.rotation = Pos.rotation;
        arrow.transform.rotation *= Quaternion.Euler(new Vector3(0f, 0f, 88f));
        arrow.NonTagerSet();
        StartCoroutine(attackSet());

        IEnumerator attackSet()
        {
            yield return new WaitForSeconds(attackDelay);
            AttackReady = true;
        }

    }

    public override void Skill1() //모든 궁수 이동속도 공격속도 상승
    {
        if (Hp <= 0)
            return;

        if (ArcherBuff != null)
        {
            ArcherBuff(skill1XSpeed, Team, Skill1Duration); //같은 팀 아처 에게 버프 사용
        }
        base.Skill1();
    }

    public override void Skill2()
    {
        if (Hp <= 0)
            return;

        Debug.Log("1");

        float Angle = Skill2Angle / Skill2ArrowNumber;
        for (int i = 0; i < Skill2ArrowNumber; i++)
        {
            GameObject arrowObj = PoolManager.poolManager.GetArrow();
            Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
            arrow.Team = Team;
            arrow.Damaged(Skill2Damage);
            arrow.gameObject.SetActive(true);
            arrow.transform.position = Pos.position;
            arrow.transform.rotation = Pos.rotation;
            arrow.transform.rotation *= Quaternion.Euler(new Vector3(0f, 0f, 90f));
            arrow.transform.Rotate(Vector3.forward * (-Skill2Angle + i * Angle * 2));

            arrow.NonTagerSet();

        }
        base.Skill2();


    }
    public override void UnitSet() //히어로 세팅
    {
        SkillManager.skillManager.hero = this;
        base.UnitSet();
    }

    public override void Upgrade()
    {
        Skill1Duration = prevSkill1Duration + (levelSkill1Duration * Level);
        skill1XSpeed = prevskill1XSpeed + (levelskill1XSpeed * Level);
        Skill2Damage = prevSkill2Damage + (levelSkill2Damage * Level);
        Skill2ArrowNumber = prevSkill2ArrowNumber + (levelSkill2ArrowNumber * Level);
        base.Upgrade();
    }



    public override void ConditionSet()
    {
        List<Building> buildings = TeamManager.teamManager.TeamCastle(0).buildings;
        IsCondition = false;
        foreach (Building building in buildings)
        {
            if (building.GetComponent<ArcherBuilding>()) //워리어 빌딩이 존재한다면 조건 완료
            {
                IsCondition = true;
            }
        }
    }
}
