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
    public void BuildingSet() //인터페이스 연결용
    {    }
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
            price.text = building.SellPrice.ToString();
            BuyButton.SetActive(true);
            UpgradeButton.SetActive(false);
        }
        Name.text = building.Name;

        #region 빌딩의 종류에 따라 다른 설명창
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

    public void ItemBuy() //아이템 구매 버튼
    {
        if (SelectBuilding == null)
            return;


    }


    public void ItemSell() //아이템 판매 버튼
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.GetComponent<Castle>()) //성은 팔지 못한다.
            return;
        

        
        FindObjectOfType<GameUI>().MoneySet(SelectBuilding.SellPrice);
        Destroy(SelectBuilding.gameObject);
        
        ShopReset();
        
    }
    public void Upgede() //업그레이드 버튼
    {
        if (SelectBuilding == null)
            return;
        if (SelectBuilding.levelPrice > FindObjectOfType<GameUI>().money)
            return;

        FindObjectOfType<GameUI>().MoneySet(-SelectBuilding.levelPrice);
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
    }

}
