using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ItemShop : MonoBehaviour ,IBuildingSet
{
    public static ItemShop itemShop; 

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
    GameObject Contents; //�Ǹ��ϴ� ������ ���� �ϴ°�

    [SerializeField]
    GameObject item; //�Ǹ� ������

    //������ȭ ��ų ������
    [SerializeField]
    List<GameObject> attackBuildings = new List<GameObject>(); 
    [SerializeField]
    List<GameObject> makeBuildings = new List<GameObject>();

    [SerializeField]
    public GameObject MyBuilding; //�������� �����ϸ� ���� ��ġ (�� ������) 
    [SerializeField]
    public GameObject BuyBlock; //�Ǽ��� ���� Ŭ���� �ּ���� Ŭ���� ���� ������Ʈ
    [SerializeField]
    public GameObject Points; //�ǹ� ��ġ�� ���ϴ� ��

    #region Ŭ���� ������ ���� �ϴ� ������
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

    #endregion

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

    private void Awake() //�Ǹ� �������� Resources�� �߰��ϸ� �ڵ����� �Ǹž����ۿ� �ö������ ����.
    {
        if(itemShop ==null)
            itemShop = this;
        if (itemShop != this)
            Destroy(gameObject);


        attackBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/AttackBuilding"));
        makeBuildings.AddRange(Resources.LoadAll<GameObject>("1.Building/MakeBuilding"));
        item = Resources.Load<GameObject>("Item");
        foreach (GameObject attackBuilding in attackBuildings)
        {
            GameObject instanItem = Instantiate(item, Contents.transform);
            instanItem.GetComponent<Item>().ItemSet(attackBuilding.GetComponent<Building>());
        }
        foreach (GameObject makeBuilding in makeBuildings)
        {
            GameObject instanItem = Instantiate(item, Contents.transform);
            instanItem.GetComponent<Item>().ItemSet(makeBuilding.GetComponent<Building>());
        }

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
            price.text = (building.levelPrice).ToString();
            BuyButton.SetActive(false);
            UpgradeButton.SetActive(true);
        }
        else
        {
            price.text = building.buyPrice.ToString();
            BuyButton.SetActive(true);
            UpgradeButton.SetActive(false);
        }
        Name.text = building.Name;

        #region ������ ������ ���� �ٸ� ����â
        if (building.GetComponent<Castle>())
        {
            CastleSet(building);
        }
        else if (building.GetComponent<MakeBuilding>())
        {
            MakeBuildingSet(building);
        }
        else if (building.GetComponent<AttackBuilding>())
        {
            AttackBuildingSet(building);
        }
        #endregion
    }



    public void CastleSet(Building castle)
    {
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(false);
        CastleMenu.SetActive(true);
        FindObjectOfType<AddInfoCastle>().BuildingSet(castle);
    }

    public void MakeBuildingSet(Building building)
    {
        CastleMenu.SetActive(false);
        AttackBuildingMenu.SetActive(false);
        makeBuildingMenu.SetActive(true);
        FindObjectOfType<AddInfoMakeBuilding>().BuildingSet(building);

    }
    public void AttackBuildingSet(Building building)
    {
        CastleMenu.SetActive(false);
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(true);
        FindObjectOfType<AddInfoAttackBuilding>().BuildingSet(building);
    }

    public void ItemBuy() //������ ���� ��ư
    {
        if (SelectBuilding == null)
            return;

        if (TeamManager.teamManager.TeamCastle(0).MaxbuildingNum <= TeamManager.teamManager.TeamCastle(0).buildings.Count) //���� ���� ������ ������ �����.

        {
            LogManager.logManager.Log("�ǹ��� �ִ� ���� �������� �����Ҽ� �����ϴ�.");
            return;
        }
        Points.SetActive(true);
        BuyBlock.SetActive(true);
    }


    public void ItemSell() //������ �Ǹ� ��ư
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.GetComponent<Castle>()) //���� ���� ���Ѵ�.
            return;



        GameUI.gameUI.MoneySet(SelectBuilding.sellPrice);
        Destroy(SelectBuilding.gameObject);
        
        ShopReset();
        
    }
    public void Upgede() //���׷��̵� ��ư
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.levelPrice > GameUI.gameUI.money)
            return;

        GameUI.gameUI.MoneySet(-SelectBuilding.levelPrice);
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
        Points.SetActive(false);
        BuyBlock.SetActive(false);
    }

}
