using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class MainButton : MonoBehaviour, IPointerEnterHandler
{
    public void OnPointerEnter(PointerEventData eventData)
    {
        Debug.Log("Mouse enter");
    }
    /*public GameObject player;
    // Use this for initialization
    void Start ()
    {
        Application.targetFrameRate = 60;
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        Debug.Log(this.gameObject.name + " Was Clicked.");
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        Debug.Log(this.gameObject.name + " Was Clicked.");
    }
    */
    // Update is called once per frame
    /*void Update ()
    {

        if (Input.GetMouseButtonDown(0))
            Debug.Log("Down left click.");

        if (Input.GetMouseButtonUp(0))
            Debug.Log("Pressed left click.");

        if (Input.GetMouseButtonUp(1))
            Debug.Log("Pressed right click.");

        if (Input.GetMouseButtonUp(2))
            Debug.Log("Pressed middle click.");
    }*/
}
