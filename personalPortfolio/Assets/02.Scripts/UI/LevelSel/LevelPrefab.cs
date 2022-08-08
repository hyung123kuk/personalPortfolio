using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelPrefab : MonoBehaviour
{
    [SerializeField]
    int level;
    [SerializeField]
    Image PossibleImage; // 진행 가능한지 안한지 보여주는 이미지
    [SerializeField]
    Text levelText; //레벨을 보여주는 UI텍스트


    public void PrefablevelSet(int _level,Sprite sprite)
    {
        PossibleImage.sprite = sprite;
        level = _level;
        levelText.text = level + " 단계";

    }

    public void GameLevelSet()
    {
        LevelManager.levelManager.LevelSet(level);
    }

}
