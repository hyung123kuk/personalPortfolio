using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUpgrade 
{
    public int Level { get; set; }// 업그레이드 하려면 레벨이 있어야한다.
    public int MaxLevel { get; set; }
    public abstract void Upgrade();

}
