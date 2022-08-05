using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Hero : Character, IUpgrade, IHeroSkill
{
    [SerializeField]
    private float skill1CoolTime; //스킬 쿨타임
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    protected float prevSkill1CoolTime;

    public float levelSkill1CoolTime;

    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }
    protected float prevSkill2CoolTime;

    public float levelSkill2CoolTime;

    public override void Awake()
    {
        prevSkill1CoolTime = skill1CoolTime;
        prevSkill2CoolTime = Skill2CoolTime;

        base.Awake();
    }

    public abstract override void AttackTarget(GameObject[] Targets); //공격은 각자 선언

    public override void RangeSet()
    {
        throw new System.NotImplementedException();
    }

    public abstract void Skill1();

    public abstract void Skill2();

    public override void Upgrade()
    {
        skill1CoolTime = prevSkill1CoolTime + (levelSkill1CoolTime * Level);
        skill2CoolTime = prevSkill2CoolTime + (levelSkill2CoolTime * Level);

        base.Upgrade();
    }
}
