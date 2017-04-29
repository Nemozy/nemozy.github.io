using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MenuController : Photon.MonoBehaviour
{
    public Transform OnlineBox_text;
    public Transform LobiesBox_text;
    private Transform ButtonStart;

    private float StartFind = 0;
    private float WaitingTimeFind = 10;
    private bool StartFight = false;

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
        ButtonStart = this.transform.Find("CreateLobby_Button");
    }

    private void FixedUpdate ()
    {
        if(ButtonStart && !ButtonStart.gameObject.activeSelf && Time.timeSinceLevelLoad > 20)
        {
            ButtonStart.gameObject.SetActive(true);
            return;
        }
        UpdateOnline();
        if (LobbyReadyToStart())
        {
            PhotonNetwork.LoadLevel("StagePvPDuel");
        }
        else if(StartFight)
        {
            StartFight = !ConnectManager.ConnectInLobbyByRating_Duel();
        }
    }

    //Обновить кол-во пользователей
    public void UpdateOnline()
    {
        if (PhotonNetwork.inRoom)
            OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + PhotonNetwork.countOfPlayers.ToString() + " You in room\"" + PhotonNetwork.room.Name + "\"";
        else
            OnlineBox_text.GetComponent<UnityEngine.UI.Text>().text = "Online: " + PhotonNetwork.countOfPlayers.ToString();
    }
    
    //Начать "дуэль". Создать/присоединиться к комнате.
    public void CreateLobby(bool start)
    {
         StartFight = start;
    }

    //Проверка на готовность комнаты (полная комната и оба пользователя в комнате)
    private bool LobbyReadyToStart()
    {
        if (PhotonNetwork.inRoom && PhotonNetwork.room.PlayerCount >=2)
            return true;
        return false;
    }

    #region Photon callback
    void OnConnectedToMaster()
    {

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
    #endregion Photon callback
}
