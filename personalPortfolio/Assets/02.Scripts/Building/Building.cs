using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Building : MonoBehaviour , IDamaged ,IUpgrade
{
    [Header("�ǹ� �̹���")]
    public Sprite image;
    [Header("�ǹ� �̸�")]
    public string Name;
    #region �ִ�ü��, ü��, ����, ��
    [Header("��")]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor(); } } //������, ������, ���̾��

    [Header("�ִ뷹��")]
    [SerializeField]
    private int maxlevel;
    public int MaxLevel { get { return maxlevel; } set { maxlevel = value; } }

    [Header("����")]
    private int level;
    public int Level { get { return level; } set { level = value;Upgrade(); } }


    [Header("ü��/����ü��")]
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value;  } } //�ִ�ü��

    protected int prevMaxHp;

    public int levelMaxHp;

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
    private int prevlevelPrice;
    public int PrevlevelPrice
    {
        get { return prevlevelPrice; }
        set { prevlevelPrice = value; }
    }

    private int sellPrice;
    public int SellPrice
    {
        get { return sellPrice; }
        set { sellPrice = value; }
    }

    public int levelPrice;

    private SkinnedMeshRenderer[] BuildingSkinnedMesh;
    private MeshRenderer[] BuildingMesh;
    private Material[] mat;
    GameObject BuidingDieEffect;

    private GameObject Hpbar;
    private Image hpBarImage;

    protected virtual void Awake()
    {
       

        BuildingSkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        BuildingMesh = GetComponentsInChildren<MeshRenderer>();
        BuidingDieEffect = Resources.Load<GameObject>("BuildingDestroy");
        mat = Resources.LoadAll<Material>("0.TeamColor/BuildingColor");
        if (transform.parent.gameObject.name != "MyBuilding")
        {
            Team = 1;
        }
        #region ���׷��̵带 �ϱ� ���� ó���ɷ�ġ�� �̸� �˾Ƶд�.
        prevMaxHp = maxHp;
        prevDefense = defense;
        prevlevelPrice = levelPrice;
        #endregion
        sellPrice = buyPrice * 80 / 100;

        HpbarSet();
    }

    protected virtual void OnEnable()
    {        
        SetTeamColor();
        BuildingSet();
        Upgrade();
    }
    protected virtual void OnDisable()
    {
        BuildingUnSet();
        DestroyBuilding();

    }
    public virtual void Start()
    {
        
        
    }
    public virtual void BuildingSet()
    {
        
        TeamManager.teamManager.AddBuilding(team, this);
        if (Hpbar != null)
        {
            Hpbar.SetActive(true);
            hpBarImage.fillAmount = 1.0f;
        }

    }
    public virtual void BuildingUnSet()
    {
        TeamManager.teamManager.RemoveBuilding(team, this);
        if (Hpbar != null)
            Hpbar.SetActive(false);
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
            SoundManager.soundManager.SFXPlay("BuildingHit");

            if (hp <= 0)
            {
                DestroyBuilding();
                if (Team == 1)
                {
                    PlayerUI.playerUI.MoneySet(sellPrice / 5); //�ǸŰ��� 5����1��ŭ�� ���� ��.
                }
            }

            if (hpBarImage != null)
                hpBarImage.fillAmount = (float)Hp / (float)MaxHp;
        }
    }

    public void Damaged(int Damaged , int team =-1) //���� �ٸ��� ������ �Դ´�. �⺻������ ������ �޴°� �������� �Ե��� �ߴ�.
    {
        if (team != Team && hp > 0)
        {
            hp -= Damaged + defense;
            SoundManager.soundManager.SFXPlay("BuildingHit");

            if (hp <= 0)
            {
                DestroyBuilding();

                if (Team == 1)
                {
                    
                    PlayerUI.playerUI.MoneySet(sellPrice / 5); //�ǸŰ��� 5����1��ŭ�� ���� ��.
                }
            }
            if (hpBarImage != null)
                hpBarImage.fillAmount = (float)Hp / (float)MaxHp;
        }
    }

    protected virtual void DestroyBuilding()
    {

        SoundManager.soundManager.SFXPlay("Explosion");
        AI[] allAI = FindObjectsOfType<AI>();
        foreach (AI targetAI in allAI)
        {
            if (targetAI.target == gameObject) // ���� �ǹ��� Ÿ���̶��
            {
                targetAI.SendMessage("TargetSetting"); //Ÿ�� �� ���� �޼����� �����ϴ�.
            }
        }

        GameObject buildingDieEff=Instantiate<GameObject>(BuidingDieEffect, transform.position, Quaternion.identity);
        Destroy(buildingDieEff, 1.5f);
        if (hp <= 0) 
        {
            gameObject.SetActive(false);
            
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

        if(Hpbar == null)
        {
            HpbarSet();
        }
        Hpbar.transform.GetChild(2).GetComponent<Text>().text = level.ToString();
    }

    private void HpbarSet()
    {
        Hpbar = Instantiate(Resources.Load<GameObject>("BuildingHp_bar"));
        Hpbar.GetComponent<CharacterHpBar>().targetTr = transform;
        hpBarImage = Hpbar.transform.GetChild(1).GetComponent<Image>();
        hpBarImage.fillAmount = 1.0f;
    }
}
