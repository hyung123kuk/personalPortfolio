using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Building : MonoBehaviour , IDamaged
{
    #region 최대체력, 체력, 방어력, 팀
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //최대체력

    [SerializeField]
    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//체력

    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //방어력

    [SerializeField]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor();} } //팀설정, 색상설정, 레이어설정

    public int Level { get; set; }
    #endregion



    private SkinnedMeshRenderer[] BuildingSkinnedMesh;
    private MeshRenderer[] BuildingMesh;
    private Material[] mat;

    private void Awake()
    {

        BuildingSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        BuildingMesh = GetComponentsInChildren<MeshRenderer>();
        mat = Resources.LoadAll<Material>("0.TeamColor/BuildingColor");
        
    }

    protected virtual void OnEnable()
    {
        hp = maxHp;

        SetTeamColor();
    }
    public virtual void Start()
    {
        BuildingSet();
    }
    public virtual void BuildingSet()
    {
        SkillManager.skillManager.Buildings.Add(this);
    } //스킬매니저 빌딩을 세팅한다.

    public void SetTeamColor() //팀 색상 설정
    {

        for (int i = 0; i < BuildingSkinnedMesh.Length; i++)
        {
            BuildingSkinnedMesh[i].material = mat[team];
        }
        for (int i = 0; i < BuildingMesh.Length; i++)
        {
            BuildingMesh[i].material = mat[team];
        }

        gameObject.layer = 6 + team;
    }

    public void Damaged(int Damaged) //함수 오버로딩으로 SendMessage는 한개의 인수밖에 보낼수 없어 사용했습니다.
    {
        if (hp > 0)
        {
            hp -= Damaged + defense;
            if (hp <= 0)
            {
                DieCh();
            }
        }
    }

    public void Damaged(int Damaged , int team =-1) //팀이 다르면 데미지 입는다. 기본적으로 팀없이 받는건 데미지를 입도록 했다.
    {
        if (hp > 0)
        {
            hp -= Damaged + defense;
            if (hp <= 0)
            {
                DieCh();
            }
        }
    }

    private void DieCh()
    {
        
        
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // 죽은 캐릭터가 타겟이라면
            {
                targetAI.SendMessage("TargetSetting"); //타겟 재 세팅 메세지를 보냅니다.
            }
        }
    }

}
