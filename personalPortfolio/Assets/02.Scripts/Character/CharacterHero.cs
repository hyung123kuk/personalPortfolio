using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CharacterHero : Character, IUpgrade //�����ĳ���ʹ� ��ų�� ������ �ֽ��ϴ�, ��ų�������� �ֽ��ϴ�. ���׷��̵� �Ҽ� �ֽ��ϴ�.

{
    private int Skill1Damage;

    private int Skill2Damage;



    #region ���׷��̵� �Խ�
    public void DamageUpgrade(int UpDamage) //����������
    { AttackDamage += UpDamage; }

    public void SheildUpgrade(int UpShield) //���¾���
    { Defense += UpShield; }

    public void HpUpgrade(int UpHp) //ü�¾���
    { MaxHp += UpHp; }
    #endregion


    public virtual void Skill1(IDamaged[] Targets)
    {

        foreach(IDamaged target in Targets)
        {
            target.Damaged(Skill1Damage);
        }
    }
    public virtual void Skill2(IDamaged[] Targets) {

        foreach (IDamaged target in Targets)
        {
            target.Damaged(Skill2Damage);
        }
    } 
}
