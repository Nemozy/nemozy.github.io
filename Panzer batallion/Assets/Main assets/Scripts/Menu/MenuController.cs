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
    private bool OnMasterState = true;
   // private double SleepStart = 0;
    //private double Sleep = 0;
    void Awake()
    {
        PhotonNetwork.automaticallySyncScene = true;
        PhotonNetwork.autoJoinLobby = true;
    }

    void Start ()
    {
        Application.targetFrameRate = 60;
        ConnectManager.SetSingletonSettings();
        UpdateOnline();
    }

    private void FixedUpdate ()
    {
        RoomInfo[] rooms = PhotonNetwork.GetRoomList();
        UpdateOnline();
        if (OnMasterState && LobbyReadyToStart())
        {
            PhotonNetwork.LoadLevel("StagePvPDuel");
        }
        ////////else if (OnMasterState && StartFight /*&& PhotonNetwork.time - SleepStart > Sleep*/ && PhotonNetwork.insideLobby && !PhotonNetwork.inRoom)
        ////////{
        ////////   // if (StartFind == 0 || Time.timeSinceLevelLoad - StartFind > WaitingTimeFind)
        ////////   // {
        ////////   /*      if (PhotonNetwork.inRoom)
        ////////         {
        ////////             PhotonNetwork.LeaveRoom();
        ////////             OnMasterState = false;
        ////////             return;
        ////////         }*/
        ////////        if (ConnectManager.ConnectInLobbyByRating_Duel())
        ////////        {
        ////////            StartFind = Time.timeSinceLevelLoad;
        //////// //           WaitingTimeFind = Random.Range(20, 30);
        ////////        }
        ////////   // }
        ////////}
    }

    public void UpdateOnline()
    {
        //LobiesBox_text.GetComponent<UnityEngine.UI.Text>().text = PhotonNetwork.connectionState.ToString();
        if (PhotonNetwork.inRoom)
            OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + PhotonNetwork.countOfPlayers.ToString() + " You in room\"" + PhotonNetwork.room.Name + "\"";
        else
            OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + PhotonNetwork.countOfPlayers.ToString();
    }
    
    public void CreateLobby(bool start)
    {
        ConnectManager.ConnectInLobbyByRating_Duel();



       /* if (PhotonNetwork.insideLobby)
            if(PhotonNetwork.LeaveLobby())
                PhotonNetwork.JoinLobby(new TypedLobby("Duel", LobbyType.SqlLobby));

        if (!PhotonNetwork.insideLobby)
            PhotonNetwork.JoinLobby(new TypedLobby("Duel", LobbyType.SqlLobby));*/

        // StartFight = start;


        //SleepStart = PhotonNetwork.time;
        // Sleep = 1;
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
        if (PhotonNetwork.inRoom && PhotonNetwork.room.PlayerCount >=2)
            return true;
        return false;
    }


    void OnConnectedToMaster()
    {
        /*if (!PhotonNetwork.insideLobby)
            PhotonNetwork.JoinLobby(new TypedLobby("Duel", LobbyType.Default));*/
       // OnMasterState = true;
        //SleepStart = PhotonNetwork.time;
        //Sleep = 5;
        /*if (this.transform.Find("CreateLobby_Button"))
            this.transform.Find("CreateLobby_Button").gameObject.SetActive(true);*/
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
