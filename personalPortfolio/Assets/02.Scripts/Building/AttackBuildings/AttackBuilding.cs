using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AttackBuilding : Building , IAttack , IUpgrade
{


    [Header("건물 공격력")]
    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //공격력
    protected int prevAttackDamage;

    public int levelAttackDamage;

    [Header("건물 공격범위")]
    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //공격범위
    protected int prevAttackRange;

    public int levelAttackRange;

    [Header("건물 공격쿨타임")]

    public float attackCoolTime;
    protected float prevAttackCoolTime;

    public float levelAttackCoolTime;

    [Header("공격 ON/OFF")]

    public bool work = true;

    protected override void Awake()
    {
        prevAttackDamage = attackDamage;
        prevAttackRange = attackRange;
        prevAttackCoolTime = attackCoolTime;
        base.Awake();
    }

    protected override void OnEnable()
    {
        
        base.OnEnable();
        TeamManager.teamManager.TeamCastle(Team).attackBuildingWork += UnitProduce;  //본인 팀의 캐슬의 지시를 받는다.
        StartCoroutine(AttackTarget());
    }

    IEnumerator AttackTarget()
    {
        while (Hp > 0)
        {
            yield return new WaitForSeconds(attackCoolTime);
            if (Hp <= 0)
                break;
            if (work == false)
                continue;

            Attack();

        }
    }



    public override void Upgrade() {
        attackDamage = prevAttackDamage + (Level * levelAttackDamage);
        attackRange = prevAttackRange + (Level * levelAttackRange);
        attackCoolTime = prevAttackCoolTime + (Level * levelAttackCoolTime);
        base.Upgrade();} 

    public abstract void Attack();//공격 각자 구현해야합니다.

    public bool SameTeam(int _team)  //팀이 같으면 True 다르면 False 반환하는 함수
    {
        if (Team == _team)
            return true;
        else
            return false;
    }
    public bool AttackRangeFucn(Transform _Target, float Angle = 180f, float Range = -1) // 타겟이 공격범위 내에 있는지 확인하는 함수
    {
        if (Range == -1) // 만약에 공격 거리를 입력하지 않았다면 기본 공격거리를 사용한다.
            Range = attackRange;



        float angle = Vector3.Angle(_Target.position - transform.position, transform.forward);

        if (Vector3.Distance(_Target.position, transform.position) <= Range + 0.2f && ((angle <= Angle)))
        {
            return true;
        }
        return false;

    }

    public GameObject NearlyTargetSet() //가장가까운 적을 반환
    {
        

        float? nearestDis = null;
        GameObject Tr = null ;
        foreach (Character Enemy in TeamManager.teamManager.enemyTeamCharacter(Team))
        {
            if (Enemy.Hp > 0) //체력이 0보다 많을때 공격할 적으로 인식
            {

                float Dis = Vector3.Distance(Enemy.transform.position, transform.position);
                if (nearestDis > Dis || nearestDis == null)
                {

                    Tr = Enemy.gameObject;
                    nearestDis = Dis;
                }
            }
        }
        return Tr;
    }
    public void UnitProduce(bool isOn)
    {
        work = isOn;
    }
}
