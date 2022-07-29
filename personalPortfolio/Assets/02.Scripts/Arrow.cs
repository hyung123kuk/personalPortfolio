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
        set {   //팀을 설정하면 자동으로 색상 변경 하도록
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


    public void SetTeamColor() //팀 색상 설정 <팀 설정하면 프로퍼티에서 자동으로 호출된다.>
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

    }//화살의 데미지 설정



}
