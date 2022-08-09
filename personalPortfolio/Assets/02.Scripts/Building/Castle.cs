using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Castle : Building , IUpgrade
{
    [Header("�ִ� �ǹ� ��")]
    public int MaxbuildingNum = 2;
    private int PrevBuildingNum;

    public int levelBuildingNum;

    [Header("�ִ� ���� ��")]
    public int MaxUnitNum = 8;
    private int PrevUnitNum;

    public int levelUnitNum;

    [Header("�� �ǹ�")]
    [SerializeField]
    public List<Building> buildings = new List<Building>();

    [Header("�� ����")]
    [SerializeField]
    public List<Character> units = new List<Character>();

    public event TeamManager.BuildingWork unitProduce; //���ֻ��� �����Ҷ��� �Ұ����Ҷ� ����ũ�������� �ٷ� ����ǵ��� event �����ߴ�.
    public event TeamManager.BuildingWork attackBuildingWork; //�ǹ� ���ݿ� ���� event

    private bool unitproduce = true; //���°� �޶����� ������ ���� event�� �ҷ��� �ð��� �ɸ��Ƿ� �̰������� �˼��ְ� ������ �־���.
   
    int NowPopulation = 0;
    protected override void OnEnable()
    {
        TeamManager.teamManager.Castles.Add(this);
        base.OnEnable();
    }

    protected override void Awake()
    {
        #region �⺻ ���� ���ڼ��ڿ� ���� ������ �����Ѵ�.
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
        if (NowPopulation < MaxUnitNum) //���� ������ �ִ� ���� ���� ������ ���ֻ��� ���� �ƴϸ� ���ֻ��� ����
        {
            if (!unitproduce) //�̰� ������ �ʹ� ���� �̺�Ʈ�Լ��� ����ؾ� �ϹǷ� �ɾ���Ҵ�.
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
        
    } //�α��� üũ�ؼ� ���� �ǹ��� ���� �������� �Ұ������� ������ �Լ�

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
            attackBuildingWork(isattack); //���ݰǹ� ���ÿ� ���� �Լ� 
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
