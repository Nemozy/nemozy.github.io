using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager
{
    private static string GameVersion = "ver 0.28b";
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

    public static bool CreateRoom(RoomOptions settings)
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

    public static bool ConnectInLobbyByRating_Duel()
    {
        //if(textItem)
        //    itemText = textItem;
        /*In case PlayerRank = 300
instead of
string sqlLobbyFilter = "(C0 &gt; (PlayerRank - 50) AND C0 &lt; (PlayerRank + 50))"; set
string sqlLobbyFilter = "(C0 &gt; 250 AND C0 &lt; 350)";*/
        TypedLobby sqlLobby = new TypedLobby(null, LobbyType.Default);
        bool findRoom = PhotonNetwork.JoinRandomRoom(null, 2, MatchmakingMode.FillRoom, sqlLobby, "");
        //TypedLobby sqlLobby = new TypedLobby(null, LobbyType.SqlLobby);
        //string sqlLobbyFilter = "(C0 &gt; (PlayerRank - 50) AND C0 &lt; (PlayerRank + 50))";
        //bool findRoom = PhotonNetwork.JoinRandomRoom(null, 2, MatchmakingMode.FillRoom, sqlLobby, sqlLobbyFilter);
        /* RoomInfo[] rooms = PhotonNetwork.GetRoomList();
         for (int i = 0; i < rooms.Length; i++)
         {
             if (rooms[i].IsVisible && rooms[i].IsOpen && rooms[i].PlayerCount < 2)
             {
                 //connect & play!
                 if (PhotonNetwork.JoinRoom(rooms[i].Name))
                     findRoom = true;
             }
         }*/

        if (!findRoom)
        {
            RoomOptions newRoomOptions = new RoomOptions();
            newRoomOptions.IsOpen = true;
            newRoomOptions.IsVisible = true;
            newRoomOptions.MaxPlayers = 2;
            findRoom = CreateRoom(newRoomOptions);
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
