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

    private void OnEnable() //���� ���� ��忡���� ��� ������ �ڽ��ݶ��̴� ũ�⸦ 2���Ѵ�. (�ǹ� ������ ������ ����)
    {
        foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
        {
            building.GetComponent<BoxCollider>().size *= 2;
        }
    }
    private void OnDisable() //���� ��忡���� ��� ������ �ڽ��ݶ��̴� ũ�⸦ 1/2���Ѵ�.
    {
        foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
        {
            building.GetComponent<BoxCollider>().size /= 2;
        }
    }



    public void OnPointerDown(PointerEventData eventData) // Ŭ�����ϸ�
    {
        
        Ray ray = cam.ScreenPointToRay(eventData.position);

        Physics.Raycast(ray, out hit);

        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("TEAM1") ) //�ڱ��� �ǹ��ϰ��
        {
            ClickBuilding = hit.transform.gameObject; //�����̴� ������ �ִ´�.
            
            if (FindObjectOfType<ItemShop>() && !ItemShop.itemShop.BuyBlock.activeSelf)
            {
                ItemShop.itemShop.BuildingSet(ClickBuilding.GetComponent<Building>());
            }
        }

    }
    public void OnDrag(PointerEventData eventData)
    {

        if (ClickBuilding != null) //�����̴� ������ �������
        {
            Ray ray = cam.ScreenPointToRay(eventData.position);
            Physics.Raycast(ray, out hit); //�巡�� �ϰ� �ִ� ���� hit�� ��´�.


            BuildingMoveOn = true; //�����̰� �ִٰ� ǥ���Ѵ�.


        }
    }

    private void Update()
    {
        if (BuildingMoveOn) //�ǹ��� �����϶�
        {
            BuildingMove();

        }
    }

    public void BuildingMove()
    {
        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("GROUND") || hit.transform.gameObject.layer == LayerMask.NameToLayer("BUYPOINT"))// �巡�� ���ΰ��� ���̳� ���������̸� �����δ�.
        {
            Vector3 moveVec = hit.point - ClickBuilding.transform.position;


            ClickBuilding.transform.position = hit.point;
        }
    }

    public void OnPointerUp(PointerEventData eventData) //��ġ�� ����
    {
        if (ClickBuilding != null) // �����̴� �ǹ��� ��������.
        {
            ClickBuilding = null;
  
        }
        
        BuildingMoveOn = false;
        SaveManager.saveManager.SaveBuilding(); //�̵��� ������ ����
    }

    public void OnPointerClick(PointerEventData eventData) // ������ ���Ž� Ŭ���ϸ� ���� ���������.
    {
        Ray ray = cam.ScreenPointToRay(eventData.position);

        Physics.Raycast(ray, out hit);
        Transform hitTr = hit.transform;
        if (hitTr.gameObject.layer == LayerMask.NameToLayer("BUYPOINT") && hitTr.GetComponent<Collider>().enabled ==true ) //���� ����Ʈ�� ��������� , �ݶ��̴��� ���������
        {
            PlayerUI.playerUI.MoneySet(-ItemShop.itemShop.SelectBuilding.buyPrice); //������ ������ ���
            GameObject Buybuilding=Instantiate<GameObject>(ItemShop.itemShop.SelectBuilding.gameObject,ItemShop.itemShop.MyBuilding.transform);
            Buybuilding.transform.position = hitTr.position;
            Buybuilding.GetComponent<BoxCollider>().size *= 2;
            ItemShop.itemShop.BuyBlock.SetActive(false);
            ItemShop.itemShop.Points.SetActive(false);
            SaveManager.saveManager.SaveBuilding(); // ������ ���Ž� ����
        }
    }
}
