using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IState  //���¿� ���� �ٸ� �ൿ (AI �� Player ���� ���ÿ� �ޱ����� �����)
{
    public enum State { Idle,Attack,Die} //���¸� ��Ÿ�� enum��
    public State state { get; set; } //���� ����
    public void Die(); //�׾����� ����� �Լ�
    


}
