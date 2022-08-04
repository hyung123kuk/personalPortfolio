using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MakeBuilding : Building, IMake
{
    [Header("유닛 만드는데 걸리는 시간")]
    [SerializeField]
    private float makeCoolTime;
    public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }

    protected float prevMakeCoolTime;

    [Header("유닛 생성 ON/OFF")]

    public bool posibleProduce=true; //인구수에 따라 생산 불가능,생산 가능이 정해진다.

    protected override void Awake()
    {
        base.Awake();
        prevMakeCoolTime = MakeCoolTime;
        TeamManager.teamManager.TeamCastle(Team).unitProduce += UnitProduce;  //본인 팀의 캐슬의 지시를 받는다.
    }

    protected override void OnEnable()
    {
        base.OnEnable();
        
        StartCoroutine(MakeUnit());        
    }

    public void UnitProduce(bool isOn)
    {
        posibleProduce = isOn;
    } //유닛 생성 가능,불가능을 설정하는 함수

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
    } //유닛을 만드는 함수

    public abstract GameObject MakeUnitReturn(); //메이크 유닛을 만들어 스타트에 놓아 바로 메이크 유닛을 설정하도록 한다 ( 추상클래스로 만드는걸 강제 한다.)

    public override abstract void Upgrade(); //업그레이드는 각자 알아서 하도록 한다.
}
