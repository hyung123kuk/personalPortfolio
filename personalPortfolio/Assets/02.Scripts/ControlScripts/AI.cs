using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class AI : MonoBehaviour, IState
{
    NavMeshAgent nav;
    Animator ani;
    Character character;
    
    public GameObject target;
    private bool attackPosible;
    private float PrevDelayTime;

    public IState.State state { get; set; }

    public void Awake()
    {
        nav = GetComponent<NavMeshAgent>();
        ani = GetComponent<Animator>();
        character = GetComponent<Character>();
    }

    public void OnEnable()
    {
        state = IState.State.Idle;
        nav.speed = character.Speed;
        nav.stoppingDistance = character.AttackRange;
        StartCoroutine(AIState());
    }


    IEnumerator AIState()
    {
        while ( state !=IState.State.Die )
        {
            yield return new WaitForSeconds(0.5f);
            if (state == IState.State.Die) //�׾����� ����
                break;
            
            if (target == null) // Ÿ���� ������ Ÿ���� �����Ѵ�.
            {
                TargetSetting();
                
                if (target == null) //�����ڿ��� Ÿ���� ������ �� ĳ���Ͱ� ���� �� �̹Ƿ� continue�Ѵ�.
                {
                    nav.isStopped = true; //Ÿ���� ������ �����.
                    continue;
                }
            }

            StateSet();

            switch (state)
            {
                case IState.State.Idle: //�Ϲ� ���� ������
                    Idle();
                    break;
                case IState.State.Attack: //���� ���� ������
                    AttackState();
                    break;
            }
        }

    }

    protected virtual void TargetSetting() // �ƹ��� ������ �������� ���尡��� ���� �����Ѵ�. 
                                           //protected�� �� ������ ���߿� �ٸ� AI���� ��ӹ޾Ƽ� ���� �����Ƿ�(�ǹ��켱���� , ĳ���Ϳ켱���ݵ�)
    {
        Character[] characters = FindObjectsOfType<Character>();
        Building[] buildings = FindObjectsOfType<Building>();
        GameObject Tar =null;
        float? nearestDis = null;   //���� ������ null���� �ֱ����� ?�� ���
        #region ���� ����� �� (����+ĳ����) �� ã�� Ÿ���� ����� �ڵ�
        foreach (Character Enemy in characters) 
        {
     
            if(Enemy.Team != character.Team && Enemy.Hp > 0) //�ٸ����̰�, ü���� 0���� ������ ������ ������ �ν�
            {
                
                float Dis = Vector3.Distance(Enemy.transform.position, transform.position);
                if(nearestDis > Dis || nearestDis == null)
                {
                    
                    Tar = Enemy.gameObject;
                }
            }
        }

        foreach(Building EnemyBuilding in buildings)
        {
            if (EnemyBuilding.Team != character.Team && EnemyBuilding.Hp >0 )
            {
                float Dis = Vector3.Distance(EnemyBuilding.transform.position, transform.position);
                if (nearestDis > Dis)
                {
                    Tar = EnemyBuilding.gameObject;
                }
            }
        }
        #endregion
        TargetSet(Tar);
    }

    public void TargetSet(GameObject Target) //�ٸ� ���� �����ϸ� �� ������ ������ Ÿ���� �ٲ۴�. �׺� ��
    {
        target = Target;
        
    }

    public void StateSet()
    {
        
        float dist = Vector3.Distance(target.transform.position, transform.position);

        if (dist < character.AttackRange) // �� ĳ������ �Ÿ��� ���ݰŸ� ���� ª�ٸ� ���ݻ��·� �ٲ��.
            state = IState.State.Attack;
        else
            state = IState.State.Idle;

    }

    public void Idle()
    {
       
        nav.isStopped = false;
        nav.destination = target.transform.position;

    }

    public void AttackState() //���� �����϶�
    {
        if (attackPosible)
        {
            ani.SetTrigger("Attack");
            nav.isStopped = true;
        }
    }

    public void Attack() //AI 1�ΰ��� �Լ� (�ִϸ��̼ǿ��� ����)
    {
        if (target != null)
        {
            GameObject[] tr = { target };
            character.AttackTarget(tr);
        }
    }

    public void AttackOff()
    {
        attackPosible = false;
        PrevDelayTime = 0;
    }

    private void Update() //���� �ð� ����
    {
        AttackDelay();

    }

    void AttackDelay()
    {
        if (!attackPosible)
        {
            PrevDelayTime += Time.deltaTime;
            if (PrevDelayTime > character.attackDelay)
            {
                PrevDelayTime = 0;
                attackPosible = true;
            }
        }
    }


    public void Die()
    {
        state = IState.State.Die;
    } 

}
