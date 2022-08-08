using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSelect : MonoBehaviour
{

    GameObject levelPrefab;
    [SerializeField]
    Sprite clearImage;
    [SerializeField]
    Sprite NonClearImage;
    

    private void Awake()
    {
        levelPrefab = Resources.Load<GameObject>("LevelPrefab");
        for (int i = 0; i < LevelManager.levelManager.Maxlevel; i++)
        {
            GameObject level =  Instantiate(levelPrefab, transform);
            if (LevelManager.levelManager.Nowlevel <= i+1) {
                level.GetComponent<LevelPrefab>().PrefablevelSet(i + 1, clearImage);
            }
            else
            {
                level.GetComponent<LevelPrefab>().PrefablevelSet(i + 1, NonClearImage);
            }
        }
    }


    void Start()
    {
        
    }


    void Update()
    {
        
    }
}
