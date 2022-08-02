using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMake  //만든이유는 스킬중에 Make를 하는 스킬과 빌딩에 메이크 건물이 있기때문에 만들었다.
{
  
    public GameObject MakeUnit { get; set; } //만들유닛
    public void makeUnit(); //만드는 함수
}
