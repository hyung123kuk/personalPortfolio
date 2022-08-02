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
        if (skillManager == null)        //��ų�Ŵ��� �̱���
            skillManager = this;
        else if (skillManager !=this)
            Destroy(gameObject);
        
    }

    //����,��ų��ư�� ������ ����ΰ� ����,��ų�� ����ϵ��� �Ѵ�.

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
            hero.SendMessage("Skill1Ani"); // Player��ũ��Ʈ���� �߻��Ѵ�.
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
