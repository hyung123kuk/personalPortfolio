using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackBuilding : Building , IAttack
{



    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�



    public override void Upgrade()
    {

    }



}
