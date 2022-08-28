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
        try
        {
            for (int i = 0; i < 10; i++)
            {
                transform.GetChild(i).gameObject.SetActive(true);
            }
        }
        catch
        {
            Debug.Log("여기서 트라이캐치씀"); //GetChild는 개수가 초과하면 NULL로도 확인이 불가능하여 에러가 뜨는걸 그냥 무시해버림.
        }

        buildings.AddRange(transform.GetComponentsInChildren<Building>());
        List<Transform> buildingsTr = new List<Transform>();
        foreach (Building building in buildings) {
            buildingsTr.Add(building.GetComponent<Transform>());
            int lev = int.Parse(transform.name) / 4 + Random.Range(-2, 2);
            lev = Mathf.Clamp(lev, 0, building.MaxLevel);
            building.Level = lev;
            
        }
       
        EnemyBuildingPointsManager.enemyPointsManager.EnemyBuildingSet(buildingsTr);
    }


}
