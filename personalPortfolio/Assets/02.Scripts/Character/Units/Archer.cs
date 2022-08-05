using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Archer : Character , IUpgrade
{
    [Header("ȭ�쳪������ġ")]
    [SerializeField]
    Transform Pos;

    public override void Start()
    {
        base.Start();
        ArcherHero.ArcherBuff += SpeedUp;
        
    }


    public override void AttackTarget(GameObject[] Targets) //�������̵�� �ü��� ���ο� ���� �Լ� ����
    {
        if (Targets == null)
            return;
        transform.LookAt(Targets[0].transform); //Ÿ���� �Ĵٺ��� ���.
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
        base.Upgrade();
    }

    public override void RangeSet() //���Ÿ� ������ ���� ������ �ʿ�����ϴ�.
    {
        return;
    }
}
