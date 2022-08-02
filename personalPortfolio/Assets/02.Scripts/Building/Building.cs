using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour , IDamaged  //능력없는 중립 건물이다.
{
    #region 최대체력, 체력, 방어력, 팀, 죽은상태
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //최대체력

    [SerializeField]
    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//체력

    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //방어력

    [SerializeField]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor();} } //팀설정, 색상설정, 레이어설정

    #endregion

    private Material[] BuildingMat;
    private Material[] mat;

    private void Awake()
    {
        
        BuildingMat = GetComponents<Material>();
        mat = Resources.LoadAll<Material>("0.TeamColor/BuildingColor");
        
    }

    private void OnEnable()
    {
        hp = maxHp;

        SetTeamColor();
    }

    public void SetTeamColor() //팀 색상 설정
    {
        
        for (int i = 0; i < mat.Length; i++)
        {
            BuildingMat[i] = mat[Team];
        }
        gameObject.layer = 6 + team;
    }


    public void Damaged(int Damaged , int team =-1) //팀이 다르면 데미지 입는다. 기본적으로 팀없이 받는건 데미지를 입도록 했다.
    { hp -= Damaged;
        if (hp <= 0)
        {
            GetComponent<Animator>().SetTrigger("Die");
            
        }
    }

   
}
