using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Building : MonoBehaviour , IDamaged
{
    #region �ִ�ü��, ü��, ����, ��
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��

    [SerializeField]
    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//ü��

    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //����

    [SerializeField]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor();} } //������, ������, ���̾��

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
    } //��ų�Ŵ��� ������ �����Ѵ�.

    public void SetTeamColor() //�� ���� ����
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

    public void Damaged(int Damaged) //�Լ� �����ε����� SendMessage�� �Ѱ��� �μ��ۿ� ������ ���� ����߽��ϴ�.
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

    public void Damaged(int Damaged , int team =-1) //���� �ٸ��� ������ �Դ´�. �⺻������ ������ �޴°� �������� �Ե��� �ߴ�.
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
            if (targetAI.target == gameObject) // ���� ĳ���Ͱ� Ÿ���̶��
            {
                targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
            }
        }
    }

}
