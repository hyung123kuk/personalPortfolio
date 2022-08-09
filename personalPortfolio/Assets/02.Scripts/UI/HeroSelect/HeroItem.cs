using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class HeroItem : MonoBehaviour
{
    [SerializeField]
    Image heroImage;
    [SerializeField]
    GameObject hero;




    public void heroSet(GameObject _hero)
    {
        hero = _hero;
        heroImage.sprite = hero.GetComponent<Hero>().image;

        #region ����� ���� ǥ��
        heroColorSet();
        #endregion
    }

    public void heroColorSet()
    {
        GameObject heroCh = Instantiate<GameObject>(hero, TeamManager.teamManager.TeamCastle(0).transform);

        Hero heroscript = heroCh.GetComponent<Hero>();
        heroscript.ConditionSet();
        if (!heroscript.IsCondition)
        {
            heroImage.color = Color.red;
        }
        else
        {
            heroImage.color = Color.white;
        }
        Destroy(heroCh);
    }

    public void heroClick()
    {
        GameObject heroCh = Instantiate<GameObject>(hero,HeroSelect.heroSelect.heroPosition.transform.position , Quaternion.identity);
        heroCh.transform.Rotate(new Vector3(0, 90, 0));

        Hero heroscript = heroCh.GetComponent<Hero>();

        heroscript.ConditionSet();

        if (heroscript.IsCondition) //����� ���� ������ �����ϸ� ����� ���� �� ���� ����
        {
            heroscript.Level = TeamManager.teamManager.TeamCastle(0).Level;

            HeroSelect.heroSelect.LevelSelect();

        }
        else
        {
            Destroy(heroCh);
            LogManager.logManager.Log(heroscript.condisionMessage);
        }
        


       
    }
    

}
