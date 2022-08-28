using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;

[System.Serializable]
public class Data
{
    public List<string> buildingName = new List<string>();
    public List<int> buildingLevel = new List<int>();
    public List<Vector3> buildingPos = new List<Vector3>();


    public int gameLevel;
    public int money;
}


public class SaveManager : MonoBehaviour
{
    public static SaveManager saveManager;


    private Data data = new Data();
    private string SAVE_DATA_DIRECTORY;
    private string SAVE_FILENAME = "/SaveFile.txt";

    public List<Building> buildings = new List<Building>();
    private void Awake()
    {
        if (saveManager == null)
            saveManager = this;
        else
            Destroy(gameObject);
    }

    private void Start()
    {
        SAVE_DATA_DIRECTORY = Application.dataPath + "/Saves/";

        if (!Directory.Exists(SAVE_DATA_DIRECTORY))
            Directory.CreateDirectory(SAVE_DATA_DIRECTORY);

    }

    public void SaveMoney()
    {

        data.money = PlayerUI.playerUI.money;
        string json = JsonUtility.ToJson(data,true);
        //File.WriteAllText(SAVE_DATA_DIRECTORY + SAVE_FILENAME, json);
        string path = Path.Combine(Application.persistentDataPath, "data.json");
        File.WriteAllText(path, json);
 
    }

    public void SaveLevel()
    {
        data.gameLevel = LevelManager.levelManager.Nowlevel;
        string json = JsonUtility.ToJson(data);
        //File.WriteAllText(SAVE_DATA_DIRECTORY + SAVE_FILENAME, json);
        string path = Path.Combine(Application.persistentDataPath, "data.json");
        File.WriteAllText(path, json);
    }

    public void SaveBuilding()
    {
        
        data.buildingLevel.Clear();
        data.buildingName.Clear();
        data.buildingPos.Clear();
        buildings.Clear();
        buildings.AddRange(TeamManager.teamManager.TeamCastle(0).buildings);
        for (int i = 0; i < buildings.Count; i++)
        {
            if (buildings[i] != null)
            {
                data.buildingLevel.Add(buildings[i].Level);
                data.buildingName.Add(buildings[i].Name);
                data.buildingPos.Add(buildings[i].transform.position);
            }
        }

        string json = JsonUtility.ToJson(data);
        //File.WriteAllText(SAVE_DATA_DIRECTORY + SAVE_FILENAME, json);
        string path = Path.Combine(Application.persistentDataPath, "data.json");
        File.WriteAllText(path, json);
    }
    
    
    public void LoadData()
    {

        
        if (Path.Combine(Application.persistentDataPath, "data.json") !=null)
        {
            try
            {
                string path = Path.Combine(Application.persistentDataPath, "data.json");
                string loadJson = File.ReadAllText(path);
                data = JsonUtility.FromJson<Data>(loadJson);

                for (int i = 0; i < data.buildingName.Count; i++)
                {
                    LevelManager.levelManager.LoadToBuilding(data.buildingName[i], data.buildingLevel[i], data.buildingPos[i]);
                }
                LevelManager.levelManager.Nowlevel = data.gameLevel;
                PlayerUI.playerUI.money = data.money;
                PlayerUI.playerUI.MoneySet();

                LogManager.logManager.Log("세이브 데이터를 불러 왔습니다.");
            }
            catch
            {

                PlayerUI.playerUI.MoneySet(1000);

                LogManager.logManager.Log("세이브 데이터가 없습니다.");
            }

        }
        else //처음에 주는 아이템은 여기에 넣는다.
        {

            PlayerUI.playerUI.MoneySet(1000);
            
            LogManager.logManager.Log("세이브 데이터가 없습니다.");

        }
        
    }

    

}
