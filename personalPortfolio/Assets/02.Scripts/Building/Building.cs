using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public abstract class Building : MonoBehaviour , IDamaged ,IUpgrade
{
    [Header("�ǹ� �̹���")]
    public Sprite image;
    [Header("�ǹ� �̸�")]
    public string Name;
    #region �ִ�ü��, ü��, ����, ��
    [Header("��")]
    [SerializeField]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��

    [Header("�ִ뷹��")]
    [SerializeField]
    private int maxlevel;
    public int MaxLevel { get { return maxlevel; } set { maxlevel = value; } }

    [Header("����")]
    [SerializeField]
    private int level;
    public int Level { get { return level; } set { level = value; Upgrade(); } }


    [Header("ü��/����ü��")]
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��
    protected int prevMaxHp;

    public int levelMaxHp;

    [SerializeField]
    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//ü��

    [Header("����")]
    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //����
    protected int prevDefense;

    public int levelDefense;

    #endregion

    [Header("����")]
    public int buyPrice;
    public int prevlevelPrice;
    public int sellPrice;
    public int levelPrice;

    private SkinnedMeshRenderer[] BuildingSkinnedMesh;
    private MeshRenderer[] BuildingMesh;
    private Material[] mat;


    protected virtual void Awake()
    {

        BuildingSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        BuildingMesh = GetComponentsInChildren<MeshRenderer>();
        mat = Resources.LoadAll<Material>("0.TeamColor/BuildingColor");
        #region ���׷��̵带 �ϱ� ���� ó���ɷ�ġ�� �̸� �˾Ƶд�.
        prevMaxHp = maxHp;
        prevDefense = defense;
        prevlevelPrice = levelPrice;
        #endregion
        sellPrice = buyPrice * 80 / 100;

    }

    protected virtual void OnEnable()
    {        
        SetTeamColor();
        BuildingSet();
        Upgrade();
    }
    private void OnDisable()
    {
        BuildingUnSet();
    }
    public virtual void Start()
    {
        
    }
    public virtual void BuildingSet()
    {
        
        TeamManager.teamManager.AddBuilding(team, this);
        
    }
    public virtual void BuildingUnSet()
    {
        TeamManager.teamManager.RemoveBuilding(team, this);
    }

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

    public virtual void Upgrade()
    {
        levelPrice = (level + 2)* (level + 1) * prevlevelPrice;
        defense = prevDefense + (level * levelDefense);
        MaxHp = prevMaxHp + (levelMaxHp * level);
        hp = maxHp;
        sellPrice = buyPrice;
        for (int i =0;i<level; i++)
        {
            if (i == 0)
            {
                sellPrice += prevlevelPrice;
            }
            else
            {
                sellPrice += (i + 2) * (i + 1) * prevlevelPrice;
            }
        }
        sellPrice = sellPrice *80 /100;

    }


}
