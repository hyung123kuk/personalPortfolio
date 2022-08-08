using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class BuyPoint : MonoBehaviour, IPointerClickHandler
{

    List<Collider> EnterBuilding = new List<Collider>();

    private void OnTriggerEnter(Collider other) //원래는 Stay로 Building이 있으면 Mesh가 enabled 되는 것으로 하였는데 그렇게 되면 너무 많이 호출
                                                //하는것 같아 List를 만들어 List에 추가하고 나갈때도 List에서 빼서 List가 비면 Mesh를 키는 방식으로 하였다.
    {
        EnterBuilding.Add(other);
        if (EnterBuilding.Count != 0)
        {
            GetComponent<MeshRenderer>().enabled = false;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        EnterBuilding.Remove(other);
        if (EnterBuilding.Count == 0)
        {
            GetComponent<MeshRenderer>().enabled = true;
        }
    }
    public void OnPointerClick(PointerEventData eventData) //아이템 구매시 사용하는 클릭 인터페이스
    {
        throw new System.NotImplementedException();
    }

}
