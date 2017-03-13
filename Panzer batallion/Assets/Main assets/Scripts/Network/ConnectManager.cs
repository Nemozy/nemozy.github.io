using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager : Photon.PunBehaviour
{
    private string GameVersion = "ver 0.19";
    private PhotonView MasterView;

	void Start ()
    {
        Application.targetFrameRate = 60;
        PhotonNetwork.ConnectUsingSettings(GameVersion);
        PhotonNetwork.automaticallySyncScene = true;
    }

    public void ChangeLevelMaster()
    {
        if(PhotonNetwork.masterClient.IsMasterClient)
        {

        }
    }

    public bool CreateLobby()
    {
        return PhotonNetwork.CreateRoom(null);
    }

    public bool ConnectInRandomLobby()
    {
        return PhotonNetwork.JoinRandomRoom();
    }

    public bool ConnectInLobbyByRating_Duel()
    {
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
            if(ConnectInRandomLobby())
                findRoom = true;
        }
        if (!findRoom)
        {
            findRoom = CreateLobby();
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
        Debug.Log("I JOINED IN LOBBY!");
    }
}
