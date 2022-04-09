using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VrController : MonoBehaviour {
	public GameObject g1, g2, g3;
	Vector3 gV1, gV2, gV3;

	// Use this for initialization
	void Start () {
		gV1 = g1.transform.position;
		gV2 = g2.transform.position;
		gV3 = g3.transform.position;
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		RaycastHit hit;
		Ray ray = new Ray (transform.position, transform.forward);
		if (Physics.Raycast (ray, out hit)) {
			if (hit.transform.gameObject == g1) {
				print("Навел");
				g1.GetComponent<MeshRenderer> ().material.color = Color.red;
				g1.transform.position = Vector3.MoveTowards (g1.transform.position, new Vector3 (g1.transform.position.x, g1.transform.position.y, 2.5f), Time.deltaTime * 1f);
				g2.GetComponent<MeshRenderer> ().material.color = Color.green;
				g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
				g3.GetComponent<MeshRenderer>().material.color = Color.green;
				g3.transform.position = Vector3.MoveTowards(g3.transform.position, gV3, Time.deltaTime * 1f);
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
			}
		} else {
			g1.GetComponent<MeshRenderer> ().material.color = Color.green;
			g1.transform.position = Vector3.MoveTowards (g1.transform.position, gV1, Time.deltaTime * 1f);
			g2.GetComponent<MeshRenderer> ().material.color = Color.green;
			g2.transform.position = Vector3.MoveTowards (g2.transform.position, gV2, Time.deltaTime * 1f);
			g3.GetComponent<MeshRenderer>().material.color = Color.green;
			g3.transform.position = Vector3.MoveTowards(g3.transform.position, gV3, Time.deltaTime * 1f);
		}
			
	}
}
