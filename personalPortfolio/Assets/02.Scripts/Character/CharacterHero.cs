using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CharacterHero : Character, IUpgrade //히어로캐릭터는 스킬을 가지고 있습니다, 스킬데미지가 있습니다. 업그레이드 할수 있습니다.

{
    private int Skill1Damage;

    private int Skill2Damage;



    #region 업그레이드 함슈
    public void DamageUpgrade(int UpDamage) //데미지업글
    { AttackDamage += UpDamage; }

    public void SheildUpgrade(int UpShield) //방어력업글
    { Defense += UpShield; }

    public void HpUpgrade(int UpHp) //체력업글
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
