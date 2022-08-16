using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelPrefab : MonoBehaviour
{
    [SerializeField]
    public int level;
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
    public void SpriteSet(Sprite sprite)
    {

        PossibleImage.sprite = sprite;
    }

    public void GameLevelSet()
    {
        if (LevelManager.levelManager.Nowlevel < level-1)
        {
            LogManager.logManager.Log((LevelManager.levelManager.Nowlevel+1).ToString() + "단계를 먼저 클리어 해주세요");
            return;
        }

        LevelManager.levelManager.LevelSet(level);
        
    }

}
