using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Castle : Building , IUpgrade
{
    [Header("최대 건물 수")]
    public int MaxbuildingNum = 2;
    private int PrevBuildingNum;

    public int levelBuildingNum;

    [Header("최대 유닛 수")]
    public int MaxUnitNum = 8;
    private int PrevUnitNum;

    public int levelUnitNum;

    [Header("내 건물")]
    [SerializeField]
    public List<Building> buildings = new List<Building>();

    [Header("내 유닛")]
    [SerializeField]
    public List<Character> units = new List<Character>();

    public event TeamManager.BuildingWork unitProduce; //유닛생성 가능할때와 불가능할때 메이크빌딩에서 바로 적용되도록 event 선언했다.
    public event TeamManager.BuildingWork attackBuildingWork; //건물 공격에 관한 event

    private bool unitproduce = true; //상태가 달라지지 않으면 괜히 event를 불러와 시간이 걸리므로 이곳에서도 알수있게 선언해 주었다.
   
    int NowPopulation = 0;
    protected override void OnEnable()
    {
        TeamManager.teamManager.Castles.Add(this);
        base.OnEnable();
    }

    protected override void Awake()
    {
        #region 기본 빌딩 숫자숫자와 유닛 개수를 저장한다.
        PrevBuildingNum = MaxbuildingNum;
        PrevUnitNum = MaxUnitNum;
        #endregion
        base.Awake();
    }

    public override void Start()
    { 
        base.Start();
        
       
    }

    public override void Upgrade()
    {
        
        base.Upgrade();
        MaxbuildingNum = PrevBuildingNum + (levelBuildingNum * Level);
        MaxUnitNum = PrevUnitNum + (levelUnitNum * Level);
        BuildingCheck(); UnitCheck();
        
    }

    public void UnitOn(bool ison)
    {

        if (unitProduce != null)
        {
            unitProduce(ison); 
        }
    }

    public void populationCheck()
    {
        
        if (unitProduce == null)
            return;
        populNum();
        UnitCheck();
        if (NowPopulation < MaxUnitNum) //유닛 개수가 최대 유닛 보다 작으면 유닛생성 가능 아니면 유닛생성 멈춤
        {
            if (!unitproduce) //이게 없으면 너무 많은 이벤트함수를 사용해야 하므로 걸어놓았다.
            {
                unitProduce(true);
                unitproduce = true;
            }
        }
        else
        {
            if (unitproduce)
            {
                unitProduce(false);
                unitproduce = false;
            }
        }
        
    } //인구수 체크해서 생성 건물에 생성 가능한지 불가능한지 보내는 함수

    private void populNum()
    {
        NowPopulation = 0;
        foreach (Character unit in units)
        {
            NowPopulation += unit.Population;
        }
    }

    public void AttackBuildingCheck(bool isattack)
    {
        
        if (attackBuildingWork != null)
        {
            attackBuildingWork(isattack); //공격건물 어택에 관한 함수 
        }
    }

    public void BuildingCheck()
    {
        if (gameObject.layer == LayerMask.NameToLayer("TEAM1"))
        {
            PlayerUI.playerUI.BuildingSet(buildings.Count, MaxbuildingNum);
        }
    }

    public void UnitCheck()
    {
        if (gameObject.layer == LayerMask.NameToLayer("TEAM1"))
        {
            PlayerUI.playerUI.UnitSet(NowPopulation, MaxUnitNum);
        }
    }

}
