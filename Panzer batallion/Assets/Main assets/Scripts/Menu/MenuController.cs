using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : MonoBehaviour
{
    public Transform OnlineBox_text;
    public Transform LobiesBox_text;

    void Start ()
    {
        Application.targetFrameRate = 60;
        this.transform.GetComponent<ConnectManager>().SetSingletonSettings();
        UpdateOnline();
    }

    private void FixedUpdate()
    {
        UpdateOnline();
        UpdateLobiesCount();
    }

    public void UpdateOnline()
    {
        OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + this.transform.GetComponent<ConnectManager>().GetOnline().ToString();
    }

    public void UpdateLobiesCount()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Lobby count: " + this.transform.GetComponent<ConnectManager>().GetLobiesCount().ToString();
    }

    public void JoinInLobby(string stageName)
    {
        //if(this.transform.GetComponent<ConnectManager>().ConnectInLobbyByRating_Duel(this.transform.Find("JoinInLobby_Button").Find("Text")))
        if (this.transform.GetComponent<ConnectManager>().ConnectInRandomLobby())
        {
            this.transform.GetComponent<ConnectManager>().LoadLvL(stageName);
        }
    }

    public void JoinInLobby()
    {
        //if(this.transform.GetComponent<ConnectManager>().ConnectInLobbyByRating_Duel(this.transform.Find("JoinInLobby_Button").Find("Text")))
        if (this.transform.GetComponent<ConnectManager>().ConnectInRandomLobby())
        {
            this.transform.GetComponent<ConnectManager>().LoadLvL("StagePvPDuel");
        }
    }
}
