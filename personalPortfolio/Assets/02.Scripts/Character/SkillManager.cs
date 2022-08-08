using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillManager : MonoBehaviour
{

    public static SkillManager skillManager;
    

    public delegate void Buff(float xSpeed,int _team, float Duration);



    public Hero hero;




    public void Awake()
    {
        if (skillManager == null)        //��ų�Ŵ��� �̱���
            skillManager = this;
        else if (skillManager !=this)
            Destroy(gameObject);
        
    }

    //����,��ų��ư�� ������ ����ΰ� ����,��ų�� ����ϵ��� �Ѵ�.

    public void AttackTarget()
    {

            hero.AttackTarget(null);
            hero.GetComponent<Player>().AttackTarget();

    }



    public void Skill1()
    {
        if (hero.GetComponent<Hero>().isSkill1Cool)
        {
            LogManager.logManager.Log("��ų ��Ÿ���Դϴ�.");
            return;
        }
        hero.GetComponent<Player>().Skill1Ani();

    }

    public void Skill2()
    {
        if (hero.GetComponent<Hero>().isSkill2Cool)
        {
            LogManager.logManager.Log("��ų ��Ÿ���Դϴ�.");
            return;
        }
        hero.GetComponent<Player>().Skill2Ani();

    }




}
