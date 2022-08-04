using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeamManager : MonoBehaviour //같은팀,상대팀을 관리하는 클래스입니다.
{

    public List<Castle> Castles = new List<Castle>();
    public static TeamManager teamManager;

    public delegate void UnitProduce(bool isOn);

    private void Awake()
    {
        

        if (teamManager == null)
            teamManager = this;
        if (teamManager != this)
            Destroy(gameObject);
    }


    //같은팀 캐슬을 보내주는 함수
    public Castle TeamCastle(int _team)
    {
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                return castle;
            }
        }
        return null;
    }
    //적팀 캐릭터를 보내주는 함수
    public List<Character> enemyTeamCharacter(int _team)
    {
        List<Character> EnemyCharacterPool = new List<Character>();
        foreach (Castle castle in Castles)
        {
            if (castle.Team != _team)
            {
                EnemyCharacterPool.AddRange(castle.units);
            }
        }
        return EnemyCharacterPool;
        
    }

    //같은팀 캐릭터를 보내주는 함수
    public List<Character> MyTeamCharacter(int _team)
    {
        List<Character> MyCharacterPool = new List<Character>();
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                MyCharacterPool.AddRange(castle.units);
            }
        }
        return MyCharacterPool;
    }

    //적팀 건물을 보내주는 함수
    public List<Building> enemyTeamBuilding(int _team)
    {
        List<Building> MyCharacterPool = new List<Building>();
        foreach (Castle castle in Castles)
        {
            if (castle.Team != _team)
            {
                MyCharacterPool.AddRange(castle.buildings);
            }
        }
        return MyCharacterPool;

    }

    //같은팀 건물을 보내주는 함수
    public List<Building> MyTeamBuilding(int _team)
    {
        List<Building> MyCharacterPool = new List<Building>();
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                MyCharacterPool.AddRange(castle.buildings);
            }
        }
        return MyCharacterPool;

    }

    //아군 캐슬에 유닛 추가하는 함수
    public void AddUnit(int _team, Character ch)
    {
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                castle.units.Add(ch);
            }
        }
    }

    //아군 캐슬에 건물 추가하는 함수
    public void AddBuilding(int _team, Building build)
    {
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                castle.buildings.Add(build);
            }
        }
    }

    //아군 캐슬에 유닛 삭제하는 함수
    public void RemoveUnit(int _team,Character ch)
    {
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                castle.units.Remove(ch);
            }
        }
    }

    //아군 캐슬레 건물 삭제하는 함수
    public void RemoveBuilding(int _team, Building build)
    {
        foreach (Castle castle in Castles)
        {
            if (castle.Team == _team)
            {
                castle.buildings.Remove(build);
            }
        }
    }
}
