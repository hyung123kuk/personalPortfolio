using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public abstract class Character : MonoBehaviour, IRecover, IDamaged
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
        HeroSet();
    }
    public virtual void HeroSet() { } // ����� ĳ���ʹ� ��ų�� ��� �Ҽ� �ֵ��� ����� ������ ���ش�.


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


    public void Recover(int recoverHp) //ü��ȸ��
    {hp += recoverHp;}

    

    public void Damaged(int Damaged) //���� ����
    { hp -= Damaged;
        if (hp <= 0)
        {
            DieCh();
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


    public virtual void AttackTarget(GameObject[] Targets) //���� ����
    {        

        foreach (GameObject target in Targets) //Damaged �������̽��� �ٰŸ��϶��� ������ ��������, ���Ÿ��϶��� ����ü�� �������� �����ϴ� ������ �Ѵ�.
        {
            transform.LookAt(target.transform);
            if(Vector3.Distance(target.transform.position,transform.position) <= attackRange+0.2f )
                target.SendMessage("Damaged",attackDamage);
        }
    }


    public void SpeedUp(float xSpeed, int _team) //���� ���̸� ���ݼӵ�,�̵��ӵ� �� �����մϴ�.
    {
        if (Team == _team)
        {
            AttackSpeed *= xSpeed;
            Speed *= (int)xSpeed;
            
        }

    }

    

}
