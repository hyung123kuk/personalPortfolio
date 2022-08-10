using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterHpBar : MonoBehaviour
{
    [SerializeField]
    private Camera uiCamera;
    [SerializeField]
    private Canvas canvas;
    [SerializeField]
    private RectTransform rectParent;
    [SerializeField]
    private RectTransform rectHp;

    public Vector3 offset = Vector3.zero;
    public Transform targetTr;


    public void Start()
    {
        canvas = GameObject.Find("Hp_Bar_UI").GetComponent<Canvas>();
        transform.parent = canvas.transform;
        uiCamera = canvas.worldCamera;
        rectParent = canvas.GetComponent<RectTransform>();
        rectHp = this.gameObject.GetComponent<RectTransform>();
    }


    public void LateUpdate()
    {


        var screenPos = Camera.main.WorldToScreenPoint(targetTr.position);
        if(screenPos.z < 0.0f)
        {
            screenPos *= -1.0f;
        }


        var localPos = Vector2.zero;
        RectTransformUtility.ScreenPointToLocalPointInRectangle(rectParent, screenPos + offset, uiCamera, out localPos);
        rectHp.localPosition = localPos;

    }
}
