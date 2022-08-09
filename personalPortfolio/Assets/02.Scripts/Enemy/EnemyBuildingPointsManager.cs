using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyBuildingPointsManager : MonoBehaviour
{
    public static EnemyBuildingPointsManager enemyPointsManager;
    [SerializeField]
    List<Transform> points = new List<Transform>();

    private void Awake()
    {
        if (enemyPointsManager == null)
        {
            enemyPointsManager = this;
        }
        else if (enemyPointsManager != this)
        {
            Destroy(gameObject);
        }
        points.AddRange(transform.GetComponentsInChildren<Transform>());
        points.RemoveAt(0);

    }

    public void EnemyBuildingSet(List<Transform> buildings) //빌딩을 랜덤하게 건설하는 함수
    {
        List<int> indexes = new List<int>();
        for (int i = 0; i < points.Count; i++)
        {
            indexes.Add(i);
        }        
        foreach (Transform building in buildings)
        {            
            int index = Random.Range(0, indexes.Count);
            building.position = points[indexes[index]].position;
            indexes.RemoveAt(index);
        }
    }

}
