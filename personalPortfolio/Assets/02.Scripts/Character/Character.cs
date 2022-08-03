using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public abstract class Character : MonoBehaviour, IAttack, IDamaged , IUpgrade 
// ��� ĳ���͵��� ü��,���ݷ�,����,�̵��ӵ��� ������ �ֽ��ϴ�.  ȸ�� �Ҽ� �ֽ��ϴ� ,  �������� �Խ��ϴ�.
{
    #region �ִ�ü��, ü��, ���ݷ�, ����, �̵��ӵ�, ���ݹ���, ��
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

    [Header("ĳ���� �⺻�ɷ�ġ")]
    [SerializeField]
    private int maxHp; 
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��

    [SerializeField]
    private int hp; 
    public int Hp { get { return hp; } set { hp = value; } }//ü��

    [SerializeField]
    private int attackDamage; 
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�

    [SerializeField]
    private int defense; 
    public int Defense { get { return defense; } set { defense = value; } } //����

    [SerializeField]
    private int speed; 
    public int Speed { get { return speed; } set { speed = value;} } //�̵��ӵ�

    [SerializeField]
    private float attackSpeed;
    public float AttackSpeed { get { return attackSpeed; } set { attackSpeed = value; } } //���ݼӵ�

    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //���ݹ���

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
    } //��ų�Ŵ��� ������ �����Ѵ�.


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

    private void DieCh()
    {
        GetComponent<Animator>().SetTrigger("Die");
        this.SendMessage("Die");
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // ���� ĳ���Ͱ� Ÿ���̶��
            {
                targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
            }
        }

    }


    public virtual void AttackTarget(GameObject[] Targets)
    {

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

     public void SpeedUp(float xSpeed, int _team , float _duration) //���� ���̸� ���ݼӵ�,�̵��ӵ� �� �����մϴ�.
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

    public abstract void Upgrade(); //���׷��̵� �����Լ� + �������̽� �������� ���� �˾Ƽ� ���׷��̵带 �ϵ��� �Ѵ�.
    public abstract void RangeSet(); //�ٰŸ� �����϶� ����մϴ�.
}
