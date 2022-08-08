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
        if (skillManager == null)        //스킬매니저 싱글톤
            skillManager = this;
        else if (skillManager !=this)
            Destroy(gameObject);
        
    }

    //공격,스킬버튼을 누르면 히어로가 공격,스킬을 사용하도록 한다.

    public void AttackTarget()
    {

            hero.AttackTarget(null);
            hero.GetComponent<Player>().AttackTarget();

    }



    public void Skill1()
    {
        if (hero.GetComponent<Hero>().isSkill1Cool)
        {
            LogManager.logManager.Log("스킬 쿨타임입니다.");
            return;
        }
        hero.GetComponent<Player>().Skill1Ani();

    }

    public void Skill2()
    {
        if (hero.GetComponent<Hero>().isSkill2Cool)
        {
            LogManager.logManager.Log("스킬 쿨타임입니다.");
            return;
        }
        hero.GetComponent<Player>().Skill2Ani();

    }




}
