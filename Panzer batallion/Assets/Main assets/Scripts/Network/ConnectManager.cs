using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ConnectManager : MonoBehaviour
{
    private string GameVersion = "ver 0.19";

	void Start ()
    {
        PhotonNetwork.ConnectUsingSettings(GameVersion);
	}

    private void OnGUI()
    {
        GUILayout.Label(PhotonNetwork.connectionStateDetailed.ToString());
    } 

    void OnJoinedLobby()
    {
        Debug.Log("I JOINED IN LOBBY!");
    }
}
