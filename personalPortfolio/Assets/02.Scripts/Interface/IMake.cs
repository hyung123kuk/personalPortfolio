using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMake  //���������� ��ų�߿� Make�� �ϴ� ��ų�� ������ ����ũ �ǹ��� �ֱ⶧���� �������.
{
  
    public GameObject MakeUnit { get; set; } //��������
    public void makeUnit(); //����� �Լ�
}
