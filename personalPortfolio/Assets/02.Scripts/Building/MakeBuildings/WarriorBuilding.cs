using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WarriorBuilding : MakeBuilding
{
    public override GameObject MakeUnitReturn()
    {
        return PoolManager.poolManager.GetWarrior();
    }

    public override void Upgrade() { }


}
