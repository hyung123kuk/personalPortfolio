using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class MakeBuilding : Building, IMake , IUpgrade
{
    
    [SerializeField]
    private float makeCoolTime;
    public float MakeCoolTime { get {return makeCoolTime; } set { makeCoolTime = value; } }



    protected override void OnEnable()
    {
        base.OnEnable();
        StartCoroutine(MakeUnit());        
    }

    IEnumerator MakeUnit()
    {


        while (Hp > 0)
        {
            yield return new WaitForSeconds(makeCoolTime);
            if (Hp <= 0)
               break;

            GameObject Unit = MakeUnitReturn();
            Unit.transform.position = transform.position + transform.forward * 5f;
            Unit.GetComponent<Character>().Team = Team;
            yield return new WaitForSeconds(0.01f);
            Unit.SetActive(true);
            
        }
    }

    public abstract GameObject MakeUnitReturn(); //메이크 유닛을 만들어 스타트에 놓아 바로 메이크 유닛을 설정하도록 한다.



    public abstract void Upgrade(); //업그레이드는 각자 알아서 하도록 한다.
}
