using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Warrior : Character, IMelee, IUpgrade
{
    [Header("빌딩공격시 사거리")]
    [SerializeField]
    private int buidingTargetRange = 6;

    public int UnitTargetRange { get; set; }

    public int BuildingTargetRange { get { return buidingTargetRange; } set { buidingTargetRange = value; } }


    public override void Awake()
    {
        UnitTargetRange = AttackRange;
        base.Awake();
    }

    public override void Start()
    {
        base.Start(); 
    }
    protected override void OnEnable()
    {
        WarriorHero.WarriorBuff += SpeedUp;
        base.OnEnable();
    }

    protected override void OnDisable()
    {
        WarriorHero.WarriorBuff -= SpeedUp;
        base.OnDisable();
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

    public override void Upgrade()
    {
        base.Upgrade();
    }

    public override void RangeSet()
    {
        
        if (GetComponent<AI>().target.GetComponent<Building>())
        {
            AttackRange = buidingTargetRange;
        }
        else
        {
            AttackRange = UnitTargetRange;
        }
    }
}
