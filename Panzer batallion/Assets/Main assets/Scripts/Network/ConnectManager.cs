using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager
{
    private static string GameVersion = "ver 0.21";
    //private static PhotonView MasterView;
    //private static Transform itemText;

    private static void FixedUpdate ()
    {
        /*if (itemText)
        {
            itemText.GetComponent<UnityEngine.UI.Text>().text = PhotonNetwork.connectionState.ToString();
        }*/
    }

    public static void SetSingletonSettings()
    {
        //PhotonNetwork.automaticallySyncScene = true;
        PhotonNetwork.ConnectUsingSettings(GameVersion);
        //PhotonNetwork.InitializeSecurity();

        if (string.IsNullOrEmpty(PhotonNetwork.playerName))
        {
            PhotonNetwork.playerName = "Player" + Random.Range(1, 9999);
        }
    }

    public static void ChangeLevelMaster()
    {
        if(PhotonNetwork.masterClient.IsMasterClient)
        {

        }
    }

    public static bool CreateLobby(RoomOptions settings)
    {
        return PhotonNetwork.CreateRoom("", settings, null);
    }

    public static bool ConnectInRandomLobby()
    {
        return PhotonNetwork.JoinRandomRoom();
    }

    public static int GetPing()
    {
        return PhotonNetwork.GetPing();
    }

    public static bool ConnectInLobbyByRating_Duel(Transform textItem)
    {
        //if(textItem)
        //    itemText = textItem;

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

    public static int GetOnline()
    {
        return PhotonNetwork.countOfPlayers;
    }

    public static int GetLobiesCount()
    {
        return PhotonNetwork.countOfRooms;
    }
    /*  private void OnGUI()
      {
          GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
      } */

    public static void LoadLvL(string lvlName)
    {
        PhotonNetwork.LoadLevel(lvlName);
    }

    /*void OnJoinedLobby()
    {
        if(ConnectInLobbyByRating_Duel(null))
            LoadLvL("StagePvPDuel");
    }*/
}
