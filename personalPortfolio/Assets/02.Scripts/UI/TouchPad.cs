using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchPad : MonoBehaviour
{
    [SerializeField]
    RectTransform _touchPad;
    public int _touchId = -1; //��ġ �ߴ� �� �Ǵ�
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
    void HandleTouchInput() // ����Ͽ��� ��ġ�� �� �� �ִ� ����� ���� �Լ�
    {
        int i = 0;
        if (Input.touchCount > 0) //�ѹ��̶� ��ġ�� ���ִٸ�
        {
            foreach (Touch _touch in Input.touches)//�Էµ� ��ġ ��ǥ�� ��� �迭
            {
                i++;

                if (_touch.position.x >= Screen.width / 2 || _touch.position.y >= Screen.height / 2) //���࿡ ���� ���� �ۿ��ִ� ��ġ��� �����Ѵ�.
                    continue;


                Vector2 touchPos = new Vector2(_touch.position.x, _touch.position.y);

                if (_touch.phase == TouchPhase.Began) //���� ��ġ�϶�
                {
                    if (_touch.position.x <= (_StartPos.x + _dragRadius)) //��ġ ��׶��� �ȿ��ִٸ�
                    {
                        _touchId = i;                                      // ������� �����Ѵ�.
                    }
                    if (_touch.position.y <= (_StartPos.y + _dragRadius))
                    {
                        _touchId = i;
                    }
                }
                Debug.Log(_touch.position.x < Screen.width / 2);
                Debug.Log(_touch.position.y < Screen.height / 2);
                if ((_touch.phase == TouchPhase.Moved || _touch.phase == TouchPhase.Stationary) && _touch.position.x<Screen.width/2 && _touch.position.y <Screen.height/2)
                //���� ��׶�� ���ȿ��� �����̰� �ְų�/ ���ȿ��� ���߰� �ִ°����
                {

                    if (_touchId == i)
                    {
                        HandleInput(touchPos);
                    }
                }
                if (_touch.phase == TouchPhase.Ended && _touch.position.x < Screen.width / 2 && _touch.position.y < Screen.height / 2) //��ġ�е��� ��ġ�� �����ٸ�
                {
                    _touchId = -1;
                }
            }
        }
        else
        {
            HandleInput(_StartPos);
        }
        //����� ��ġ�� ��׶��� ���ȿ��� �Ǿ����� �ȵǾ����� �Ǵܸ� �ϰ� ������ �����̴� �����
        //�ؿ� HandleInput �Լ��� �ѱ��.
    }
    void HandleInput(Vector3 input) //pc�÷������� ���̽�ƽ�� �����̴� �Լ�
    {
        if (_buttonPressed) // ��ġ�е尡 �������ٸ�
        {
            Vector3 diffVector = input - _StartPos;
            //input�Ѱ��� _StartPos �� ��ü�� �Ÿ��� ��׶��� ���� �Ѿ�ٸ� 
            if (diffVector.sqrMagnitude > _dragRadius * _dragRadius)
            {   //��׶��� ���� �Ѿ�ٸ�
                diffVector.Normalize();
                //���⸸ ���� ��ä ��׶��� ������ ���� ���� ���ƾ� ��
                _touchPad.position = _StartPos + diffVector * _dragRadius;

            }
            else //��׶��� �� �ȿ� �ִٸ�
            {
                _touchPad.position = input;
            }
        }
        else
        {
            _touchPad.position = _StartPos;
        }
        //����Ű�� ���������� ���̸� ���Ѵ�.
        Vector3 diff = _touchPad.position - _StartPos;
        //����Ű�� ������ ������ä�� �Ÿ��� ������ ������ ��������.
        Vector3 nomaldiff = new Vector3(diff.x / _dragRadius, diff.y / _dragRadius);

        if (playerMovement != null)
        {
            playerMovement.OnStickChange(nomaldiff);
        }
    }
}
