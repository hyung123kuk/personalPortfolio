using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMelee
{
    public int UnitTargetRange { get; set; }
    public int BuildingTargetRange { get; set; }

    public abstract void RangeSet(); //근거리 유닛은 건물공격시 공격범위를 늘려줘야 한다.

}
