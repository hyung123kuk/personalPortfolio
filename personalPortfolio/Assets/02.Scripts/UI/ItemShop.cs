using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemShop : MonoBehaviour
{
    [SerializeField]
    Building SelectBuilding;
    [SerializeField]
    GameObject Menu;
    [SerializeField]
    GameObject CastleMenu;
    [SerializeField]
    GameObject makeBuildingMenu;
    [SerializeField]
    GameObject AttackBuildingMenu;



    [SerializeField]
    List<GameObject> attackBuildings = new List<GameObject>();
    [SerializeField]
    List<GameObject> makeBuildings = new List<GameObject>();

    [SerializeField]
    Image Buildingimage;
    [SerializeField]
    Text level;
    [SerializeField]
    Text MaxHp;
    [SerializeField]
    Text Defence;
    

    [SerializeField]
    Text price;
    [SerializeField]
    Text Name;

    public void BackButton()
    {
        Menu.SetActive(true);
        gameObject.SetActive(false);
    }

    private void Awake()
    {
        attackBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/AttackBuilding"));
        makeBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/MakeBuilding"));
    }

    public void BuildingSet(Building building)
    {
        SelectBuilding = building;
        Buildingimage.sprite = building.image;
        level.text = "���� : " + building.Level.ToString() ;
        MaxHp.text = "ü�� : " + building.MaxHp.ToString() + "(+" + building.levelMaxHp + ")" ;
        Defence.text = "��� : " + building.Defense.ToString()+ "(+" + building.levelDefense + ")";
        

        if (building.gameObject.layer == LayerMask.NameToLayer("TEAM1")) //�� �����̸�
        {
            price.text = (building.levelPrice * (building.Level + 1)).ToString();
        }
        else
        {
            price.text = building.SellPrice.ToString();
        }
        Name.text = building.Name;

        #region ������ ������ ���� �ٸ� ����â
        if (building.GetComponent<Castle>())
        {
            CastleSet(building.GetComponent<Castle>());
        }
        else if (building.GetComponent<MakeBuilding>())
        {
            MakeBuildingSet(building.GetComponent<MakeBuilding>());
        }
        else if (building.GetComponent<AttackBuilding>())
        {
            AttackBuildingSet(building.GetComponent<AttackBuilding>());
        }
        #endregion


    }

    public void CastleSet(Castle castle)
    {
        CastleMenu.SetActive(true);
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(false);
    }

    public void MakeBuildingSet(MakeBuilding building)
    {
        CastleMenu.SetActive(false);
        makeBuildingMenu.SetActive(true);
        AttackBuildingMenu.SetActive(false);
    }
    public void AttackBuildingSet(AttackBuilding building)
    {
        CastleMenu.SetActive(false);
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(true);
    }



}
