using UnityEngine;
using System.Collections.Generic;

/// <summary>
/// Skrypt odpowiada za usatwienie rozdzielczosci kemerze
/// </summary>
public class UIMobileRectFit : MonoBehaviour
{

    private int ScreenSizeX = 0;
    private int ScreenSizeY = 0;
    [SerializeField]
    Camera[] cameras;

    private void RescaleCamera()
    {

        if (Screen.width == ScreenSizeX && Screen.height == ScreenSizeY) return;

        float targetaspect = 16f / 9f;
        float windowaspect = (float)Screen.width / (float)Screen.height;
        float scaleheight = windowaspect / targetaspect;
        Camera camera = GetComponent<Camera>();

        if (scaleheight < 1.0f)
        {
            Rect rect = camera.rect;

            rect.width = 1.0f;
            rect.height = scaleheight;
            rect.x = 0;
            rect.y = (1.0f - scaleheight) / 2.0f;

            camera.rect = rect;
            foreach(Camera cam in cameras)
            {
                Rect rect1 = cam.rect;
                rect1.height = scaleheight;
                rect1.x = 0;
                rect1.y = (1.0f - scaleheight) / 2.0f;
                cam.rect = rect1;
            }
        }
        else // add pillarbox
        {
            float scalewidth = 1.0f / scaleheight;

            Rect rect = camera.rect;

            rect.width = scalewidth;
            rect.height = 1.0f;
            rect.x = (1.0f - scalewidth) / 2.0f;
            rect.y = 0;

            camera.rect = rect;
            foreach (Camera cam in cameras)
            {
                Rect rect1 = cam.rect;
                rect1.width = scalewidth;
                rect1.height = 1.0f;
                rect1.x = (1.0f - scalewidth) / 2.0f;
                rect1.y = 0;
                cam.rect = rect1;
            }
        }

        ScreenSizeX = Screen.width;
        ScreenSizeY = Screen.height;
    }


    void OnPreCull()
    {
        if (Application.isEditor) return;
        Rect wp = Camera.main.rect;
        Rect nr = new Rect(0, 0, 1, 1);

        Camera.main.rect = nr;
        GL.Clear(true, true, Color.black);

        Camera.main.rect = wp;

    }

    // Use this for initialization
    void Start()
    {
        RescaleCamera();
    }

    // Update is called once per frame
    void Update()
    {
        RescaleCamera();
    }

}
