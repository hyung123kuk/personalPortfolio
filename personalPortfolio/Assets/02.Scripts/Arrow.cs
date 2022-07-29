using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arrow : MonoBehaviour,IDamaged
{
    int damage;

    private SkinnedMeshRenderer[] SkinnedMesh;
    private MeshRenderer[] Mesh;
    private Material[] mat;

    private int team;
    public int Team { get { return team; } 
        set {   //���� �����ϸ� �ڵ����� ���� ���� �ϵ���
            team = value;
            SetTeamColor();
        }
    }

    public void Awake()
    {
        SkinnedMesh = GetComponentsInChildren<SkinnedMeshRenderer>();
        Mesh = GetComponentsInChildren<MeshRenderer>();
        mat = Resources.LoadAll<Material>("0.TeamColor/Color");
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


    public void Damaged(int Damaged)
    {
        damage = Damaged;

    }//ȭ���� ������ ����



}
