using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Archer : Character
{
    [SerializeField]
    Transform Pos;
    

    public override void AttackTarget(GameObject[] Targets) //�������̵�� �ü��� ���ο� ���� �Լ� ����
    {
        transform.LookAt(Targets[0].transform); //Ÿ���� �Ĵٺ��� ���.
        GameObject arrowObj = PoolManager.poolManager.GetArrow();
        Arrow arrow = arrowObj.GetComponent<Arrow>();
        arrow.Team = Team;
        arrow.Damaged(AttackDamage);
        arrow.transform.position = Pos.position;
        
        
    }
}
