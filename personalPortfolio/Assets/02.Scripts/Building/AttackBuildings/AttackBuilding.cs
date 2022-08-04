using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AttackBuilding : Building , IAttack
{


    [Header("�ǹ� ���ݷ�")]
    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
    protected int prevAttackDamage;
    [Header("�ǹ� ���ݹ���")]
    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���
    protected int prevAttackRange;
    [Header("�ǹ� ������Ÿ��")]

    public float attackCoolTime;
    
    

    protected override void OnEnable()
    {

        base.OnEnable();
        prevAttackDamage = attackDamage;
        prevAttackRange = attackRange;
        StartCoroutine(AttackTarget());
    }

    IEnumerator AttackTarget()
    {
        while (Hp > 0)
        {
            yield return new WaitForSeconds(attackCoolTime);
            if (Hp <= 0)
                break;

            Attack();

        }
    }



    public override abstract void Upgrade(); //���׷��̵� ���� �����ؾ��մϴ�.

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

}
