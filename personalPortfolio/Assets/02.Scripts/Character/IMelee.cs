using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IMelee
{
    public int UnitTargetRange { get; set; }
    public int BuildingTargetRange { get; set; }

    public abstract void RangeSet(); //�ٰŸ� ������ �ǹ����ݽ� ���ݹ����� �÷���� �Ѵ�.

}
