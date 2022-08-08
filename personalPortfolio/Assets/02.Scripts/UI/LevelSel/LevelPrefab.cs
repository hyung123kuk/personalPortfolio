using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelPrefab : MonoBehaviour
{
    [SerializeField]
    int level;
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

    public void GameLevelSet()
    {
        LevelManager.levelManager.LevelSet(level);
    }

}
