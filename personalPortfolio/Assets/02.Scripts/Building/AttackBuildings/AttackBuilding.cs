using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class AttackBuilding : Building , IAttack ,IUpgrade
{



    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�



    public abstract void Upgrade();
    public abstract void Attack();//���� �����ؾ��մϴ�.

}
