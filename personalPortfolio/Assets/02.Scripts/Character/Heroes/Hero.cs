using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Hero : Character, IUpgrade, IHeroSkill , ICondition
{
    [Header("영웅")]
    public string condisionMessage;

    public bool AttackReady;

    [SerializeField]
    private float skill1CoolTime; //스킬 쿨타임
    public float Skill1CoolTime { get { return skill1CoolTime; } set { skill1CoolTime = value; } }
    protected float prevSkill1CoolTime;

    public float levelSkill1CoolTime;
    public bool isSkill1Cool;
    [SerializeField]
    private float skill2CoolTime;
    public float Skill2CoolTime { get { return skill2CoolTime; } set { skill2CoolTime = value; } }

    private bool isCondition; //사용할수 있는 조건 선언해야한다.
    public bool IsCondition { get { return isCondition; } set { isCondition = value; } }

    protected float prevSkill2CoolTime;

    public float levelSkill2CoolTime;
    public bool isSkill2Cool;
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

    public virtual void Skill1() {
        StartCoroutine(Skill1());

        IEnumerator Skill1()
        {

            
            yield return new WaitForSeconds(skill1CoolTime);
            isSkill1Cool = false;

        }
    }

    public virtual void Skill2() { 
    {
        StartCoroutine(Skill2());

        IEnumerator Skill2()
        {
            
            yield return new WaitForSeconds(skill2CoolTime);
            isSkill2Cool = false;

        }
    }
}

    public override void Upgrade()
    {
        skill1CoolTime = prevSkill1CoolTime + (levelSkill1CoolTime * Level);
        skill2CoolTime = prevSkill2CoolTime + (levelSkill2CoolTime * Level);

        base.Upgrade();
    }

    public abstract void ConditionSet();

    protected override void OnDisable()
    {
        isSkill1Cool = false;
        isSkill2Cool = false;
        base.OnDisable();
    }
}
