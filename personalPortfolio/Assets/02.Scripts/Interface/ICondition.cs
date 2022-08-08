using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ICondition  //사용하기 위한 조건이 있을때 선언하는 인터페이스
{
    public bool IsCondition { get; set; } //조건 충족

    public void ConditionSet(); //조건 구현 함수
}
