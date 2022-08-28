using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpereManBuilding : MakeBuilding
{
    public override GameObject MakeUnitReturn()
    {
       return PoolManager.poolManager.GetCharacter("Spearman");
    }
}
