using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUpgrade 
{
    public int Level { get; set; }// ���׷��̵� �Ϸ��� ������ �־���Ѵ�.
    public int MaxLevel { get; set; }
    public abstract void Upgrade();

}
