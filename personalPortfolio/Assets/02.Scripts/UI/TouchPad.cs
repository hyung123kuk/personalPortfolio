using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPad : MonoBehaviour
{
    [SerializeField]
    RectTransform _touchPad;
    public int _touchId = -1; //터치 했는 지 판단
    Vector3 _StartPos = Vector3.zero;
    public float _dragRadius = 100f;
    private bool _buttonPressed = false;
    [SerializeField]
    public static Player playerMovement;

    private void Start()
    {
        _touchPad = GetComponent<RectTransform>();
        _StartPos = _touchPad.position;
    }
    private void OnDisable()
    {
        _touchPad.position = _StartPos;
        _buttonPressed = false;
        FindObjectOfType<Player>().OnStickChange(new Vector2(0, 0));

    }

    public void ButtonDown()
    {
        _buttonPressed = true;
    }
    public void ButtonUp()
    {
        _buttonPressed = false;
    }

    private void FixedUpdate()
    {
        if (Application.platform == RuntimePlatform.Android)
        {
            HandleTouchInput();
        }
        else if (Application.platform == RuntimePlatform.WindowsEditor)
        {
            HandleInput(Input.mousePosition);

        }

    }
    void HandleTouchInput() // 모바일에서 터치를 할 수 있는 기능을 가진 함수
    {
        int i = 0;
        if (Input.touchCount > 0) //한번이라도 터치가 되있다면
        {
            foreach (Touch _touch in Input.touches)//입력된 터치 좌표를 담는 배열
            {
                i++;

                if (_touch.position.x >= Screen.width / 2 || _touch.position.y >= Screen.height / 2) //만약에 일정 범위 밖에있는 터치라면 무시한다.
                    continue;


                Vector2 touchPos = new Vector2(_touch.position.x, _touch.position.y);

                if (_touch.phase == TouchPhase.Began) //시작 터치일때
                {
                    if (_touch.position.x <= (_StartPos.x + _dragRadius)) //터치 백그라운드 안에있다면
                    {
                        _touchId = i;                                      // 배경으로 인정한다.
                    }
                    if (_touch.position.y <= (_StartPos.y + _dragRadius))
                    {
                        _touchId = i;
                    }
                }
                Debug.Log(_touch.position.x < Screen.width / 2);
                Debug.Log(_touch.position.y < Screen.height / 2);
                if ((_touch.phase == TouchPhase.Moved || _touch.phase == TouchPhase.Stationary) && _touch.position.x<Screen.width/2 && _touch.position.y <Screen.height/2)
                //현재 백그라운 원안에서 움직이고 있거나/ 원안에서 멈추고 있는경우라면
                {

                    if (_touchId == i)
                    {
                        HandleInput(touchPos);
                    }
                }
                if (_touch.phase == TouchPhase.Ended && _touch.position.x < Screen.width / 2 && _touch.position.y < Screen.height / 2) //터치패드의 터치가 끝났다면
                {
                    _touchId = -1;
                }
            }
        }
        else
        {
            HandleInput(_StartPos);
        }
        //모바일 터치가 백그라운드 원안에서 되었는지 안되었는지 판단만 하고 실제로 움직이는 기능은
        //밑에 HandleInput 함수에 넘긴다.
    }
    void HandleInput(Vector3 input) //pc플랫폿에서 조이스틱을 움직이는 함수
    {
        if (_buttonPressed) // 터치패드가 눌러졌다면
        {
            Vector3 diffVector = input - _StartPos;
            //input한곳과 _StartPos 뺀 전체의 거리가 백그라운드 원을 넘어갔다면 
            if (diffVector.sqrMagnitude > _dragRadius * _dragRadius)
            {   //백그라운드 원을 넘어갔다면
                diffVector.Normalize();
                //방향만 유지 한채 백그라운드 원밖을 벗어 나지 말아야 함
                _touchPad.position = _StartPos + diffVector * _dragRadius;

            }
            else //백그라운드 원 안에 있다면
            {
                _touchPad.position = input;
            }
        }
        else
        {
            _touchPad.position = _StartPos;
        }
        //방향키와 기준지점의 차이를 구한다.
        Vector3 diff = _touchPad.position - _StartPos;
        //방향키의 방향을 유지한채로 거리를 나누면 방향이 구해진다.
        Vector3 nomaldiff = new Vector3(diff.x / _dragRadius, diff.y / _dragRadius);

        if (playerMovement != null)
        {
            playerMovement.OnStickChange(nomaldiff);
        }
    }
}
