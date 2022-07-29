using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AttackBuilding : Building, IRecover, IUpgrade //���׷��̵尡 ������ ���� �ǹ��̴�.
{

    [SerializeField]
    private int attackDamage;
    public int AttackDamage { get { return attackDamage; } set { attackDamage = value; } } //���ݷ�

    #region ���׷��̵� �Լ�
    public void DamageUpgrade(int UpDamage) //����������
    { attackDamage += UpDamage; }

    public void SheildUpgrade(int UpShield) //���¾���
    { Defense += UpShield; }

    public void HpUpgrade(int UpHp) //ü�¾���
    { MaxHp += UpHp; }
    #endregion


    public void Recover(int recoverHp) //ü��ȸ��
    { Hp += recoverHp; }

    

}
