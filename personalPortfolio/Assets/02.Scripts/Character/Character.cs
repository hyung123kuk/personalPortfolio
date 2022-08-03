using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public abstract class Character : MonoBehaviour, IAttack, IDamaged , IUpgrade 
// 모든 캐릭터들은 체력,공격력,방어력,이동속도을 가지고 있습니다.  회복 할수 있습니다 ,  데미지를 입습니다.
{
    #region 최대체력, 체력, 공격력, 방어력, 이동속도, 공격범위, 팀
    [Header("팀")]
    [SerializeField]
    private int team;
    public int Team
    {
        get { return team; }
        set
        {
            team = value; SetTeamColor();

        }
    } //팀을 넣으면 자동으로 색상 변경 및 레이어 설정

    [Header("캐릭터 기본능력치")]
    [SerializeField]
    private int maxHp; 
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //최대체력

    [SerializeField]
    private int hp; 
    public int Hp { get { return hp; } set { hp = value; } }//체력

    [SerializeField]
    private int attackDamage; 
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //공격력

    [SerializeField]
    private int defense; 
    public int Defense { get { return defense; } set { defense = value; } } //방어력

    [SerializeField]
    private int speed; 
    public int Speed { get { return speed; } set { speed = value;} } //이동속도

    [SerializeField]
    private float attackSpeed;
    public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //공격속도

    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //공격범위

    public int Level { get; set; }

    public float attackDelay;
    #endregion


    

    private SkinnedMeshRenderer[] CharacterSkinnedMesh;
    private MeshRenderer[] CharaterMesh;
    private Material[] mat;


    public virtual void Awake()
    {

        
        CharacterSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        CharaterMesh = GetComponentsInChildren<MeshRenderer>();
        mat = Resources.LoadAll<Material>("0.TeamColor/CharacterColor");
        

    }

    private void OnEnable()
    {
        hp = maxHp;
        SetTeamColor();
        
    }

    public virtual void Start()
    {
        UnitSet();
    }
    public virtual void UnitSet() {
        SkillManager.skillManager.Units.Add(this);
    } //스킬매니저 유닛을 세팅한다.


    public void SetTeamColor() //팀 색상 설정
    {
        for (int i = 0; i < CharacterSkinnedMesh.Length; i++)
        {
            CharacterSkinnedMesh[i].material = mat[team];
        }
        for (int i = 0; i < CharaterMesh.Length; i++)
        {
            CharaterMesh[i].material = mat[team];
        }

        gameObject.layer = 6 + team;

    }




    
    public void Damaged(int Damaged) //함수 오버로딩으로 SendMessage는 한개의 인수밖에 보낼수 없어 사용했습니다.
    {
        if (hp > 0)
        {
            hp -= Damaged+defense;
            if (hp <= 0)
            {
                DieCh();
            }
        }
    }

    public void Damaged(int Damaged,int team  = -1) //팀이 다르면 데미지 입는다. 기본적으로 팀없이 받는건 데미지를 입도록 했다.
    {
        if (team != Team && hp > 0)
        {
            hp -= Damaged+ defense;
            if (hp <= 0)
            {
                DieCh();
            }

        }
    }

    private void DieCh()
    {
        GetComponent<Animator>().SetTrigger("Die");
        this.SendMessage("Die");
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // 죽은 캐릭터가 타겟이라면
            {
                targetAI.SendMessage("TargetSetting"); //타겟 재 세팅 메세지를 보냅니다.
            }
        }

    }


    public virtual void AttackTarget(GameObject[] Targets)
    {

    }

    public void Attack() //AI 1인공격 함수 (애니메이션에서 공격)
    {
        
        if (GetComponent<AI>())
        {
            
            if (GetComponent<AI>().target != null)
            {
                GameObject[] tr = { GetComponent<AI>().target };
                AttackTarget(tr);
                GetComponent<AI>().AttackOff();
                return;
            }
        }

        
        AttackTarget(null);

    }

     public void SpeedUp(float xSpeed, int _team , float _duration) //같은 팀이면 공격속도,이동속도 가 증가합니다.
    {
        StartCoroutine(SpeedUpCoro(xSpeed, _team, _duration));
    }
    IEnumerator SpeedUpCoro(float xSpeed, int _team, float _duration)
    {
        if (Team == _team)
        {
            AttackSpeed *= xSpeed;
            Speed *= (int)xSpeed;
            yield return new WaitForSeconds(_duration);
            AttackSpeed /= xSpeed;
            Speed /= (int)xSpeed;
        }
    }

    
    public bool SameTeam(int _team)  //팀이 같으면 True 다르면 False 반환하는 함수
    {
        if (team == _team)
            return true;
        else
            return false;
    }
    public bool AttackRangeFucn(Transform _Target,float Angle =90f,float Range = -1) // 타겟이 공격범위 내에 있는지 확인하는 함수
    {
        if (Range == -1) // 만약에 공격 거리를 입력하지 않았다면 기본 공격거리를 사용한다.
            Range = attackRange;



        float angle  = Vector3.Angle(_Target.position - transform.position, transform.forward);

        if (Vector3.Distance(_Target.position, transform.position) <= Range + 0.2f && ((angle <= Angle)))
        {            
            return true;
        }
        return false;

    }

    public abstract void Upgrade(); //업그레이드 가상함수 + 인터페이스 선언으로 각자 알아서 업그레이드를 하도록 한다.
    public abstract void RangeSet(); //근거리 유닛일때 사용합니다.
}
