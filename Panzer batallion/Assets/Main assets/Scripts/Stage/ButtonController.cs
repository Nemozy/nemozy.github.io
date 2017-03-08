using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonController : MonoBehaviour
{
    private Transform objConntrolled;

    private void Start()
    {
        if(GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1") &&
            GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1").Find("Tank"))
            objConntrolled = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1").Find("Tank").transform;
    }

    public void UnitSendMessage(string message)
    {
        if(!objConntrolled && GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1") &&
            GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1").Find("Tank"))
            objConntrolled = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1").Find("Tank").transform;
        if (objConntrolled)
        {
            string[] arg = message.Split('|');
            if (arg.Length > 2)
            {
                object[] tempStorage = new object[arg.Length - 1];
                for (int i = 0; i < arg.Length - 1; i++)
                {
                    tempStorage[i] = arg[i + 1];
                }

                objConntrolled.GetComponent<UnitController>().SendMessage(arg[0], tempStorage);
            }
            else if (arg.Length > 1)
            {
                objConntrolled.GetComponent<UnitController>().SendMessage(arg[0], arg[1]);
            }
            else if (arg.Length > 0)
                objConntrolled.GetComponent<UnitController>().SendMessage(message);
        }
    }
}
