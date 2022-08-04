using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class TouchManager : MonoBehaviour, IPointerDownHandler ,IDragHandler , IPointerUpHandler
{

    public Camera cam;

    public GameObject ClickBuilding;
    RaycastHit hit;
    public bool BuildingMoveOn;

    private void Update()
    {
        if (BuildingMoveOn)
        {
            BuildingMove();
        }
    }


    public void OnDrag(PointerEventData eventData)
    {
        
        if (ClickBuilding != null)
        {
            Ray ray = cam.ScreenPointToRay(eventData.position);
            Physics.Raycast(ray, out hit);
            
            
                BuildingMoveOn = true;
                
                        
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        
        Ray ray = cam.ScreenPointToRay(eventData.position);

        Physics.Raycast(ray, out hit);

        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("TEAM1") )
        {
            ClickBuilding = hit.transform.gameObject;
        }

    }
    public void BuildingMove()
    {
        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("GROUND"))
        {
            Vector3 moveVec = hit.point - ClickBuilding.transform.position;
            if (true ) //�����̴� �������� ���̸� �i���� �ƹ��͵� ������ �̵��ϵ��� �Ѵ�. 
            {
                ClickBuilding.transform.position = Vector3.Slerp(ClickBuilding.transform.position, hit.point, Time.deltaTime);
            }
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (ClickBuilding != null)
            ClickBuilding = null;
        BuildingMoveOn = false;
    }
}
