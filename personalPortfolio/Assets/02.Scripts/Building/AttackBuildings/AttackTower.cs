using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackTower : AttackBuilding
{
    public Transform Pos;
    public GameObject Target;
    public override void Attack()
    {
        if (Target == null || Target.GetComponent<Character>().Hp<=0)
        {
            Target = NearlyTargetSet();
        }
        if (Target != null)
        {
            if (AttackRangeFucn(Target.transform, Range: AttackRange))
            {

                GameObject arrowObj = PoolManager.poolManager.GetArrow();
                Arrow arrow = arrowObj.GetComponentInChildren<Arrow>();
                arrow.Team = Team;
                arrow.Damaged(AttackDamage);
                arrow.gameObject.SetActive(true);
                arrow.transform.position = Pos.position;
                arrow.TargetSet(Target);

            }
        }
    }




    public override void Upgrade()
    {
        throw new System.NotImplementedException();
    }


}
