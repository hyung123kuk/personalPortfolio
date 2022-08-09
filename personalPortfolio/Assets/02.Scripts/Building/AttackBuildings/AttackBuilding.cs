using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AttackBuilding : Building , IAttack , IUpgrade
{


    [Header("�ǹ� ���ݷ�")]
    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
    protected int prevAttackDamage;

    public int levelAttackDamage;

    [Header("�ǹ� ���ݹ���")]
    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
    protected int prevAttackRange;

    public int levelAttackRange;

    [Header("�ǹ� ������Ÿ��")]

    public float attackCoolTime;
    protected float prevAttackCoolTime;

    public float levelAttackCoolTime;

    [Header("���� ON/OFF")]

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
        TeamManager.teamManager.TeamCastle(Team).attackBuildingWork += UnitProduce;  //���� ���� ĳ���� ���ø� �޴´�.
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

    public abstract void Attack();//���� ���� �����ؾ��մϴ�.

    public bool SameTeam(int _team)  //���� ������ True �ٸ��� False ��ȯ�ϴ� �Լ�
    {
        if (Team == _team)
            return true;
        else
            return false;
    }
    public bool AttackRangeFucn(Transform _Target, float Angle = 180f, float Range = -1) // Ÿ���� ���ݹ��� ���� �ִ��� Ȯ���ϴ� �Լ�
    {
        if (Range == -1) // ���࿡ ���� �Ÿ��� �Է����� �ʾҴٸ� �⺻ ���ݰŸ��� ����Ѵ�.
            Range = attackRange;



        float angle = Vector3.Angle(_Target.position - transform.position, transform.forward);

        if (Vector3.Distance(_Target.position, transform.position) <= Range + 0.2f && ((angle <= Angle)))
        {
            return true;
        }
        return false;

    }

    public GameObject NearlyTargetSet() //���尡��� ���� ��ȯ
    {
        

        float? nearestDis = null;
        GameObject Tr = null ;
        foreach (Character Enemy in TeamManager.teamManager.enemyTeamCharacter(Team))
        {
            if (Enemy.Hp > 0) //ü���� 0���� ������ ������ ������ �ν�
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
