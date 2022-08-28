using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LevelSelect : MonoBehaviour
{
    public static LevelSelect levelSelect;

    GameObject levelPrefab;
    [SerializeField]
    Sprite clearImage;
    [SerializeField]
    Sprite NonClearImage;
    [SerializeField]
    List<GameObject> levelBoxList = new List<GameObject>();

    [SerializeField]
    GameObject BuildUICanvas;
    [SerializeField]
    GameObject GameUICanvas;

    private void Awake()
    {
        if (levelSelect == null)
            levelSelect = this;
        else
            Destroy(gameObject);

        levelPrefab = Resources.Load<GameObject>("LevelPrefab");
        for (int i = 0; i < LevelManager.levelManager.Maxlevel; i++)
        {
            GameObject level =  Instantiate(levelPrefab, transform);
            levelBoxList.Add(level);
            if (LevelManager.levelManager.Nowlevel >= i) {
                level.GetComponent<LevelPrefab>().PrefablevelSet(i + 1, clearImage);
            }
            else
            {
                level.GetComponent<LevelPrefab>().PrefablevelSet(i + 1, NonClearImage);
            }
        }
    }

    private void OnEnable()
    {
        LevelBoxListSet();
    }

    public void LevelBoxListSet()
    {
        foreach(GameObject levelbox in levelBoxList)
        {
            
            LevelPrefab levelPrefab = levelbox.GetComponent<LevelPrefab>();

            if (LevelManager.levelManager.Nowlevel >= levelPrefab.level -1 )
            {
                levelPrefab.SpriteSet(clearImage);
            }
            else
            {
                levelPrefab.SpriteSet(NonClearImage);
            }


        }
    }

    public void Backbutton()
    {
        Destroy(FindObjectOfType<Hero>().gameObject);
        GameUICanvas.SetActive(false);
        BuildUICanvas.SetActive(true);
        SoundManager.soundManager.SFXPlay("UIButton");
    }
}
