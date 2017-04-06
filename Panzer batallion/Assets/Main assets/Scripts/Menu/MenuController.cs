using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : Photon.MonoBehaviour
{
    public Transform OnlineBox_text;
    public Transform LobiesBox_text;

    void Awake()
    {
        PhotonNetwork.automaticallySyncScene = true;
    }

    void Start ()
    {
        Application.targetFrameRate = 60;
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "ждемс выбора";
        ConnectManager.SetSingletonSettings();
        UpdateOnline();
    }

    private void FixedUpdate ()
    {
        UpdateOnline();
        //UpdateLobiesCount();
        if(LobbyReadyToStart())
        {
            ConnectManager.LoadLvL("StagePvPDuel");
        }
    }

    public void UpdateOnline()
    {
        //LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = PhotonNetwork.connectionState.ToString();
        OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + ConnectManager.GetOnline().ToString();
    }

    /*public void UpdateLobiesCount()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Lobby count: " + PhotonNetwork.GetRoomList().Length.ToString();//this.transform.GetComponent<ConnectManager>().GetLobiesCount().ToString();
    }*/

    public void JoinInLobby(string stageName)
    {
        //if(this.transform.GetComponent<ConnectManager>().ConnectInLobbyByRating_Duel(this.transform.Find("JoinInLobby_Button").Find("Text")))
        /*if (this.transform.GetComponent<ConnectManager>().ConnectInRandomLobby())
        {
            this.transform.GetComponent<ConnectManager>().LoadLvL(stageName);
        }*/
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "in lobby";//PhotonNetwork.connectionState.ToString();
        ConnectManager.ConnectInRandomLobby();
    }
    
    public void CreateLobby()
    {
        //if(this.transform.GetComponent<ConnectManager>().ConnectInLobbyByRating_Duel(this.transform.Find("JoinInLobby_Button").Find("Text")))
        /*if (this.transform.GetComponent<ConnectManager>().ConnectInRandomLobby())
        {
            this.transform.GetComponent<ConnectManager>().LoadLvL("StagePvPDuel");
        }*/
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Created lobby";
        ConnectManager.CreateLobby(new RoomOptions() { MaxPlayers = 2 });
    }

    private bool LobbyReadyToStart()
    {
        if (PhotonNetwork.inRoom && PhotonNetwork.playerList.Length == 2)
            return true;
        return false;
    }




    void OnCreatedRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Комната создана";
    }
    // Событие вызывается когда игрок вошел в комнату
    void OnJoinedRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Вы вошли в комнату";
    }
    // Событие срабатывает если игрок покидает комнату
    void OnLeftRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Вы покинули комнату";
    }
    // Событие срабатывает если не удалось создать комнату
    void OnPhotonCreateRoomFailed()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Не удалось создать комнату";
    }

    void OnPhotonJoinRoomFaild()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Не удалось войти в комнату. Комнаты не существует или она заполнена";
    }

    // LOBBY EVENTS

    void OnJoinedLobby()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Вы зашли в лобби";
    }

    void OnLeftLobby()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Вы покинули лобби";
    }
}
