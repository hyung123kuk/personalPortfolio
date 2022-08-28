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
        prevMakeCoolTime = MakeCoolTime;
        base.Awake();        
        MakePos = transform.GetChild(0);


    }

    protected override void OnEnable()
    {
        
        base.OnEnable();
        TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //���� ���� ĳ���� ���ø� �޴´�.

    }
    IEnumerator MakeUnit()
    {
        yield return new WaitForSeconds(TeamManager.teamManager.TeamCastle(Team).buildings.IndexOf(this) * 0.2f + Team*2 + Level * 0.02f); //���ÿ� �������ϸ� �̻��ϰ� �ϳ��� ���´� ���� ���ݾ� �����ӵ� ���̸� �ּ� �����ϰ� �Ѵ�.

        while (Hp > 0)
        {


            yield return new WaitForSeconds(makeCoolTime);
            if (Hp <= 0)
                break;
            if (!posibleProduce)
            {
                continue;
            }


            SoundManager.soundManager.SFXPlay("UnitMake");
            GameObject Unit = MakeUnitReturn();
            Unit.transform.position = MakePos.position;
            Unit.GetComponent<Character>().Team = Team;
            Unit.GetComponent<Character>().Level = Level;
            yield return new WaitForSeconds(0.01f);
            Unit.SetActive(true);
        }
    } //������ ����� �Լ�



    protected override void OnDisable()
    {
        StopCoroutine("MakeUnit");
        TeamManager.teamManager.TeamCastle(Team).unitProduce -= UnitProduce;
        base.OnDisable();
    }

    public void UnitProduce(bool isOn)
    {
        
        posibleProduce = isOn;
        if (isOn == true)
        {
            StartCoroutine("MakeUnit");
        }
        else
        {
            StopCoroutine("MakeUnit");
        }

    } //���� ���� ����,�Ұ����� �����ϴ� �Լ�



    public abstract GameObject MakeUnitReturn(); //����ũ ������ ����� ��ŸƮ�� ���� �ٷ� ����ũ ������ �����ϵ��� �Ѵ� ( �߻�Ŭ������ ����°� ���� �Ѵ�.)

    public override void Upgrade() {
       
        makeCoolTime = prevMakeCoolTime + (Level * levelMakeCoolTime);



        base.Upgrade(); } 
}
