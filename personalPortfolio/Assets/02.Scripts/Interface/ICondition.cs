using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ICondition  //����ϱ� ���� ������ ������ �����ϴ� �������̽�
{
    public bool IsCondition { get; set; } //���� ����

    public void ConditionSet(); //���� ���� �Լ�
}
