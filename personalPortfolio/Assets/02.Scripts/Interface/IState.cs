using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IState  //상태에 따라 다른 행동 (AI 와 Player 에서 동시에 받기위해 사용함)
{
    public enum State { Idle,Attack,Die} //상태를 나타낼 enum값
    public State state { get; set; } //현재 상태
    public void Die(); //죽었을때 실행될 함수
    


}
