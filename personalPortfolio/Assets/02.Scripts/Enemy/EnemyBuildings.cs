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
            Debug.Log("���⼭ Ʈ����ĳġ��"); //GetChild�� ������ �ʰ��ϸ� NULL�ε� Ȯ���� �Ұ����Ͽ� ������ �ߴ°� �׳� �����ع���.
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
