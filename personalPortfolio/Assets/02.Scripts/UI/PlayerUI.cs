using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using GoogleMobileAds.Api;

public class PlayerUI : MonoBehaviour
{
    public static PlayerUI playerUI;

    [SerializeField]
    Text moneyText;

    public int money;

    [SerializeField]
    Text buildingText;
    [SerializeField]
    Text unitText;

    private void Awake()
    {
        if (playerUI == null)
            playerUI = this;
        if (playerUI != this)
            Destroy(gameObject);
    }

    public void Start()
    {
        // Initialize the Google Mobile Ads SDK.
        MobileAds.Initialize(initStatus => { });
    }

    public void MoneySet(int _value= 0)
    {
        money += _value;
        if (money > 1000000)
        {
            money = 1000000;
        }
        moneyText.text = money.ToString();
        SaveManager.saveManager.SaveMoney();
        SoundManager.soundManager.SFXPlay("Money");

    }

    public void BuildingSet(int _nowBuilding, int _maxBuilding)
    {
        buildingText.text = _nowBuilding.ToString() + "/" + _maxBuilding.ToString();
    }

    public void UnitSet(int _nowUnit , int _maxUnit)
    {
        unitText.text = _nowUnit.ToString() + "/" + _maxUnit.ToString();
    }

    public void MultiButton()
    {
        RequestInterstitial();
        StartCoroutine(showInterstitial());
        IEnumerator showInterstitial()
        {
            while (!this.interstitial.IsLoaded())
            {
                yield return new WaitForSeconds(0.2f);
            }
            this.interstitial.Show();
            PlayerUI.playerUI.MoneySet(PlayerUI.playerUI.money);
        }

        /*if (this.interstitial.IsLoaded())
        {
            this.interstitial.Show();
        }*/

       
    }

    private InterstitialAd interstitial;

    private void RequestInterstitial()
    {
#if UNITY_ANDROID
        string adUnitId =
            // "ca-app-pub-3940256099942544/1033173712"; //플레이용
            "ca-app-pub-3852110553532298/6858998063";//진짜 광고용
#elif UNITY_IPHONE
        string adUnitId = "ca-app-pub-3940256099942544/4411468910";
#else
        string adUnitId = "unexpected_platform";
#endif

        this.interstitial = new InterstitialAd(adUnitId);


        AdRequest request = new AdRequest.Builder().Build();
        this.interstitial.LoadAd(request);
        // Initialize an InterstitialAd.
        

        // Create an empty ad request.
        
        // Load the interstitial with the request.
        
    }
}
