using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeamManager : MonoBehaviour //������,������� �����ϴ� Ŭ�����Դϴ�.
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


    //������ ĳ���� �����ִ� �Լ�
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
    //���� ĳ���͸� �����ִ� �Լ�
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

    //������ ĳ���͸� �����ִ� �Լ�
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

    //���� �ǹ��� �����ִ� �Լ�
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

    //������ �ǹ��� �����ִ� �Լ�
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

    //�Ʊ� ĳ���� ���� �߰��ϴ� �Լ�
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

    //�Ʊ� ĳ���� �ǹ� �߰��ϴ� �Լ�
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

    //�Ʊ� ĳ���� ���� �����ϴ� �Լ�
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

    //�Ʊ� ĳ���� �ǹ� �����ϴ� �Լ�
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
