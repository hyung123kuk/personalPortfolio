using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUpgrade 
{
    public int Level { get; set; }// ���׷��̵� �Ϸ��� ������ �־���Ѵ�.
    public abstract void Upgrade();


}
