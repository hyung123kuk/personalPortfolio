using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Archer : Character
{
    [SerializeField]
    Transform Pos;

    public override void Start()
    {
        base.Start();
        ArcherHero.ArcherBuff += SpeedUp;
    }


    public override void AttackTarget(GameObject[] Targets) //오버라이드로 궁수는 새로운 공격 함수 구성
    {
        transform.LookAt(Targets[0].transform); //타겟을 쳐다보고 쏜다.
        GameObject arrowObj = PoolManager.poolManager.GetArrow();
        Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
        arrow.Team = Team;
        arrow.Damaged(AttackDamage);
        arrow.gameObject.SetActive(true);
        arrow.transform.position = Pos.position;
        arrow.TargetSet(Targets[0]);
        
        
        
    }

    public override void Upgrade()
    {
        throw new System.NotImplementedException();
    }

    public override void RangeSet() //원거리 유닛은 범위 세팅이 필요없습니다.
    {
        return;
    }
}
