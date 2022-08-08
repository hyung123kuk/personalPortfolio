using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WarriorBuilding : MakeBuilding , IUpgrade
{
    public override GameObject MakeUnitReturn()
    {
        return PoolManager.poolManager.GetCharacter("Warrior");
    }

    public override void Upgrade() {

        base.Upgrade();
        
    }


}
