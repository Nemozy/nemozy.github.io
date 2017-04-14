using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : Photon.MonoBehaviour
{
    public Transform OnlineBox_text;
    public Transform LobiesBox_text;

    private float StartFind = 0;
    private float WaitingTimeFind = 10;
    private bool StartFight = false;
    void Awake()
    {
        PhotonNetwork.automaticallySyncScene = true;
    }

    void Start ()
    {
        Application.targetFrameRate = 60;
        ConnectManager.SetSingletonSettings();
        UpdateOnline();
    }

    private void FixedUpdate ()
    {
        UpdateOnline();
        
        if(LobbyReadyToStart())
        {
            PhotonNetwork.LoadLevel("StagePvPDuel");
        }
        else if (StartFight)
        {
            if ((StartFind == 0 || Time.timeSinceLevelLoad - StartFind > WaitingTimeFind))
            {
                if (ConnectManager.ConnectInLobbyByRating_Duel())
                {
                    StartFind = Time.timeSinceLevelLoad;
                    WaitingTimeFind = Random.Range(15, 30);
                }
            }
            else
                PhotonNetwork.LeaveRoom();
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
        //LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "in lobby";//PhotonNetwork.connectionState.ToString();
        //ConnectManager.ConnectInRandomLobby();
    }
    
    public void CreateLobby(bool start)
    {
        StartFight = start;
       /* if ((StartFind == 0 || Time.timeSinceLevelLoad - StartFind > 10))
        {
            if (ConnectManager.ConnectInLobbyByRating_Duel())
                StartFind = Time.timeSinceLevelLoad;
        }
        else
            PhotonNetwork.LeaveRoom();*/
        //if (ConnectManager.ConnectInRandomLobby())
        // {
        //ConnectManager.LoadLvL("StagePvPDuel");
        // }
        //LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Created lobby";
        // ConnectManager.CreateLobby(new RoomOptions() { MaxPlayers = 2 });
    }

    private bool LobbyReadyToStart()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "In room " + PhotonNetwork .room.Name + " " + PhotonNetwork.room.PlayerCount.ToString() + " player(s)";
        if (PhotonNetwork.inRoom && PhotonNetwork.room.PlayerCount == 2)
            return true;
        return false;
    }




    void OnCreatedRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Room created";
    }
    // Событие вызывается когда игрок вошел в комнату
    void OnJoinedRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Connect in room";
    }
    // Событие срабатывает если игрок покидает комнату
    void OnLeftRoom()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Leaving room";
    }
    // Событие срабатывает если не удалось создать комнату
    void OnPhotonCreateRoomFailed()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Cant create room. Plz, repeate.";
    }

    void OnPhotonJoinRoomFaild()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "Cant connect to room. Room created? Or its full.";
    }

    // LOBBY EVENTS

    void OnJoinedLobby()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "You connected in lobby";
    }

    void OnLeftLobby()
    {
        LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = "You leaving from lobby";
    }
}
