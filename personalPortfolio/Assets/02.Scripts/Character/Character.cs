using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Character : MonoBehaviour, IRecover, IDamaged
// 모든 캐릭터들은 체력,공격력,방어력,이동속도을 가지고 있습니다.  회복 할수 있습니다 ,  데미지를 입습니다.
{
    #region 최대체력, 체력, 공격력, 방어력, 이동속도, 공격범위, 팀
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
    public int Speed { get { return speed; } set { speed = value; } } //이동속도

    [SerializeField]
    private int attackRange;
    public int AttackRange { get { return attackRange; } set { attackRange = value; } } //이동속도

    [SerializeField]
    private int team; 
    public int Team { get { return team; } set { team = value; SetTeamColor(); } } //팀을 넣으면 자동으로 색상 변경

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
    }


    public void Recover(int recoverHp) //체력회복
    {hp += recoverHp;}

    

    public void Damaged(int Damaged) //공격 당함
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
            if (targetAI.target == gameObject) // 죽은 캐릭터가 타겟이라면
            {
                targetAI.SendMessage("TargetSetting"); //타겟 재 세팅 메세지를 보냅니다.
            }
        }
    }


    public virtual void AttackTarget(GameObject[] Targets) //전사 공격
    {        

        foreach (GameObject target in Targets) //Damaged 인터페이스가 근거리일때는 적에게 데미지를, 원거리일때는 투사체에 데미지를 설정하는 역할을 한다.
        {
            if(Vector3.Distance(target.transform.position,transform.position) < attackRange )
            target.SendMessage("Damaged",attackDamage);
        }
    }


}
