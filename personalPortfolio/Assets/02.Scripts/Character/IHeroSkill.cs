using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IHeroSkill
{
    public void Skill1();
    public float Skill1CoolTime { get; set; }
    public void Skill2();
    public float Skill2CoolTime { get; set; }

}
