using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MakeBuilding : Building, IMake
{
    [Header("���� ����µ� �ɸ��� �ð�")]
    [SerializeField]
    private float makeCoolTime;
    public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }

    protected float prevMakeCoolTime;

    [Header("���� ���� ON/OFF")]

    public bool posibleProduce=true; //�α����� ���� ���� �Ұ���,���� ������ ��������.

    protected override void Awake()
    {
        base.Awake();
        prevMakeCoolTime = MakeCoolTime;
        TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //���� ���� ĳ���� ���ø� �޴´�.
    }

    protected override void OnEnable()
    {
        base.OnEnable();
        
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
            Unit.transform.position = transform.position + transform.forward * 5f;
            Unit.GetComponent<Character>().Team = Team;
            Unit.GetComponent<Character>().Level = Level;
            yield return new WaitForSeconds(0.01f);
            Unit.SetActive(true);            
        }
    } //������ ����� �Լ�

    public abstract GameObject MakeUnitReturn(); //����ũ ������ ����� ��ŸƮ�� ���� �ٷ� ����ũ ������ �����ϵ��� �Ѵ� ( �߻�Ŭ������ ����°� ���� �Ѵ�.)

    public override abstract void Upgrade(); //���׷��̵�� ���� �˾Ƽ� �ϵ��� �Ѵ�.
}
