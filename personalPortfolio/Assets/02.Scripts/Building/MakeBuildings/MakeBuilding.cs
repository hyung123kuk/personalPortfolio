using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MakeBuilding : Building, IMake
{
    [Header("���� ����")]
    public GameObject makeUnit;

    [Header("���� ����µ� �ɸ��� �ð�")]
    [SerializeField]
    private float makeCoolTime;
    public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }

    protected float prevMakeCoolTime;
    public float levelMakeCoolTime;

    [Header("���� ���� ON/OFF")]

    public bool posibleProduce=true; //�α����� ���� ���� �Ұ���,���� ������ ��������.

    [SerializeField]
    Transform MakePos;

    

    protected override void Awake()
    {
        base.Awake();
        prevMakeCoolTime = MakeCoolTime;
        MakePos = transform.GetChild(0);


    }

    protected override void OnEnable()
    {
        
        base.OnEnable();
        TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //���� ���� ĳ���� ���ø� �޴´�.
        StartCoroutine(MakeUnit());        
    }

    public void UnitProduce(bool isOn)
    {
        
        posibleProduce = isOn;
    } //���� ���� ����,�Ұ����� �����ϴ� �Լ�

    IEnumerator MakeUnit()
    {
        while (Hp > 0)
        {
            yield return new WaitForSeconds(makeCoolTime);
            if (Hp <= 0)
               break; 

            if (!posibleProduce)
               continue;
            

            GameObject Unit = MakeUnitReturn();
            Unit.transform.position = MakePos.position;
            Unit.GetComponent<Character>().Team = Team;
            Unit.GetComponent<Character>().Level = Level;
            yield return new WaitForSeconds(0.01f);
            Unit.SetActive(true);            
        }
    } //������ ����� �Լ�

    public abstract GameObject MakeUnitReturn(); //����ũ ������ ����� ��ŸƮ�� ���� �ٷ� ����ũ ������ �����ϵ��� �Ѵ� ( �߻�Ŭ������ ����°� ���� �Ѵ�.)

    public override void Upgrade() {
        makeCoolTime = prevMakeCoolTime + (Level * levelMakeCoolTime);
        base.Upgrade(); } 
}
