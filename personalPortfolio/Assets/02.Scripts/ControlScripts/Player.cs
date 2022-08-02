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
        if (ani != null && state == IState.State.Idle) //일반 상태일때만 움직인다.

        {
            ani.SetFloat("Speed", (h * h) + (v * v));
            if (rbody)
            {
                Vector3 Speed = rbody.velocity;
                Speed.x = character.Speed * h;
                Speed.z = character.Speed * v;
                rbody.velocity = Speed;
                if (h != 0 && v != 0)
                {                  // 벡터값을 이용해서 회전을 하게 하는 함수
                    tr.rotation = Quaternion.LookRotation(new Vector3(h, 0f, v));
                    //바라보는 쪽으로 회전 한다.
                    //Quaternion.LookRotation() 이 함수는 로테이션 관련 함수지만
                    //벡터 값을 받아서 로테이션 해주는 함수
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
