using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public abstract class Character : MonoBehaviour, IAttack, IDamaged , IUpgrade 
// ��� ĳ���͵��� ü��,���ݷ�,����,�̵��ӵ��� ������ �ֽ��ϴ�.  ȸ�� �Ҽ� �ֽ��ϴ� ,  �������� �Խ��ϴ�.
{

    [Header("ĳ���� �̹���")]
    public Sprite image;
    [Header("ĳ���� �̸�")]
    public string Name;
    #region �ִ�ü��, ü��, ���ݷ�, ����, �̵��ӵ�, ���ݹ���, ��, �α���
    [Header("��")]
    [SerializeField]
    private int team;
    public int Team
    {
        get { return team; }
        set
        {
            team = value; SetTeamColor();

        }
    } //���� ������ �ڵ����� ���� ���� �� ���̾� ����

    [Header("�ִ뷹��")]
    [SerializeField]
    private int maxlevel;
    public int MaxLevel { get { return maxlevel; } set { maxlevel = value; } }
    [Header("����")]
    [SerializeField]
    private int level;
    public int Level { get { return level; } set { level = value; Upgrade(); } }
    [Header("�α���")]
    public int Population;

    [Header("ü��/����ü��")]
    [SerializeField]
    private int maxHp; 
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
    protected int prevMaxHp;

    public int levelMaxHp;

    [SerializeField]
    private int hp; 
    public int Hp { get { return hp; } set { hp = value; } }//ü��

    [Header("���ݷ�")]
    [SerializeField]
    private int attackDamage; 
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�
    protected int prevAttackDamage;

    public int levelAttackDamage;


    [Header("����")]
    [SerializeField]
    private int defense; 
    public int Defense { get { return defense; } set { defense = value; } } //����
    protected int prevDefense;

    public int levelDefense;

    [Header("�̵��ӵ�")]
    [SerializeField]
    private float speed; 
    public float Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�
    protected float prevSpeed;

    public float levelSpeed;

    [Header("���ݼӵ�")]
    [SerializeField]
    private float attackSpeed;
    public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�
    protected float prevAttackSpeed;

    public float levelAttackSpeed;

    [Header("��Ÿ�")]
    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���

    [Header("���� �� ���ð�")]
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
        #region ���׷��̵带 �ϱ� ���� ó���ɷ�ġ�� �̸� �˾Ƶд�.
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

        TeamManager.teamManager.AddUnit(team, this);                //������ ������
        TeamManager.teamManager.TeamCastle(team).populationCheck(); //�α��� üũ
    } 
    public virtual void UnitUnSet()
    {
        TeamManager.teamManager.RemoveUnit(team, this);             //������ ����
        TeamManager.teamManager.TeamCastle(team).populationCheck(); //�α��� üũ
    }
    public void SetTeamColor() //�� ���� ����
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


    
    public void Damaged(int Damaged) //�Լ� �����ε����� SendMessage�� �Ѱ��� �μ��ۿ� ������ ���� ����߽��ϴ�.
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
    public void Damaged(int Damaged,int team  = -1) //���� �ٸ��� ������ �Դ´�. �⺻������ ������ �޴°� �������� �Ե��� �ߴ�.
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


    private void DieCh() //ĳ���Ͱ� �׾����� ����ϴ� �Լ�.
    {
        GetComponent<Animator>().SetTrigger("Die");
        this.SendMessage("Die"); //AI���� ������ �˸���.
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // ���� ĳ���Ͱ� Ÿ���̶��
            {
                targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
            }
        }

    }
    public void Attack() //AI 1�ΰ��� �Լ� (�ִϸ��̼ǿ��� ����)
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


    public bool SameTeam(int _team)  //���� ������ True �ٸ��� False ��ȯ�ϴ� �Լ�
    {
        if (team == _team)
            return true;
        else
            return false;
    }

    public bool AttackRangeFucn(Transform _Target,float Angle =90f,float Range = -1) // Ÿ���� ���ݹ��� ���� �ִ��� Ȯ���ϴ� �Լ�
    {
        if (Range == -1) // ���࿡ ���� �Ÿ��� �Է����� �ʾҴٸ� �⺻ ���ݰŸ��� ����Ѵ�.
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

    public virtual void RangeSet() { } //�ٰŸ� �����϶� ����մϴ�.
    public abstract void AttackTarget(GameObject[] Targets); //�����Լ� ������ ĳ���� ���� ���� �ϵ��� �Ѵ�. 

    #region ���ǵ�� ���� �Լ�
    public void SpeedUp(float xSpeed, int _team, float _duration) //���� ���̸� ���ݼӵ�,�̵��ӵ� �� �����մϴ�.
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
