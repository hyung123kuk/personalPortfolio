using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Character : MonoBehaviour, IRecover, IDamaged
// ��� ĳ���͵��� ü��,���ݷ�,����,�̵��ӵ��� ������ �ֽ��ϴ�.  ȸ�� �Ҽ� �ֽ��ϴ� ,  �������� �Խ��ϴ�.
{
    #region �ִ�ü��, ü��, ���ݷ�, ����, �̵��ӵ�, ���ݹ���, ��
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
    public int Speed { get { return speed; } set { speed = value; } } //�̵��ӵ�

    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //�̵��ӵ�

    [SerializeField]
    private int team; 
    public int Team { get { return team; } set { team = value; SetTeamColor(); } } //���� ������ �ڵ����� ���� ����

    #endregion

    public float attackDelay;


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
    }


    public void Recover(int recoverHp) //ü��ȸ��
    {hp += recoverHp;}

    

    public void Damaged(int Damaged) //���� ����
    { hp -= Damaged;
        if (hp <= 0)
        {
            Die();
        }

    }

    private void Die()
    {
        GetComponent<Animator>().SetTrigger("Die");
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
            if(Vector3.Distance(target.transform.position,transform.position) < attackRange )
            target.SendMessage("Damaged",attackDamage);
        }
    }


}
