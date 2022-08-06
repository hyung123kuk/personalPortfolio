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
    GameObject Contents; //판매하는 아이템 정렬 하는곳

    [SerializeField]
    GameObject item; //판매 아이템

    //아이템화 시킬 빌딩들
    [SerializeField]
    List<GameObject> attackBuildings = new List<GameObject>(); 
    [SerializeField]
    List<GameObject> makeBuildings = new List<GameObject>();

    [SerializeField]
    public GameObject MyBuilding; //아이템을 구매하면 넣을 위치 (내 빌딩들) 
    [SerializeField]
    public GameObject BuyBlock; //건설할 곳을 클릭해 주세요로 클릭을 막는 오브젝트
    [SerializeField]
    public GameObject Points; //건물 위치를 정하는 곳

    #region 클릭시 아이템 세팅 하는 변수들
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

    private void Awake() //판매 아이템을 Resources에 추가하면 자동으로 판매아이템에 올라오도록 만듬.
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
        level.text = "레벨 : " + building.Level.ToString() ;
        MaxHp.text = "체력 : " + building.MaxHp.ToString() + "(+" + building.levelMaxHp + ")" ;
        Defence.text = "방어 : " + building.Defense.ToString()+ "(+" + building.levelDefense + ")";
        

        if (building.gameObject.layer == LayerMask.NameToLayer("TEAM1")) //내 빌딩이면
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

        #region 빌딩의 종류에 따라 다른 설명창
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

    public void ItemBuy() //아이템 구매 버튼
    {
        if (SelectBuilding == null)
            return;

        if (TeamManager.teamManager.TeamCastle(0).MaxbuildingNum <= TeamManager.teamManager.TeamCastle(0).buildings.Count) //빌딩 개수 제한이 넘으면 못산다.

        {
            LogManager.logManager.Log("건물의 최대 개수 제한으로 구매할수 없습니다.");
            return;
        }
        Points.SetActive(true);
        BuyBlock.SetActive(true);
    }


    public void ItemSell() //아이템 판매 버튼
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.GetComponent<Castle>()) //성은 팔지 못한다.
            return;



        GameUI.gameUI.MoneySet(SelectBuilding.sellPrice);
        Destroy(SelectBuilding.gameObject);
        
        ShopReset();
        
    }
    public void Upgede() //업그레이드 버튼
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.levelPrice > GameUI.gameUI.money)
            return;

        GameUI.gameUI.MoneySet(-SelectBuilding.levelPrice);
        SelectBuilding.Level++; //레벨올리면 자동으로 업그레이드 된다.
        Building selbuild = SelectBuilding;
        ShopReset();
        BuildingSet(selbuild);
    }

    public void ShopReset()
    {
        CastleMenu.SetActive(false);
        makeBuildingMenu.SetActive(false);
        AttackBuildingMenu.SetActive(false);
        level.text = "레벨 : ";
        MaxHp.text = "체력 : ";
        Defence.text = "방어 : ";
        SelectBuilding = null;
        Buildingimage.sprite = null;
        price.text = "";
        Points.SetActive(false);
        BuyBlock.SetActive(false);
    }

}
