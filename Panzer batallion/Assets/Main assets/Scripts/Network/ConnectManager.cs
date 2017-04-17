using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager
{
    private static string GameVersion = "ver 0.30";

    private static void FixedUpdate ()
    {

    }

    public static void SetSingletonSettings()
    {
        PhotonNetwork.ConnectUsingSettings(GameVersion);

        if (string.IsNullOrEmpty(PhotonNetwork.playerName))
        {
            PhotonNetwork.playerName = "Player" + Random.Range(1, 9999);
        }
    }

    public static void ChangeLevelMaster()
    {

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

    //Подключение или создание комнаты для дуэли.
    public static bool ConnectInLobbyByRating_Duel()
    {
        bool findRoom = false;
        RoomInfo[] rooms = PhotonNetwork.GetRoomList();
        for (int i = 0; i < rooms.Length; i++)
        {
            if (rooms[i].IsVisible && rooms[i].IsOpen && rooms[i].PlayerCount < 2)
            {
                //connect & play!
                if (PhotonNetwork.JoinRoom(rooms[i].Name))
                    findRoom = true;
            }
        }

        if (!findRoom)
        {
            RoomOptions newRoomOptions = new RoomOptions();
            newRoomOptions.IsOpen = true;
            newRoomOptions.IsVisible = true;
            newRoomOptions.MaxPlayers = 2;
            findRoom = PhotonNetwork.CreateRoom("", newRoomOptions, null);
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

    public static void LoadLvL(string lvlName)
    {
        PhotonNetwork.LoadLevel(lvlName);
    }
}
