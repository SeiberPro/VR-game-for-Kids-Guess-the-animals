using System.Collections;//подключение библиотек для работы систем
using System.Collections.Generic;//основная библиотека
using UnityEngine;
using UnityEngine.UI;//библиотека для работы с UI-объектами
using TMPro;//библиотека для видоизменения запросов к объектам

public class VrController : MonoBehaviour {//иницилизация переменных для объектов, с которыми была произведена работа
	public GameObject g1, g2, g3, mainCamera, tpPlace,tpPlace2, startingPoint;
	Vector3 gV1, gV2, gV3,camV,tpV,tpV2,startV,twoLevelV,finalPoint;
	public GameObject UIText,UIText2;
	public GameObject twoLevel;
	public GameObject finalCat, finalText,textForFinal;
	public GameObject dieDog;
	Vector3 dog;

	//Иницилизация первых действий(единожды)
	void Start () {
		finalText.SetActive(false);//
		textForFinal.SetActive(false);//
		gV1 = g1.transform.position;//
		gV2 = g2.transform.position;//
		gV3 = g3.transform.position;//
		camV = mainCamera.transform.position;//
		tpV = tpPlace.transform.position;//получение расположений ранее созданных объектов
		tpV2 = tpPlace2.transform.position;//
		tpV2 = tpPlace2.transform.position;//
		startV = startingPoint.transform.position;//
		twoLevelV = twoLevel.transform.position;//
		finalPoint = finalCat.transform.position;//
		dog = dieDog.transform.position;//
	}
	
	//ежекадровое обновление
	void FixedUpdate () {
		RaycastHit hit;
		Ray ray = new Ray (transform.position, transform.forward);//создание лучей для обработки наведения на объект
		if (Physics.Raycast (ray, out hit)) {
			if (hit.transform.gameObject == g1) {//обработка наведения на объект
				print("Кошка");
				UIText.GetComponent<Text>().text = "great";
				UIText2.GetComponent<Text>().text = "great";
				g1.GetComponent<MeshRenderer> ().material.color = Color.red;
				g1.transform.position = Vector3.MoveTowards (g1.transform.position, new Vector3 (g1.transform.position.x, g1.transform.position.y, 2.5f), Time.deltaTime * 1f);
				g2.GetComponent<MeshRenderer> ().material.color = Color.green;
				g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
				g3.GetComponent<MeshRenderer>().material.color = Color.green;
				g3.transform.position = Vector3.MoveTowards(g3.transform.position, gV3, Time.deltaTime * 1f);
				mainCamera.transform.position = new Vector3(twoLevelV.x, twoLevelV.y, twoLevelV.z + 10);
				Invoke("changeText", 4f);
			} else if (hit.transform.gameObject == g2) {
				print("Навел");
				g1.GetComponent<MeshRenderer> ().material.color = Color.green;
				g1.transform.position = Vector3.MoveTowards (g1.transform.position,gV1, Time.deltaTime * 1f);
				g2.GetComponent<MeshRenderer> ().material.color = Color.red;
				g2.transform.position = Vector3.MoveTowards (g2.transform.position, new Vector3 (g2.transform.position.x, g2.transform.position.y, 2.5f), Time.deltaTime * 1f);
				g3.GetComponent<MeshRenderer>().material.color = Color.green;
				g3.transform.position = Vector3.MoveTowards (g3.transform.position, gV3, Time.deltaTime * 1f);
			} else if(hit.transform.gameObject == g3)
            {
				print("3 объект");
				g1.GetComponent<MeshRenderer>().material.color = Color.green;
				g1.transform.position = Vector3.MoveTowards(g1.transform.position, gV1, Time.deltaTime * 1f);
				g3.GetComponent<MeshRenderer>().material.color = Color.red;
				g3.transform.position = Vector3.MoveTowards(g3.transform.position, new Vector3(g3.transform.position.x, g3.transform.position.y, 2.5f), Time.deltaTime * 1f);
				g2.GetComponent<MeshRenderer>().material.color = Color.green;
				g2.transform.position = Vector3.MoveTowards(g2.transform.position, gV2, Time.deltaTime * 1f);
			} else if(hit.transform.gameObject == tpPlace)
            {
				mainCamera.transform.position = new Vector3(tpV.x, tpV.y, tpV.z);//реализация телепортации для передвижения
            } else if(hit.transform.gameObject == tpPlace2)
            {
				mainCamera.transform.position = new Vector3(tpV2.x, tpV2.y, tpV2.z);
            } else if(hit.transform.gameObject == startingPoint)
            {
				mainCamera.transform.position = new Vector3(startV.x, startV.y, startV.z);
            } else if(hit.transform.gameObject == finalCat)//окончание игры, выведение нового ui-блока
            {
				print("игра конец");
				finalText.SetActive(true);
				textForFinal.SetActive(true);
            } else if(hit.transform.gameObject == dieDog)//реализация движения собаки при наведении на него камеры
            {
				dieDog.transform.position = Vector3.MoveTowards(dieDog.transform.position, new Vector3(dieDog.transform.position.x - 400, dieDog.transform.position.y, 5f), Time.deltaTime * 20f);
				print("ok");
				if(camV.y == dog.y)
                {
					finalText.SetActive(true);
					textForFinal.SetActive(true);
				}
            }
		} else {//возврат к прошлым и старым цветам и расположениям
			g1.GetComponent<MeshRenderer> ().material.color = Color.green;
			g1.transform.position = Vector3.MoveTowards (g1.transform.position, gV1, Time.deltaTime * 1f);
			g2.GetComponent<MeshRenderer> ().material.color = Color.green;
			g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
			g3.GetComponent<MeshRenderer>().material.color = Color.green;
			g3.transform.position = Vector3.MoveTowards(g3.transform.position, gV3, Time.deltaTime * 1f);
		}
			
	}
	void changeText()//дополнительный блок функции для изменения текста в поле заданий
    {
		UIText.GetComponent<Text>().text = "Найди собаку";
		UIText2.GetComponent<Text>().text = "Найди собаку";
	}
}
