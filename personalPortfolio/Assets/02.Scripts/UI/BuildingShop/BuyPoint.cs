using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class BuyPoint : MonoBehaviour, IPointerClickHandler
{

    List<Collider> EnterBuilding = new List<Collider>();

    private void OnTriggerEnter(Collider other) //������ Stay�� Building�� ������ Mesh�� enabled �Ǵ� ������ �Ͽ��µ� �׷��� �Ǹ� �ʹ� ���� ȣ��
                                                //�ϴ°� ���� List�� ����� List�� �߰��ϰ� �������� List���� ���� List�� ��� Mesh�� Ű�� ������� �Ͽ���.
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
    public void OnPointerClick(PointerEventData eventData) //������ ���Ž� ����ϴ� Ŭ�� �������̽�
    {
        throw new System.NotImplementedException();
    }

}
