using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemShop : MonoBehaviour ,IBuildingSet
{
    [SerializeField]
    public Building SelectBuilding;
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

    [SerializeField]
    GameObject BuyButton;
    [SerializeField]
    GameObject UpgradeButton;

    public void BackButton()
    {
        ShopReset();
        Menu.SetActive(true);
        gameObject.SetActive(false);
    }

    private void Awake()
    {
        attackBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/AttackBuilding"));
        makeBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/MakeBuilding"));
    }
    public void BuildingSet() //�������̽� �����
    {    }
    public void BuildingSet(Building building)
    {
        SelectBuilding = building;
        Buildingimage.sprite = building.image;
        level.text = "���� : " + building.Level.ToString() ;
        MaxHp.text = "ü�� : " + building.MaxHp.ToString() + "(+" + building.levelMaxHp + ")" ;
        Defence.text = "��� : " + building.Defense.ToString()+ "(+" + building.levelDefense + ")";
        

        if (building.gameObject.layer == LayerMask.NameToLayer("TEAM1")) //�� �����̸�
        {
            price.text = (building.levelPrice).ToString();
            BuyButton.SetActive(false);
            UpgradeButton.SetActive(true);
        }
        else
        {
            price.text = building.SellPrice.ToString();
            BuyButton.SetActive(true);
            UpgradeButton.SetActive(false);
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

    public void ItemBuy() //������ ���� ��ư
    {
        if (SelectBuilding == null)
            return;


    }


    public void ItemSell() //������ �Ǹ� ��ư
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.GetComponent<Castle>()) //���� ���� ���Ѵ�.
            return;
        

        
        FindObjectOfType<GameUI>().MoneySet(SelectBuilding.SellPrice);
        Destroy(SelectBuilding.gameObject);
        
        ShopReset();
        
    }
    public void Upgede() //���׷��̵� ��ư
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.levelPrice > FindObjectOfType<GameUI>().money)
            return;

        FindObjectOfType<GameUI>().MoneySet(-SelectBuilding.levelPrice);
        SelectBuilding.Level++; //�����ø��� �ڵ����� ���׷��̵� �ȴ�.
        Building selbuild = SelectBuilding;
        ShopReset();
        BuildingSet(selbuild);
    }

    public void ShopReset()
    {
        CastleMenu.SetActive(false);
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(false);
        level.text = "���� : ";
        MaxHp.text = "ü�� : ";
        Defence.text = "��� : ";
        SelectBuilding = null;
        Buildingimage.sprite = null;
        price.text = "";
    }

}
