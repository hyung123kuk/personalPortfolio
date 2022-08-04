using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Castle : Building
{
    [Header("�ִ� �ǹ� ��")]
    public int MaxbuildingNum = 2;
    private int PrevBuildingNum;
    [Header("�ִ� ���� ��")]
    public int MaxUnitNum = 8;
    private int PrevUnitNum;

    [Header("�� �ǹ�")]
    [SerializeField]
    public List<Building> buildings = new List<Building>();
    [Header("�� ����")]
    [SerializeField]
    public List<Character> units = new List<Character>();

    public event TeamManager.UnitProduce unitProduce; //���ֻ��� �����Ҷ��� �Ұ����Ҷ� ����ũ�������� �ٷ� ����ǵ��� event �����ߴ�.
    private bool unitproduce=true; //���°� �޶����� ������ ���� event�� �ҷ��� �ð��� �ɸ��Ƿ� �̰������� �˼��ְ� ������ �־���.

    protected override void OnEnable()
    {
        TeamManager.teamManager.Castles.Add(this);
        base.OnEnable();
    }


    public override void Start()
    {
        #region �⺻ ���� ���ڼ��ڿ� ���� ������ �����Ѵ�.
        PrevBuildingNum = MaxbuildingNum;
        PrevUnitNum = MaxUnitNum;
        #endregion

        base.Start();
        
       
    }

    public override void Upgrade()
    {
        MaxbuildingNum = PrevUnitNum + Level;
        MaxUnitNum = PrevUnitNum + (4 * Level);
    }

    public void populationCheck()
    {
        if (units.Count < MaxUnitNum) //���� ������ �ִ� ���� ���� ������ ���ֻ��� ���� �ƴϸ� ���ֻ��� ����
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


}
