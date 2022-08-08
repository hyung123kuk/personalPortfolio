using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public abstract class Character : MonoBehaviour, IAttack, IDamaged , IUpgrade 
// 모든 캐릭터들은 체력,공격력,방어력,이동속도을 가지고 있습니다.  회복 할수 있습니다 ,  데미지를 입습니다.
{

    [Header("캐릭터 이미지")]
    public Sprite image;
    [Header("캐릭터 이름")]
    public string Name;
    #region 최대체력, 체력, 공격력, 방어력, 이동속도, 공격범위, 팀, 인구수
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

    [Header("최대레벨")]
    [SerializeField]
    private int maxlevel;
    public int MaxLevel { get { return maxlevel; } set { maxlevel = value; } }
    [Header("레벨")]
    [SerializeField]
    private int level;
    public int Level { get { return level; } set { level = value; Upgrade(); } }
    [Header("인구수")]
    public int Population;

    [Header("체력/현재체력")]
    [SerializeField]
    private int maxHp; 
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //최대체력
    protected int prevMaxHp;

    public int levelMaxHp;

    [SerializeField]
    private int hp; 
    public int Hp { get { return hp; } set { hp = value; } }//체력

    [Header("공격력")]
    [SerializeField]
    private int attackDamage; 
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //공격력
    protected int prevAttackDamage;

    public int levelAttackDamage;


    [Header("방어력")]
    [SerializeField]
    private int defense; 
    public int Defense { get { return defense; } set { defense = value; } } //방어력
    protected int prevDefense;

    public int levelDefense;

    [Header("이동속도")]
    [SerializeField]
    private float speed; 
    public float Speed { get { return speed; } set { speed = value;} } //이동속도
    protected float prevSpeed;

    public float levelSpeed;

    [Header("공격속도")]
    [SerializeField]
    private float attackSpeed;
    public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //공격속도
    protected float prevAttackSpeed;

    public float levelAttackSpeed;

    [Header("사거리")]
    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //공격범위

    [Header("공격 후 대기시간")]
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
        #region 업그레이드를 하기 위해 처음능력치를 미리 알아둔다.
        prevMaxHp = maxHp;
        prevAttackDamage = attackDamage;
        prevAttackSpeed = attackSpeed;
        prevDefense = defense;
        prevSpeed = speed;
        #endregion

    }

    protected virtual void OnEnable()
    {
        hp = maxHp;
        SetTeamColor();
        UnitSet();
        

    }

    public virtual void Start()
    {
        
    }

    protected void OnDisable()
    {
        UnitUnSet();
    }
    public virtual void UnitSet() {

        TeamManager.teamManager.AddUnit(team, this);                //유닛을 더한후
        TeamManager.teamManager.TeamCastle(team).populationCheck(); //인구수 체크
    } 
    public virtual void UnitUnSet()
    {
        TeamManager.teamManager.RemoveUnit(team, this);             //유닛을 뺀후
        TeamManager.teamManager.TeamCastle(team).populationCheck(); //인구수 체크
    }
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


    private void DieCh() //캐릭터가 죽었을때 사용하는 함수.
    {
        GetComponent<Animator>().SetTrigger("Die");
        this.SendMessage("Die"); //AI에게 죽음을 알린다.
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // 죽은 캐릭터가 타겟이라면
            {
                targetAI.SendMessage("TargetSetting"); //타겟 재 세팅 메세지를 보냅니다.
            }
        }

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


    public virtual void Upgrade()
    {
        
        defense = prevDefense + (level * levelDefense);
        MaxHp = prevMaxHp + (levelMaxHp * Level);
        attackDamage = prevAttackDamage + (levelAttackDamage * level);
        speed = prevSpeed + (levelSpeed * level);
        attackSpeed = prevAttackSpeed + (levelAttackSpeed * level);

    }

    public virtual void RangeSet() { } //근거리 유닛일때 사용합니다.
    public abstract void AttackTarget(GameObject[] Targets); //공격함수 구현은 캐릭터 별로 각자 하도록 한다. 

    #region 스피드업 버프 함수
    public void SpeedUp(float xSpeed, int _team, float _duration) //같은 팀이면 공격속도,이동속도 가 증가합니다.
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
    #endregion

}
