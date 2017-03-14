using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager : Photon.PunBehaviour
{
    private string GameVersion = "ver 0.19";
    private PhotonView MasterView;
    private Transform itemText;

    public void Awake()
    {
        Application.targetFrameRate = 60;
        //PhotonNetwork.ConnectUsingSettings(GameVersion);
    }

    void Start ()
    {

    }

    private void Update()
    {
        if (itemText)
        {
            itemText.GetComponent<UnityEngine.UI.Text>().text = PhotonNetwork.connectionState.ToString();
        }
    }

    public void SetSingletonSettings()
    {
        PhotonNetwork.automaticallySyncScene = true;
        PhotonNetwork.ConnectUsingSettings(GameVersion);
        //PhotonNetwork.InitializeSecurity();

        if (string.IsNullOrEmpty(PhotonNetwork.playerName))
        {
            PhotonNetwork.playerName = "Guest" + Random.Range(1, 9999);
        }
    }

    public void ChangeLevelMaster()
    {
        if(PhotonNetwork.masterClient.IsMasterClient)
        {

        }
    }

    public bool CreateLobby(RoomOptions settings)
    {
        return PhotonNetwork.CreateRoom("", settings, null);
    }

    public bool ConnectInRandomLobby()
    {
        return PhotonNetwork.JoinRandomRoom();
    }

    public int GetPing()
    {
        return PhotonNetwork.GetPing();
    }

    public bool ConnectInLobbyByRating_Duel(Transform textItem)
    {
        if(textItem)
            itemText = textItem;

        bool findRoom = false;
        RoomInfo[] rooms = PhotonNetwork.GetRoomList();
        for (int i = 0; i < rooms.Length; i++)
        {
            if (rooms[i].IsVisible && rooms[i].IsOpen && rooms[i].PlayerCount == 1)
            {
                //connect & play!
                if (PhotonNetwork.JoinRoom(rooms[i].Name))
                    findRoom = true;
            }
        }
        
        if (!findRoom)
        {
            findRoom = CreateLobby(new RoomOptions() { MaxPlayers = 2 });
        }
        return findRoom;
    }

    public int GetOnline()
    {
        return PhotonNetwork.countOfPlayers;
    }
    /*  private void OnGUI()
      {
          GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
      } */

    public void LoadLvL(string lvlName)
    {
        PhotonNetwork.LoadLevel(lvlName);
    }

    void OnJoinedLobby()
    {
        if(ConnectInLobbyByRating_Duel(null))
            LoadLvL("StagePvPDuel");
        Debug.Log("I JOINED IN LOBBY!");
    }
}
