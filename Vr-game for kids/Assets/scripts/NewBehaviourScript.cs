using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NewBehaviourScripts: MonoBehaviour
{

    // Use this for initialization
    private Vector2 last, old;

    private void DrawInfo()
    {
        int w = Screen.width, h = Screen.height;

        GUIStyle style = new GUIStyle();

        Rect rect = new Rect(0, 0, w, h * 2 / 100);
        style.alignment = TextAnchor.UpperLeft;
        style.fontSize = h * 2 / 100;
        style.normal.textColor = new Color(0.0f, 0.0f, 0.5f, 1.0f);
        string text;
        text = string.Format("X:{0}", last.x);
        text = text + string.Format(" Y:{0}\n", last.y);
        text = text + string.Format(" Xold:{0}", old.x);
        text = text + string.Format(" Yold:{0}", old.y);
        GUI.Label(rect, text, style);
    }
    void Start()
    {

    }

    // Update is called once per frame

    void Update()
    {

        if (Input.touchCount == 1)
        {
            Touch touch = Input.GetTouch(0);
            if (touch.phase == TouchPhase.Moved)
            {
                last = touch.position;// координаты последнего касания в текущем кадре

                Camera cam = GetComponent<Camera>();// камера
                Vector2 direction = (old - last); // вычисление направления движения
                float extraLen = cam.orthographicSize / cam.pixelHeight * 2f;//длина движения 
                cam.transform.position += transform.TransformDirection((Vector3)(direction * extraLen)); // двигаем камеру

                old = last;// координаты предыдущего касания в следующем кадре
            }
        }
        if (Input.touchCount == 2)
        {

        }
    }
    void OnGUI()
    {
        DrawInfo();
    }
}
