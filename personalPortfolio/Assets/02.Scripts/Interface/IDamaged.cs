using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamaged
{
    public void Damaged(int Damaged,int team); //�������� �޴� �Լ��̴�.

   

    public int Team { get; set; } //������� �˾ƾ� �ٸ������� �������� ����. 

    public void SetTeamColor(); //���� �������� ������ �־���� �Ѵ�.
}
