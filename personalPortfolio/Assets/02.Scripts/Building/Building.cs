using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public abstract class Building : MonoBehaviour , IDamaged ,IUpgrade
{
    [Header("건물 이미지")]
    public Sprite image;
    [Header("건물 이름")]
    public string Name;
    #region 최대체력, 체력, 방어력, 팀
    [Header("팀")]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor(); } } //팀설정, 색상설정, 레이어설정

    [Header("최대레벨")]
    [SerializeField]
    private int maxlevel;
    public int MaxLevel { get { return maxlevel; } set { maxlevel = value; } }

    [Header("레벨")]
    private int level;
    public int Level { get { return level; } set { level = value;Upgrade(); } }


    [Header("체력/현재체력")]
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value;  } } //최대체력

    protected int prevMaxHp;

    public int levelMaxHp;

    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//체력

    [Header("방어력")]
    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //방어력
    protected int prevDefense;

    public int levelDefense;

    #endregion

    [Header("가격")]
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
        #region 업그레이드를 하기 위해 처음능력치를 미리 알아둔다.
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
            SoundManager.soundManager.SFXPlay("BuildingHit");

            if (hp <= 0)
            {
                DestroyBuilding();
                if (Team == 1)
                {
                    PlayerUI.playerUI.MoneySet(sellPrice / 5); //판매가의 5분의1만큼의 돈이 들어감.
                }
            }

            if (hpBarImage != null)
                hpBarImage.fillAmount = (float)Hp / (float)MaxHp;
        }
    }

    public void Damaged(int Damaged , int team =-1) //팀이 다르면 데미지 입는다. 기본적으로 팀없이 받는건 데미지를 입도록 했다.
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
                    
                    PlayerUI.playerUI.MoneySet(sellPrice / 5); //판매가의 5분의1만큼의 돈이 들어감.
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
            if (targetAI.target == gameObject) // 죽은 건물이 타겟이라면
            {
                targetAI.SendMessage("TargetSetting"); //타겟 재 세팅 메세지를 보냅니다.
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
