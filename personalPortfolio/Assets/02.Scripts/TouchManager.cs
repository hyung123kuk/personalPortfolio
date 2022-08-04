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

    private void OnEnable()
    {
        
    }
    private void OnDisable()
    {
        
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
            foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
            {
                building.GetComponent<BoxCollider>().size *= 2;
            }
        }

    }
    public void BuildingMove()
    {
        if (hit.transform.gameObject.layer == LayerMask.NameToLayer("GROUND"))
        {
            Vector3 moveVec = hit.point - ClickBuilding.transform.position;


            ClickBuilding.transform.position = hit.point;
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if (ClickBuilding != null)
        {
            ClickBuilding = null;
            foreach (Building building in TeamManager.teamManager.TeamCastle(0).buildings)
            {
                building.GetComponent<BoxCollider>().size /= 2;
            }
        }
        BuildingMoveOn = false;
            
    }
}
