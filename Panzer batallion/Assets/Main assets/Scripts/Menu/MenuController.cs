using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public Transform OnlineBox_text;
    
	void Start ()
    {
        Application.targetFrameRate = 60;
        this.transform.GetComponent<ConnectManager>().SetSingletonSettings();
        UpdateOnline();
    }

    private void FixedUpdate()
    {
        UpdateOnline();
    }

    public void UpdateOnline()
    {
        OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + this.transform.GetComponent<ConnectManager>().GetOnline().ToString();
    }

    public void JoinInLobby(string stageName)
    {
        if(this.transform.GetComponent<ConnectManager>().ConnectInLobbyByRating_Duel(this.transform.Find("JoinInLobby_Button").Find("Text")))
        {
            this.transform.GetComponent<ConnectManager>().LoadLvL(stageName);
        }
    }
}
