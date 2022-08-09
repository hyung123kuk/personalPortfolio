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

        #region 히어로 색깔 표시
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

        if (heroscript.IsCondition) //히어로 생성 조건이 만족하면 히어로 생성 및 레벨 설정
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
