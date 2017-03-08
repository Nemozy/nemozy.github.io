using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageEnvironment : MonoBehaviour
{
    private Dictionary<int, UserInfo.PlayerInfo> Players;
    private float StepTime = 0;
    private bool StartStep = false;
    private bool StartGame = false;
    private bool GameOver = false;

    public Transform UI;
    private Transform UITime;
    private Transform UIMessage;
    private Transform UIBlockScreen;

    //Steps
    private UserInfo.Step StepState;

    private GameInfo.WeaponsInventoryInfo InventoryInfo;
    //private int IdPlayersStep = 0;
    //private bool Shoot = false;

    void Start ()
    {
        GameOver = false;
        InventoryInfo = new GameInfo.WeaponsInventoryInfo();
        LoadWeaponInventoryInfo();
        Players = new Dictionary<int, UserInfo.PlayerInfo>();
        UITime = UI.Find("Time").Find("Text");
        UIMessage = UI.Find("Message");
        UIBlockScreen = UI.Find("BlockScreen");
        StepState = new UserInfo.Step();

        ConnectionPlayers();

        BlockAllTanks();
    }

    void Update()
    {
        if(!StartGame)
        {
            if(Time.timeSinceLevelLoad > 10)
            {
                StepState.NewStep(Time.timeSinceLevelLoad, Random.Range(1, Players.Count + 1));
                // IdPlayersStep = Random.Range(1, Players.Count+1);
                BlockAllTanks();
                UnBlockAllTank_IdPlayer(StepState.PlayerId);
                //Shoot = false;
                UIMessage.gameObject.SetActive(false);
                StartGame = true;
                BlockScreen(false);

            }
            else
            {
                BlockScreen(true);
                UIMessage.gameObject.SetActive(true);
                UIMessage.GetComponent<UnityEngine.UI.Text>().text = "Waiting..." + SetNewTimeInWidget(11);
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
                /*IdPlayersStep += 1;
                if (IdPlayersStep > Players.Count)
                    IdPlayersStep = 1;*/
                BlockAllTanks();
                UnBlockAllTank_IdPlayer(StepState.PlayerId);
                //Shoot = false;
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
                        if(CheckWinner())
                        {
                            GameOver = true;
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
        int numPl = 1;

        Transform players = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players");

        //Player_1
        UserInfo.PlayerInfo pl = new UserInfo.PlayerInfo();
        pl.Name = "Player_" + numPl.ToString();
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
        inst_tank.GetComponent<UnitController>().SetId(numPl);
        pl.Unit = new UserInfo.UnitInfo();
        pl.Unit.TransformUnit = inst_tank.transform;
        Players.Add(numPl, pl);

        numPl++;

        //Player_2
        pl = new UserInfo.PlayerInfo();
        pl.Name = "Player_" + numPl.ToString();
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
        inst_tank.GetComponent<UnitController>().SetId(numPl);
        pl.Unit = new UserInfo.UnitInfo();
        pl.Unit.TransformUnit = inst_tank.transform;
        Players.Add(numPl, pl);

        return true;
    }

    //Fix inventory (общий пример оружия, который будет копироваться и догружаться от плеера.)
    private void LoadWeaponInventoryInfo()
    {
        //InventoryInfo
    }

    //!!! Доделать проверку на выигрыш!!!!
    public bool CheckWinner()
    {
        ///!!!!
        return false;
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

    public void BlockShoot()
    {
        //Shoot = true;
        StepState.ShootState = true;
    }

    public void UnBlockShoot()
    {
       // Shoot = false;
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

    public void SetWeapon(int radiusDmg, int dmg)
    {
        Transform playerUnit = GameObject.Find("Main Camera").transform.Find("Stage").Find("Players").Find("Player_1").Find("Tank").transform;
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
}
