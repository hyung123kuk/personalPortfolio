using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBuildings : MonoBehaviour
{
    [SerializeField]
    List<Building> buildings = new List<Building>();

    private void OnEnable()
    {
        buildings.Clear();
        buildings.AddRange(transform.GetComponentsInChildren<Building>());
        List<Transform> buildingsTr = new List<Transform>();
        foreach (Building building in buildings) {
            buildingsTr.Add(building.GetComponent<Transform>());
        }
       
        EnemyBuildingPointsManager.enemyPointsManager.EnemyBuildingSet(buildingsTr);
    }


}
