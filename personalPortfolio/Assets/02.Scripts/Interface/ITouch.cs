using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface ITouch //터치를 하는 곳을 알기위해 인터페이스로 연결
{
    public Camera Cam { get; set; }
    
}
