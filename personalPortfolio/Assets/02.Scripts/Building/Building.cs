using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Building : MonoBehaviour , IDamaged  //�ɷ¾��� �߸� �ǹ��̴�.
{
    #region �ִ�ü��, ü��, ����, ��, ��������
    [SerializeField]
    private int maxHp;
    public int MaxHp { get { return maxHp; } set { maxHp = value; } } //�ִ�ü��

    [SerializeField]
    private int hp;
    public int Hp { get { return hp; } set { hp = value; } }//ü��

    [SerializeField]
    private int defense;
    public int Defense { get { return defense; } set { defense = value; } } //����

    [SerializeField]
    private int team;
    public int Team { get { return team; } set { team = value; SetTeamColor();} } //������, ������, ���̾��

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

    public void SetTeamColor() //�� ���� ����
    {
        
        for (int i = 0; i < mat.Length; i++)
        {
            BuildingMat[i] = mat[Team];
        }
        gameObject.layer = 6 + team;
    }


    public void Damaged(int Damaged , int team =-1) //���� �ٸ��� ������ �Դ´�. �⺻������ ������ �޴°� �������� �Ե��� �ߴ�.
    { hp -= Damaged;
        if (hp <= 0)
        {
            GetComponent<Animator>().SetTrigger("Die");
            
        }
    }

   
}
