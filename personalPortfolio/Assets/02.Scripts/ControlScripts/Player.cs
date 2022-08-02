using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour ,IState
{
    private Animator ani;
    private Transform tr;
    private float h = 0f, v = 0f;
    private Rigidbody rbody;
    Character character;

    public IState.State state { get; set; }

    private void Awake()
    {
        ani = GetComponent<Animator>();
        tr = GetComponent<Transform>();
        rbody = GetComponent<Rigidbody>();
        character = GetComponent<Character>();
    }

    public void OnStickChange(Vector2 stickPos)
    {
        h = stickPos.x;
        v = stickPos.y;
    }


    private void FixedUpdate()
    {
        Idle();

    }

    private void Idle()
    {
        if (ani != null && state == IState.State.Idle) //�Ϲ� �����϶��� �����δ�.

        {
            ani.SetFloat("Speed", (h * h) + (v * v));
            if (rbody)
            {
                Vector3 Speed = rbody.velocity;
                Speed.x = character.Speed * h;
                Speed.z = character.Speed * v;
                rbody.velocity = Speed;
                if (h != 0 && v != 0)
                {                  // ���Ͱ��� �̿��ؼ� ȸ���� �ϰ� �ϴ� �Լ�
                    tr.rotation = Quaternion.LookRotation(new Vector3(h, 0f, v));
                    //�ٶ󺸴� ������ ȸ�� �Ѵ�.
                    //Quaternion.LookRotation() �� �Լ��� �����̼� ���� �Լ�����
                    //���� ���� �޾Ƽ� �����̼� ���ִ� �Լ�
                }
            }
        }
    }

    public void AttackTarget()
    {
        ani.SetTrigger("Attack");
    }

    public void Skill1Ani()
    {
        ani.SetTrigger("Skill1");
    }

    public void Skill2Ani()
    {
        ani.SetTrigger("Skill2");
    }

    public void Die()
    {
        state = IState.State.Die;
    }
}
