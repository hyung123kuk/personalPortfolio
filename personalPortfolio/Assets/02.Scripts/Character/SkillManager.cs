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
        if (skillManager == null)        //��ų�Ŵ��� �̱���
            skillManager = this;
        else if (skillManager !=this)
            Destroy(gameObject);
        
    }


 


    //��ų��ư�� ������ ����� ���� ��ų ����� �ϵ����Ѵ�
    
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
