using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SkillManager : MonoBehaviour
{

    public static SkillManager skillManager;

    public delegate void Buff(float xSpeed,int _team);


    public List<Character> heros = new List<Character>();

    public void Awake()
    {
        if (skillManager == null)        //스킬매니저 싱글톤
            skillManager = this;
        else if (skillManager !=this)
            Destroy(gameObject);
        
    }


 


    //스킬버튼을 누르면 히어로 에게 스킬 사용을 하도록한다
    
    public void Skill1()
    {
        foreach(Character hero in heros)
        {
            hero.SendMessage("Skill1");
        }
    }

    public void Skill2()
    {
        foreach (Character hero in heros)
        {
            hero.SendMessage("Skill2");
        }
    }


}
