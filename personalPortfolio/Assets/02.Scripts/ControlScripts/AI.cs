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
        
        nav.stoppingDistance = character.AttackRange;
        StartCoroutine(AIState());
    }


    IEnumerator AIState()
    {
        while ( state !=IState.State.Die )
        {

            
            yield return new WaitForSeconds(0.3f);



            if (state == IState.State.Die) //죽었으면 리턴
                break;
            
            if (target == null) // 타겟이 없으면 타겟을 설정한다.
            {
                TargetSetting();
                
                if (target == null) //설정뒤에도 타겟이 없으면 적 캐릭터가 없는 것 이므로 continue한다.
                {
                    ani.SetFloat("Speed", 0);
                    nav.isStopped = true; //타겟이 없으면 멈춘다.
                    continue;
                }
            }

            StateSet();

            switch (state)
            {
                case IState.State.Idle: //일반 상태 였을때
                    Idle();

                    break;
                case IState.State.Attack: //공격 상태 였을때
                    AttackState();
                    
                    
                    break;
            }
        }
        
        nav.isStopped = true;
        yield return new WaitForSeconds(2f);
        gameObject.SetActive(false);
    }

    protected virtual void TargetSetting() // 아무런 영향이 없을때는 가장가까운 적을 공격한다. 
                                           //protected를 한 이유는 나중에 다른 AI에서 상속받아서 쓸수 있으므로(건물우선공격 , 캐릭터우선공격등)
    {
        Character[] characters = FindObjectsOfType<Character>();
        Building[] buildings = FindObjectsOfType<Building>();
        GameObject Tar =null;
        float? nearestDis = null;   //설정 전에는 null값을 넣기위해 ?를 사용
        #region 가장 가까운 적 (빌딩+캐릭터) 를 찾아 타겟을 만드는 코드
        foreach (Character Enemy in characters) 
        {
     
            if(Enemy.Team != character.Team && Enemy.Hp > 0) //다른팀이고, 체력이 0보다 많을때 공격할 적으로 인식
            {
                
                float Dis = Vector3.Distance(Enemy.transform.position, transform.position);
                if(nearestDis > Dis || nearestDis == null)
                {
                    
                    Tar = Enemy.gameObject;
                    nearestDis = Dis;
                }
            }
        }

        foreach(Building EnemyBuilding in buildings)
        {
            if (EnemyBuilding.Team != character.Team && EnemyBuilding.Hp >0 )
            {
                float Dis = Vector3.Distance(EnemyBuilding.transform.position, transform.position);
                if (nearestDis > Dis || nearestDis == null)
                {
                    Tar = EnemyBuilding.gameObject;
                    nearestDis = Dis;
                }
            }
        }
        #endregion
        TargetSet(Tar);
    }

    public void TargetSet(GameObject Target) //다른 적이 공격하면 그 공격한 적으로 타겟을 바꾼다. 네비 온
    {
      
        target = Target;
        if(target !=null)
            character.RangeSet();
        
    }

    public void StateSet()
    {

        if (target == null)
            state = IState.State.Idle;
        else
        {
            float dist = Vector3.Distance(target.transform.position, transform.position);

            if (dist < character.AttackRange) // 두 캐릭터의 거리가 공격거리 보다 짧다면 공격상태로 바뀐다.
                state = IState.State.Attack;
            else
                state = IState.State.Idle;
        }
    }

    public void Idle()
    {
        if (target == null)
        {
            ani.SetFloat("Speed", 0);
            nav.isStopped = true;
        }
        else
        {
            nav.isStopped = false;
            nav.speed = character.Speed;
            nav.destination = target.transform.position;
            ani.SetFloat("Speed", nav.velocity.magnitude / character.Speed);
        }
    }

    public void AttackState() //공격 상태일때
    {
        if (attackPosible)
        {
            
            ani.SetTrigger("Attack");
            ani.SetFloat("AttackSpeed", character.AttackSpeed );
            ani.SetFloat("Speed", 0f);
            nav.isStopped = true;
            
        }
    }



    public void AttackOff()
    {
        attackPosible = false;
        PrevDelayTime = 0;
    }

    private void Update() //공격 시간 재기용
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
