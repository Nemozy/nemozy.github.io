using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageEnvironment : Photon.MonoBehaviour
{
    private bool InitPlayers = false;
    private Dictionary<int, UserInfo.PlayerInfo> Players;
    private float StepTime = 0;
    private float StartingTime = 0;
    private bool StartStep = false;
    private bool StartGame = false;
    private bool GameOver = false;

    public Transform UI;
    private Transform UITime;
    private Transform UIMessage;
    private Transform UIBlockScreen;
    private float SleepInitPlayer = 0;
    //Steps
    private UserInfo.Step StepState;

    private GameInfo.WeaponsInventoryInfo InventoryInfo;
    //private int IdPlayersStep = 0;
    //private bool Shoot = false;

    private int GameObjectId = 0;
    private int CountPlayers = 0;
    private float GameTime = 0;

    public void Awake()
    {
        if (!PhotonNetwork.connected)
        {
            UnityEngine.SceneManagement.SceneManager.LoadScene("Menu");
            //Application.LoadLevel("Menu");
            return;
        }
    }

    void Start ()
    {
        Application.targetFrameRate = 60;
        GameOver = false;
        InventoryInfo = new GameInfo.WeaponsInventoryInfo();
        //LoadWeaponInventoryInfo();
        Players = new Dictionary<int, UserInfo.PlayerInfo>();
        UITime = UI.Find("Time").Find("Text");
        UIMessage = UI.Find("Message");
        UIBlockScreen = UI.Find("BlockScreen");
        StepState = new UserInfo.Step();

        //ConnectionPlayers();

        //BlockAllTanks();
    }

    /*void OnGUI()
    {
        GUI.Button(new Rect(10, 30, 100, 20), PhotonNetwork.connectionState.ToString());
        GUI.Button(new Rect(10, 70, 150, 20), "PlayerID = " + PhotonNetwork.player.ID.ToString());
    }*/

    void FixedUpdate()
    {
        if (!StartGame)
        {
            if(PhotonNetwork.inRoom && PhotonNetwork.playerList.Length < 2)
            {
                BlockScreen(true);
                UIMessage.gameObject.SetActive(true);
                UIMessage.GetComponent<UnityEngine.UI.Text>().text = "Waiting all players..." + SetNewTimeInWidget(31);

                if(Time.timeSinceLevelLoad - 31 < 0)
                    return;
            }
            if(StartingTime == 0 && PhotonNetwork.inRoom && PhotonNetwork.playerList.Length >= 2)
            {
                if(Time.timeSinceLevelLoad < 2)
                {
                    return;
                }

                if (!InitPlayers)
                {
                    InitPlayers = ConnectionPlayers();
                    //StartingTime = Time.timeSinceLevelLoad + 1;
                    /*InstantiatePlayersObjects();
                    BlockAllTanks();*/
                    //SleepInitPlayer = Time.timeSinceLevelLoad + 3;
                    return;
                }
                if (InitPlayers/* && SleepInitPlayer < Time.timeSinceLevelLoad*/)
                {
                    if (InstantiatePlayersObjects())
                    {
                        StartingTime = Time.timeSinceLevelLoad + 1;
                        BlockAllTanks();
                    }
                    else
                        return;
                }
            }

            if(Time.timeSinceLevelLoad - StartingTime > 4)
            {
                StepState.NewStep(Time.timeSinceLevelLoad, Random.Range(1, Players.Count + 1));
                BlockAllTanks();
                UnBlockAllTank_IdPlayer(StepState.PlayerId);
                UIMessage.gameObject.SetActive(false);
                StartGame = true;
                BlockScreen(false);

            }
            else
            {
                BlockScreen(true);
                UIMessage.gameObject.SetActive(true);
                UIMessage.GetComponent<UnityEngine.UI.Text>().text = ">>> " + SetNewTimeInWidget(3 + StartingTime) + " <<<";
            }
        }

        if(StartGame)
        {
            if (!StartStep)
            {
                StartStep = true;
                StepTime = Time.timeSinceLevelLoad;

                if(Players.ContainsKey(StepState.PlayerId + 1))
                    StepState.NewStep(Time.timeSinceLevelLoad, StepState.PlayerId + 1);
                else
                    StepState.NewStep(Time.timeSinceLevelLoad, 1);
                BlockAllTanks();
                UnBlockAllTank_IdPlayer(StepState.PlayerId);
            }

            if(StartStep)
            {
                if(Time.timeSinceLevelLoad - StepTime >= 31)
                {
                    StartStep = false;
                    BlockAllTanks();
                }
                else
                {
                    if(StepState.ShootState && Players.ContainsKey(StepState.PlayerId) && Players[StepState.PlayerId].Unit.TransformUnit &&
                        Players[StepState.PlayerId].Unit.TransformUnit.GetComponent<UnitController>() && Players[StepState.PlayerId].Unit.TransformUnit.GetComponent<UnitController>().GetAllBullets().Count == 0)
                    {
                        StartStep = false;
                        BlockAllTanks();
                        int winnerNum = CheckWinner();
                        if (winnerNum > 0)
                        {
                            GameOver = true;

                            BlockScreen(true);
                            UIMessage.gameObject.SetActive(true);
                            if (winnerNum == 3 ||
                                (winnerNum == 2 && string.Equals(Players[PhotonNetwork.player.ID].Team, PunTeams.Team.red.ToString())) ||
                                (winnerNum == 1 && string.Equals(Players[PhotonNetwork.player.ID].Team, PunTeams.Team.blue.ToString())))
                                UIMessage.GetComponent<UnityEngine.UI.Text>().text = ">>> You lose <<<";
                            else
                                UIMessage.GetComponent<UnityEngine.UI.Text>().text = ">>> You win <<<";
                        }
                    }
                    else
                        SetNewTimeInWidget(31);
                }
            }
        }
    }

    private bool ConnectionPlayers()
    {
        /*if (PhotonNetwork.isMasterClient)
        {
            for (int i = 0; i < PhotonNetwork.playerList.Length; i++)
            {
                Transform players = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players");
                GameObject inst = PhotonNetwork.Instantiate("Player_", Vector3.zero, Quaternion.identity, 0);
                inst.name = "Player_" + PhotonNetwork.playerList[i].ID.ToString();
                inst.transform.SetParent(players);
                inst.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
                inst.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
                int[] parameters = { photonView.viewID, PhotonNetwork.playerList[i].ID };
                inst.GetPhotonView().RPC("SetParent", PhotonTargets.All, parameters);

                GameObject inst_tank = PhotonNetwork.Instantiate("Tank_1", new Vector3(0, 0, 0), Quaternion.identity, 0) as GameObject;
                inst_tank.name = "Tank";
                inst_tank.transform.SetParent(inst.transform);
                if (PhotonNetwork.playerList[i].ID == 1)
                    inst_tank.transform.localPosition = new Vector3(-155, 57, 0);
                if (PhotonNetwork.playerList[i].ID == 2)
                    inst_tank.transform.localPosition = new Vector3(250, -67, 0);
                inst_tank.GetComponent<UnitController>().SetId(PhotonNetwork.playerList[i].ID);

                inst_tank.GetPhotonView().RPC("SetParent", PhotonTargets.All, parameters);
            }
        }*/
        Transform players = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players");
        GameObject inst = PhotonNetwork.Instantiate("Player_", Vector3.zero, Quaternion.identity, 0);
        inst.name = "Player_" + PhotonNetwork.player.ID.ToString();
        inst.transform.SetParent(players);
        inst.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        inst.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
        int[] parameters = { photonView.viewID, PhotonNetwork.player.ID };
        inst.GetPhotonView().RPC("SetParent", PhotonTargets.All, parameters);

        GameObject inst_tank = PhotonNetwork.Instantiate("Tank_1", new Vector3(0, 0, 0), Quaternion.identity, 0) as GameObject;
        inst_tank.name = "Tank";
        inst_tank.transform.SetParent(inst.transform);
        if (PhotonNetwork.player.ID == 1)
            inst_tank.transform.localPosition = new Vector3(-155, 57, 0);
        if (PhotonNetwork.player.ID == 2)
            inst_tank.transform.localPosition = new Vector3(250, -67, 0);
        inst_tank.GetComponent<UnitController>().SetId(PhotonNetwork.player.ID);

        inst_tank.GetPhotonView().RPC("SetParent", PhotonTargets.All, parameters);

        CountPlayers = PhotonNetwork.playerList.Length;
        return true;
    }

    private bool InstantiatePlayersObjects()
    {
        for (int i = 0; i < PhotonNetwork.playerList.Length; i++)
        {
            Transform trnsf = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_" + PhotonNetwork.playerList[i].ID.ToString());
            if (!trnsf || !trnsf.Find("Tank") || !trnsf.Find("Tank").gameObject)
            {
                return false;
            }
        }
        for (int i = 0; i < PhotonNetwork.playerList.Length; i++)
        {
            Transform players = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players");
            if (i % 2 == 0)
                PhotonNetwork.playerList[i].SetTeam(PunTeams.Team.blue);
            else
                PhotonNetwork.playerList[i].SetTeam(PunTeams.Team.red);

            UserInfo.PlayerInfo pl = new UserInfo.PlayerInfo();
            pl.Name = "Player_" + PhotonNetwork.playerList[i].ID.ToString();
            //Object player_obj = Resources.Load("Stages/Player_");
           // GameObject inst = PhotonNetwork.Instantiate("Player_", Vector3.zero, Quaternion.identity, 0);
            // GameObject inst = Instantiate(player_obj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
            //inst.name = pl.Name;
            pl.Team = PhotonNetwork.playerList[i].GetTeam().ToString();
            // inst.transform.SetParent(players);
            // inst.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
            // inst.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
            // Object tank = Resources.Load("Models/Tanks/Tank_1/Tank_1");
            GameObject inst_tank = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_" + PhotonNetwork.playerList[i].ID.ToString()).Find("Tank").gameObject;

                //PhotonNetwork.Instantiate("Tank_1", new Vector3(0, 0, 0), Quaternion.identity, 0) as GameObject;
                //inst_tank.name = "Tank";
                // inst_tank.transform.SetParent(inst.transform);
           /* if (i == 0)
                inst_tank.transform.localPosition = new Vector3(-155, 57, 0);
            if (i == 1)
                inst_tank.transform.localPosition = new Vector3(250, -67, 0);*/
            inst_tank.GetComponent<UnitController>().SetId(PhotonNetwork.playerList[i].ID);
            pl.Unit = new UserInfo.UnitInfo();
            pl.Unit.TransformUnit = inst_tank.transform;
            Players.Add(PhotonNetwork.playerList[i].ID, pl);
        }

        /*CountPlayers = 1;

        Transform players = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players");

        //Player_1
        UserInfo.PlayerInfo pl = new UserInfo.PlayerInfo();
        pl.Name = "Player_" + CountPlayers.ToString();
        Object player_obj = Resources.Load("Stages/Player_");
        GameObject inst = Instantiate(player_obj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
        inst.name = pl.Name;
        inst.transform.SetParent(players);
        inst.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        inst.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
        Object tank = Resources.Load("Models/Tanks/Tank_1/Tank_1");
        GameObject inst_tank = Instantiate(tank, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
        inst_tank.name = "Tank";
        inst_tank.transform.SetParent(inst.transform);
        inst_tank.transform.localPosition = new Vector3(-155, 57, 0);
        inst_tank.GetComponent<UnitController>().SetId(CountPlayers);
        pl.Unit = new UserInfo.UnitInfo();
        pl.Unit.TransformUnit = inst_tank.transform;
        Players.Add(CountPlayers, pl);

        CountPlayers++;

        //Player_2
        pl = new UserInfo.PlayerInfo();
        pl.Name = "Player_" + CountPlayers.ToString();
        player_obj = Resources.Load("Stages/Player_");
        inst = Instantiate(player_obj, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
        inst.name = pl.Name;
        inst.transform.SetParent(players);
        inst.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        inst.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
        tank = Resources.Load("Models/Tanks/Tank_1/Tank_1");
        inst_tank = Instantiate(tank, new Vector3(0, 0, 0), Quaternion.identity) as GameObject;
        inst_tank.name = "Tank";
        inst_tank.transform.SetParent(inst.transform);
        inst_tank.transform.localPosition = new Vector3(250, -67, 0);
        inst_tank.GetComponent<UnitController>().SetId(CountPlayers);
        pl.Unit = new UserInfo.UnitInfo();
        pl.Unit.TransformUnit = inst_tank.transform;
        Players.Add(CountPlayers, pl);
        */
        return true;
    }
    
    public int CheckWinner()
    {
        int RedTeamAlive = 0;
        int BlueTeamAlive = 0;
        foreach (int key in Players.Keys)
        {
            if (string.Equals(Players[key].Team, PunTeams.Team.blue.ToString()) && Players[key].Unit.TransformUnit.GetComponent<UnitController>().UnitInfo.Hp.CurrentHp > 0)
                BlueTeamAlive++;
            if (string.Equals(Players[key].Team, PunTeams.Team.red.ToString()) && Players[key].Unit.TransformUnit.GetComponent<UnitController>().UnitInfo.Hp.CurrentHp > 0)
                RedTeamAlive++;
        }

        if (RedTeamAlive == 0 && BlueTeamAlive == 0)
            return 3;
        if (RedTeamAlive == 0)
            return 2;
        if (BlueTeamAlive == 0)
            return 1;
        return 0;
    }

    public int GetGameObjectId()
    {
        return GameObjectId++;
    }

    public UserInfo.PlayerInfo GetPlayerInfo(int id)
    {
        if (Players.ContainsKey(id))
        {
            return Players[id];
        }
        else
            return null;
    }

    public Dictionary<int, UserInfo.PlayerInfo> GetPlayers()
    {
        return Players;
    }

    [PunRPC]
    public void BlockShoot()
    {
        StepState.ShootState = true;
    }

    public void UnBlockShoot()
    {
        StepState.ShootState = false;
    }

    public bool BlockShootState()
    {
        return StepState.ShootState;
    }

    public void BlockScreen(bool lockState)
    {
        UIBlockScreen.gameObject.SetActive(lockState);
    }

    public bool GetGameOverState()
    {
        return !StartGame;
    }

    public bool GetStartStepState()
    {
        return StartStep;
    }

    public void SetWeapon(int radiusDmg, int dmgMin, int dmgMax)
    {
        Transform playerUnit = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_" + PhotonNetwork.player.ID.ToString()).Find("Tank").transform;
        if (playerUnit)
        {
            playerUnit.GetComponent<UnitController>().SetWeapon(radiusDmg);
        }
    }

    private void BlockAllTanks()
    {
        for (int i = 1; i < Players.Count + 1; i++)
        {
            Transform obj = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_" + i.ToString());
            if (obj && obj.Find("Tank") && obj.Find("Tank").GetComponent<UnitController>())
                obj.Find("Tank").GetComponent<UnitController>().BlockControllUnit();
        }
    }

    private void UnBlockAllTank_IdPlayer(int id)
    {
        Transform obj = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_" + id.ToString());
        if (obj && obj.Find("Tank") && obj.Find("Tank").GetComponent<UnitController>())
            obj.Find("Tank").GetComponent<UnitController>().UnBlockControllUnit();
    }

    private string SetNewTimeInWidget(float dur)
    {
        return UITime.GetComponent<UnityEngine.UI.Text>().text = "0:" + string.Format("{0:00}", Mathf.FloorToInt(dur - (Time.timeSinceLevelLoad - StepTime)));
    }

    public Dictionary<string, GameInfo.Weapon> GetWeaponsDefault_SlotKey()
    {
        Dictionary<string, GameInfo.Weapon> retMass = new Dictionary<string, GameInfo.Weapon>();

        foreach(string key in InventoryInfo.AllWeapons.Keys)
        {
            if(!retMass.ContainsKey(InventoryInfo.AllWeapons[key].SlotName))
                retMass.Add(InventoryInfo.AllWeapons[key].SlotName, InventoryInfo.AllWeapons[key]);
        }


        return retMass;
    }
    
    void OnJoinedRoom()
    {
       // PhotonNetwork.Instantiate(PrefabName, Vector3.zero, Quaternion.identity, 0);
    }
}
