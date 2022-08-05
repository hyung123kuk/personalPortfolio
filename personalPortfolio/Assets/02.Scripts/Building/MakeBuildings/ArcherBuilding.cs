using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherBuilding : MakeBuilding , IUpgrade
{
    public override GameObject MakeUnitReturn()
    {
        return PoolManager.poolManager.GetArcher();
    }



    public override void Upgrade()
    {
        base.Upgrade();
    }


}
