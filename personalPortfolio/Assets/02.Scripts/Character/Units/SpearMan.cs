using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpearMan : Character, IMelee
{
    [SerializeField]
    private int buildingTargetRange = 6;
    public int UnitTargetRange { get; set; }
    public int BuildingTargetRange { get { return buildingTargetRange; }set { buildingTargetRange = value; } }

    public override void Awake()
    {
        UnitTargetRange = AttackRange;
        base.Awake();
    }

    public override void AttackTarget(GameObject[] Targets)
    {
        if (Targets == null)
            return;
        SoundManager.soundManager.SFXPlay("Warrior");
        transform.LookAt(Targets[0].transform);
        if (AttackRangeFucn(Targets[0].transform))
        {
            Targets[0].SendMessage("Damaged", AttackDamage);
        }
    }

    public override void RangeSet()
    {

        if (GetComponent<AI>().target.GetComponent<Building>())
        {
            AttackRange = buildingTargetRange;
        }
        else
        {
            AttackRange = UnitTargetRange;
        }
    }
}
