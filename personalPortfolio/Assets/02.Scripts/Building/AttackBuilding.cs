using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackBuilding : Building, IRecover, IUpgrade //업그레이드가 가능한 공격 건물이다.
{

    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //공격력

    #region 업그레이드 함수
    public void DamageUpgrade(int UpDamage) //데미지업글
    { attackDamage += UpDamage; }

    public void SheildUpgrade(int UpShield) //방어력업글
    { Defense += UpShield; }

    public void HpUpgrade(int UpHp) //체력업글
    { MaxHp += UpHp; }
    #endregion


    public void Recover(int recoverHp) //체력회복
    { Hp += recoverHp; }

    

}
