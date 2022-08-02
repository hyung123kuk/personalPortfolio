using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IDamaged
{
    public void Damaged(int Damaged,int team); //데미지를 받는 함수이다.

   

    public int Team { get; set; } //어떤팀인지 알아야 다른팀에게 데미지가 들어간다. 

    public void SetTeamColor(); //팀을 정했으면 색상을 넣어줘야 한다.
}
