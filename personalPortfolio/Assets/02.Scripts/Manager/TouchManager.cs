using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TouchManager : MonoBehaviour, ITouch, IPointerDownHandler ,IDragHandler , IPointerUpHandler ,IPointerClickHandler
{
    [SerializeField]
    private Camera cam;

    public GameObject ClickBuilding;
    RaycastHit hit;
    public bool BuildingMoveOn;

    public Camera Cam { get { return cam; }set { cam = value; } }

    private void OnEnable() //빌딩 세팅 모드에서는 모든 빌딩의 박스콜라이더 크기를 2배한다. (건물 겹쳐짐 방지를 위해)
    {
        foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
        {
            building.GetComponent<BoxCollider>().size *= 2;
        }
    }
    private void OnDisable() //게임 모드에서는 모든 빌딩의 박스콜라이더 크기를 1/2배한다.
    {
        foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
        {
            building.GetComponent<BoxCollider>().size /= 2;
        }
    }



    public void OnPointerDown(PointerEventData eventData) // 클릭을하면
    {
        
        Ray ray = cam.ScreenPointToRay(eventData.position);

        Physics.Raycast(ray, out hit);

        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("TEAM1") ) //자기팀 건물일경우
        {
            ClickBuilding = hit.transform.gameObject; //움직이는 빌딩에 넣는다.
            
            if (FindObjectOfType<ItemShop>() && !ItemShop.itemShop.BuyBlock.activeSelf)
            {
                ItemShop.itemShop.BuildingSet(ClickBuilding.GetComponent<Building>());
            }
        }

    }
    public void OnDrag(PointerEventData eventData)
    {

        if (ClickBuilding != null) //움직이는 빌딩이 있을경우
        {
            Ray ray = cam.ScreenPointToRay(eventData.position);
            Physics.Raycast(ray, out hit); //드래그 하고 있는 곳을 hit에 담는다.


            BuildingMoveOn = true; //움직이고 있다고 표시한다.


        }
    }

    private void Update()
    {
        if (BuildingMoveOn) //건물이 움직일때
        {
            BuildingMove();

        }
    }

    public void BuildingMove()
    {
        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("GROUND") || hit.transform.gameObject.layer == LayerMask.NameToLayer("BUYPOINT"))// 드래그 중인곳이 땅이나 구매지점이면 움직인다.
        {
            Vector3 moveVec = hit.point - ClickBuilding.transform.position;


            ClickBuilding.transform.position = hit.point;
        }
    }

    public void OnPointerUp(PointerEventData eventData) //터치를 떼면
    {
        if (ClickBuilding != null) // 움직이는 건물은 없어진다.
        {
            ClickBuilding = null;
  
        }
        
        BuildingMoveOn = false;
        SaveManager.saveManager.SaveBuilding(); //이동이 끝나면 저장
    }

    public void OnPointerClick(PointerEventData eventData) // 아이템 구매시 클릭하면 빌딩 만들어진다.
    {
        Ray ray = cam.ScreenPointToRay(eventData.position);

        Physics.Raycast(ray, out hit);
        Transform hitTr = hit.transform;
        if (hitTr.gameObject.layer == LayerMask.NameToLayer("BUYPOINT") && hitTr.GetComponent<Collider>().enabled ==true ) //구매 포인트를 눌렀을경우 , 콜라이더가 켜졌을경우
        {
            PlayerUI.playerUI.MoneySet(-ItemShop.itemShop.SelectBuilding.buyPrice); //아이템 가격을 깎고
            GameObject Buybuilding=Instantiate<GameObject>(ItemShop.itemShop.SelectBuilding.gameObject,ItemShop.itemShop.MyBuilding.transform);
            Buybuilding.transform.position = hitTr.position;
            Buybuilding.GetComponent<BoxCollider>().size *= 2;
            ItemShop.itemShop.BuyBlock.SetActive(false);
            ItemShop.itemShop.Points.SetActive(false);
            SaveManager.saveManager.SaveBuilding(); // 아이템 구매시 저장
        }
    }
}
