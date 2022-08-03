using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ArcherBuilding : MakeBuilding
{
    public override GameObject MakeUnitReturn()
    {
        return PoolManager.poolManager.GetArcher();
    }



    public override void Upgrade()
    {
        throw new System.NotImplementedException();
    }


}
