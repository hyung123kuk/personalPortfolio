using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour, IDamaged
{
    public float ArrowSpeed;

    int damage;
    private GameObject Target;
    private SkinnedMeshRenderer[] SkinnedMesh;
    private MeshRenderer[] Mesh;
    private Material[] mat;
    private Transform tr;
    private Collider myCol;

    Rigidbody rbody;
    private int team;
    public int Team
    {
        get { return team; }
        set
        {   //���� �����ϸ� �ڵ����� ���� ���� �ϵ���
            team = value;
            SetTeamColor();
            gameObject.layer = 9 + team;
        }
    }



    public void Awake()
    {
        rbody = GetComponent<Rigidbody>();
        SkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        Mesh = GetComponentsInChildren<MeshRenderer>();
        tr = GetComponent<Transform>();
        mat = Resources.LoadAll<Material>("0.TeamColor/Color");
        myCol = GetComponent<Collider>();
        Invoke("Disable", 4f);
    }


    public void SetTeamColor() //�� ���� ���� <�� �����ϸ� ������Ƽ���� �ڵ����� ȣ��ȴ�.>
    {

        for (int i = 0; i < SkinnedMesh.Length; i++)
        {
            SkinnedMesh[i].material = mat[team];
        }
        for (int i = 0; i < Mesh.Length; i++)
        {
            Mesh[i].material = mat[team];
        }
    }


    public void Damaged(int Damaged, int team = -1) //���� �ٸ��� ������ �Դ´�. �⺻������ ������ �޴°� �������� �Ե��� �ߴ�.
    {
        if (team != Team)
            damage = Damaged;

    }//ȭ���� ������ ����

    public void TargetSet(GameObject target)
    {
        Target = target;

        Vector3 vec = Target.transform.position - tr.position + Vector3.up * 1;

        rbody.AddForce(vec * ArrowSpeed, ForceMode.Impulse);

        tr.LookAt(Target.transform);
        tr.rotation *= Quaternion.Euler(new Vector3(0f, 90f, 0f));
    }


    public void NonTagerSet()
    {
        rbody.AddForce(-transform.right * ArrowSpeed * 13, ForceMode.Impulse);


    }


    private void OnCollisionEnter(Collision col)
    {

        col.gameObject.SendMessage("Damaged", damage);
        myCol.enabled = false;
        Invoke("Disable", 2f);

    }
    private void Disable()
    {
        rbody.Sleep();
        gameObject.SetActive(false);

    }

    private void OnDisable()
    {
        myCol.enabled = true;

    }
}
