using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MakeBuilding : Building, IMake
{
    [Header("생성 유닛")]
    public GameObject makeUnit;

    [Header("유닛 만드는데 걸리는 시간")]
    [SerializeField]
    private float makeCoolTime;
    public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }

    protected float prevMakeCoolTime;
    public float levelMakeCoolTime;

    [Header("유닛 생성 ON/OFF")]

    public bool posibleProduce=true; //인구수에 따라 생산 불가능,생산 가능이 정해진다.

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
        TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //본인 팀의 캐슬의 지시를 받는다.

    }
    IEnumerator MakeUnit()
    {
        yield return new WaitForSeconds(TeamManager.teamManager.TeamCastle(Team).buildings.IndexOf(this) * 0.2f + Team*2 + Level * 0.02f); //동시에 생성을하면 이상하게 하나만 나온다 따라서 조금씩 생성속도 차이를 둬서 생성하게 한다.

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
    } //유닛을 만드는 함수



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

    } //유닛 생성 가능,불가능을 설정하는 함수



    public abstract GameObject MakeUnitReturn(); //메이크 유닛을 만들어 스타트에 놓아 바로 메이크 유닛을 설정하도록 한다 ( 추상클래스로 만드는걸 강제 한다.)

    public override void Upgrade() {
       
        makeCoolTime = prevMakeCoolTime + (Level * levelMakeCoolTime);



        base.Upgrade(); } 
}
