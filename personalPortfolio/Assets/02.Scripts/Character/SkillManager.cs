using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillManager : MonoBehaviour
{

    public static SkillManager skillManager;
    

    public delegate void Buff(float xSpeed,int _team);
 


    public List<Character> heros = new List<Character>();
    public List<Character> Units = new List<Character>();

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
        foreach (Character hero in heros)
        {
            hero.AttackTarget(null);
            hero.GetComponent<Player>().AttackTarget();
        }
    }



    public void Skill1()
    {
        foreach(Character hero in heros)
        {
            hero.SendMessage("Skill1Ani"); // Player스크립트에서 발생한다.
        }
    }

    public void Skill2()
    {
        foreach (Character hero in heros)
        {
            hero.SendMessage("Skill2Ani");
        }
    }





}
