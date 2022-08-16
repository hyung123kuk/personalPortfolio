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
        item = Resources.Load<GameObject>("ItemBuilding");
        foreach (GameObject attackBuilding in attackBuildings)
        {
            GameObject instanItem = Instantiate(item, Contents.transform);
            instanItem.GetComponent<ItemBuilding>().ItemSet(attackBuilding.GetComponent<Building>());
        }
        foreach (GameObject makeBuilding in makeBuildings)
        {
            GameObject instanItem = Instantiate(item, Contents.transform);
            instanItem.GetComponent<ItemBuilding>().ItemSet(makeBuilding.GetComponent<Building>());
        }

    }

    public void BuildingSet(Building building)
    {
        SelectBuilding = building;
        Buildingimage.sprite = building.image;
        level.text = "���� : " + building.Level.ToString() ;
        

        if(building.Level >= building.MaxLevel) //�ִ� �����϶��� �߰� ǥ�� ����.
        {
            MaxHp.text = "ü�� : " + building.MaxHp.ToString();
            Defence.text = "��� : " + building.Defense.ToString();
        }
        else
        {
            MaxHp.text = "ü�� : " + building.MaxHp.ToString() + "(+" + building.levelMaxHp + ")";
            Defence.text = "��� : " + building.Defense.ToString() + "(+" + building.levelDefense + ")";
        }



        if (building.gameObject.layer == LayerMask.NameToLayer("TEAM1")) //�� �����̸�
        {
            if (building.Level >= building.MaxLevel) //�ִ� �����϶��� ���� ǥ�� ����.
            {
                price.text = "MaxLv";
            }
            else
            {
                price.text = (building.levelPrice).ToString();
            }
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

        if (PlayerUI.playerUI.money < SelectBuilding.buyPrice)
        {
            LogManager.logManager.Log("���� �����մϴ�.");
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
        {
            LogManager.logManager.Log("���� �ȼ� �����ϴ�.");
            return;
        }


        PlayerUI.playerUI.MoneySet(SelectBuilding.sellPrice);
        Destroy(SelectBuilding.gameObject);
        
        ShopReset();
        SaveManager.saveManager.SaveBuilding(); //������ �ȶ� ����
    }
    public void Upgede() //���׷��̵� ��ư
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.levelPrice > PlayerUI.playerUI.money)
        {
            LogManager.logManager.Log("���� �����մϴ�.");
            return;
        }
        if(SelectBuilding.Level >= SelectBuilding.MaxLevel)
        {
            LogManager.logManager.Log("�ǹ��� �̹� �ִ� �����Դϴ�.");
            return;
        }

        PlayerUI.playerUI.MoneySet(-SelectBuilding.levelPrice);
        SelectBuilding.Level++; //�����ø��� �ڵ����� ���׷��̵� �ȴ�.
        Building selbuild = SelectBuilding;
        ShopReset();
        BuildingSet(selbuild);
        SaveManager.saveManager.SaveBuilding(); // ���׷��̵� ������ ����
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
