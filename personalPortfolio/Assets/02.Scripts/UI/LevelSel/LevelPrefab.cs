using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelPrefab : MonoBehaviour
{
    [SerializeField]
    public int level;
    [SerializeField]
    Image PossibleImage; // ���� �������� ������ �����ִ� �̹���
    [SerializeField]
    Text levelText; //������ �����ִ� UI�ؽ�Ʈ


    public void PrefablevelSet(int _level,Sprite sprite)
    {
        PossibleImage.sprite = sprite;
        level = _level;
        levelText.text = level + " �ܰ�";
        
    }
    public void SpriteSet(Sprite sprite)
    {

        PossibleImage.sprite = sprite;
    }

    public void GameLevelSet()
    {
        if (LevelManager.levelManager.Nowlevel < level-1)
        {
            LogManager.logManager.Log((LevelManager.levelManager.Nowlevel+1).ToString() + "�ܰ踦 ���� Ŭ���� ���ּ���");
            return;
        }

        LevelManager.levelManager.LevelSet(level);
        
    }

}
