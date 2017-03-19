using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//[RequireComponent(typeof(PhotonView))]
public class UnitController : Photon.MonoBehaviour//, IPunObservable
{
    /*private Vector3 latestCorrectPos;
    private Vector3 onUpdatePos;
    private float fraction;*/
    private Vector3 correctPlayerPos;
    private Quaternion correctPlayerRot;

    public float Speed = 0;
    public float DeltaSpeed = 0.35f;
    public float MaxSpeed = 0.50f;
    /*public float CurrentHp = 100f;
    public float MaxHp = 100f;*/
    //public UserInfo.UnitInfo.FuelInfo Fuel;
    public UserInfo.UnitInfo UnitInfo;

    private bool walkUp = false;
    private bool walkLeft = false;
    private bool walkRight = false;
    private bool walkDown = false;
    private bool cellDown = false;
    private bool shootingDown = false;
    private bool fire = false;

    private Vector3 moveVector;
    private Rigidbody2D rgb;
    public GameObject Target_cell;
    
    private Ray RayToMouse;
    private float MaxStretchSqr;

    private WeaponController Weapon;
    private Transform FuelBar;
    private Transform HpBar;
    private Dictionary<int, Bullet> Bullets;
    private float StartFreeze = 0;
    private float FreezeDuration = 0;

    private Transform Stage;
    private bool DisableUnit = false;
    private int BulletIdCounter = 0;
    private int Id;

    void Awake()
    {
        BulletIdCounter = 0;
        Application.targetFrameRate = 60;
        /*Fuel = new UserInfo.FuelInfo();
        Fuel.FuelMax = Fuel.Fuel = 1000;*/
        UnitInfo = new UserInfo.UnitInfo();
        UnitInfo.Fuel = new UserInfo.FuelInfo();
        UnitInfo.Fuel.FuelMax = UnitInfo.Fuel.Fuel = 1000;
        UnitInfo.Hp = new UserInfo.HpInfo();
        UnitInfo.Hp.CurrentHp = UnitInfo.Hp.MaxHp = 100;
    }

    void Start ()
    {
        correctPlayerPos = transform.position;
        correctPlayerRot = transform.rotation;
        //this.latestCorrectPos = transform.position;
        //this.onUpdatePos = transform.position;

        if (transform.parent && transform.parent.name.ToUpper().Equals("PLAYER_1"))
            FuelBar = GameObject.Find("Main Camera").transform.Find("Interface").Find("Fuel").Find("FuelBar");
        if(transform.parent && transform.parent.name.ToUpper().Equals("PLAYER_1"))
            HpBar = GameObject.Find("Main Camera").transform.Find("Interface").Find("HPBars").Find("Left").Find("Bar");
        else if (transform.parent && transform.parent.name.ToUpper().Equals("PLAYER_2"))
            HpBar = GameObject.Find("Main Camera").transform.Find("Interface").Find("HPBars").Find("Right").Find("Bar");

        Stage = GameObject.Find("Main Camera").transform.Find("Stage");
        moveVector = Vector3.zero;
        Speed = 0;
        DeltaSpeed = 0.35f;
        MaxSpeed = 0.50f;
        rgb = gameObject.GetComponent<Rigidbody2D>();
        RayToMouse = new Ray(this.transform.position, Vector3.zero);
        MaxStretchSqr = 10000;
        Bullets = new Dictionary<int, Bullet>();
        Weapon = new WeaponController(this.transform, "SimpleBullet");
    }

    void FixedUpdate()
    {
        /*
         * this.fraction = this.fraction + Time.deltaTime * 9;
        transform.localPosition = Vector3.Lerp(this.onUpdatePos, this.latestCorrectPos, this.fraction); // set our pos between A and B
         * */
        if (DisableUnit)
            return;
        float HpValue = UnitInfo.Hp.CurrentHp;
        HpValue /= UnitInfo.Hp.MaxHp;
        if (HpBar && this.photonView.isMine)
            HpBar.GetComponent<UnityEngine.UI.Image>().fillAmount = HpValue;
        if(UnitInfo.Hp.CurrentHp <= 0)
        {
            DisableUnit = true;
            Object bullet = Resources.Load("Models/Weapons/Explosions/ToonExplosion/Prefabs/" + "Explosion");
            GameObject inst = Instantiate(bullet, this.transform.position, Quaternion.identity) as GameObject;
            inst.transform.SetParent(this.transform.parent);
            inst.transform.localScale *= 30;
            inst.name = "Explosion";
            if (inst.GetComponent<ExplosionBullet>())
            {
                inst.GetComponent<ExplosionBullet>().SetExplosionRadius(30);
            }
            DestroyObject(inst, 3);
            Destroy(this.gameObject);
        }
        if (FreezeDuration > 0)
        {
            if(Time.timeSinceLevelLoad - StartFreeze < FreezeDuration)
            {
                rgb.constraints = RigidbodyConstraints2D.FreezeAll;
            }
            else
            {
                rgb.constraints = RigidbodyConstraints2D.None;
                FreezeDuration = 0;
            }
        }

       /* if (!this.photonView.isMine)
        {
            transform.position = Vector3.Lerp(transform.position, this.correctPlayerPos, Time.deltaTime * 8);
            transform.rotation = Quaternion.Lerp(transform.rotation, this.correctPlayerRot, Time.deltaTime * 8);
            //this.fraction = this.fraction + Time.deltaTime;
            //transform.localPosition = Vector3.Lerp(this.onUpdatePos, this.latestCorrectPos, this.fraction); // set our pos between A and B
            return;     // if this object is under our control, we don't need to apply received position-updates 
        }*/

        if (walkRight)
        {

            if (UnitInfo.Fuel.Fuel > 0)
            {
                Color col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
                col.a = 0;
                Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;
                Speed += Time.deltaTime * DeltaSpeed;
            }
            else
            {
                Speed -= Time.deltaTime * DeltaSpeed;
            }

            if (Speed > MaxSpeed)
                Speed = MaxSpeed;
            if (Speed < 0)
                Speed = 0;
            if (moveVector == Vector3.left)
                Speed = 0;
            moveVector = Vector3.right;
            this.transform.position += Vector3.right * Speed * Time.deltaTime;

            UnitInfo.Fuel.Fuel -= Mathf.CeilToInt(Speed);
        }

        if (walkLeft)
        {
            if (UnitInfo.Fuel.Fuel > 0)
            {
                Color col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
                col.a = 0;
                Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;
                Speed += Time.deltaTime * DeltaSpeed;
            }
            else
            {
                Speed -= Time.deltaTime * DeltaSpeed;
            }

            if (Speed > MaxSpeed)
                Speed = MaxSpeed;
            if (Speed < 0)
                Speed = 0;
            if (moveVector == Vector3.right)
                Speed = 0;
            moveVector = Vector3.left;

            UnitInfo.Fuel.Fuel -= Mathf.CeilToInt(Speed);
        }
        
        if(((!walkRight && !walkLeft) || UnitInfo.Fuel.Fuel <= 0) && Speed > 0)
        {
            Color col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
            col.a = 0;
            Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;
            Speed -= Time.deltaTime * DeltaSpeed;
            if (Speed <= 0.5f)
            {
                Speed = 0;
                col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
                col.a = 100;
                Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;
                moveVector = Vector3.zero;
            }
        }
        this.transform.position += moveVector * Speed;

        if(Target_cell.activeSelf && cellDown)
        {
            Vector3 mousePos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            mousePos.z = 0;
            Vector2 tankToMouse = mousePos - this.transform.position;

            if (tankToMouse.sqrMagnitude != MaxStretchSqr) //if (tankToMouse.sqrMagnitude > MaxStretchSqr) //сила выстрела.
            {
                RayToMouse = new Ray(this.transform.position, Vector3.zero);
                RayToMouse.direction = tankToMouse;
                mousePos = RayToMouse.GetPoint(100);
            }

            Target_cell.transform.position = mousePos;
        }

        if(fire && Speed == 0 && Target_cell.activeSelf && !cellDown)
        {
            RayToMouse = new Ray(this.transform.position, Vector3.zero);
            Vector2 bulletVec = Target_cell.transform.position - this.transform.position;
            RayToMouse.direction = bulletVec;
            Bullet bullt = Weapon.StartFire(RayToMouse.GetPoint(20), bulletVec, transform.parent.name);
            fire = false;
            Stage.GetComponent<StageEnvironment>().BlockShoot();
            if (bullt != null)
            {
                Bullets.Add(BulletIdCounter, bullt);
                BulletIdCounter++;
            }
        }

        float fuelValue = UnitInfo.Fuel.Fuel;
        fuelValue /= UnitInfo.Fuel.FuelMax;
        if(FuelBar && this.photonView.isMine)
            FuelBar.GetComponent<UnityEngine.UI.Image>().fillAmount = fuelValue;
    }

    void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
    {
        if (stream.isWriting)
        {
            // We own this player: send the others our data
            stream.SendNext(transform.position);
            stream.SendNext(transform.rotation);

        }
        else
        {
            // Network player, receive data
            this.correctPlayerPos = (Vector3)stream.ReceiveNext();
            this.correctPlayerRot = (Quaternion)stream.ReceiveNext();
        }
    }
    /*public void OnPhotonSerializeView(PhotonStream stream, PhotonMessageInfo info)
   / {
        if (stream.isWriting)
        {
            Vector3 pos = transform.localPosition;
            Quaternion rot = transform.localRotation;
            stream.Serialize(ref pos);
            stream.Serialize(ref rot);
        }
        else
        {
            // Receive latest state information
            Vector3 pos = Vector3.zero;
            Quaternion rot = Quaternion.identity;

            stream.Serialize(ref pos);
            stream.Serialize(ref rot);

            this.latestCorrectPos = pos;                // save this to move towards it in FixedUpdate()
            this.onUpdatePos = transform.localPosition; // we interpolate from here to latestCorrectPos
            this.fraction = 0;                          // reset the fraction we alreay moved. see Update()

            transform.localRotation = rot;              // this sample doesn't smooth rotation
        }
    }*/

    [PunRPC]
    void SetParent(int[] id)
    {
        PhotonView view = PhotonView.Find(id[0]);
        this.gameObject.name = "Tank";
        this.transform.SetParent(view.transform.Find("Players").Find("Player_" + id[1].ToString()));
        if (id[1] == 1)
            this.transform.localPosition = new Vector3(-155, 65, 0);
        if (id[1] == 2)
            this.transform.localPosition = new Vector3(250, -67, 0);
    }
    
    public void RemoveBullet(int idBullet)
    {
        if (Bullets.ContainsKey(idBullet))
            Bullets.Remove(idBullet);
    }

    public Dictionary<int, Bullet> GetAllBullets()
    {
        return Bullets;
    }

    public void SetId(int id)
    {
        Id = id;
    }

    public int GetId()
    {
        return Id;
    }

    public void FreezePosition(float startFreeze, float duration)
    {
        StartFreeze = startFreeze;
        FreezeDuration = duration;
    }

    public void UnFreezePosition()
    {
        rgb.constraints = RigidbodyConstraints2D.None;
        FreezeDuration = 0;
    }

    public void SetWeapon(int radiusDmg)
    {
        Weapon.SetWeapon(radiusDmg);
    }

    public void GetDamage(int dmg)
    {
        if (UnitInfo.Hp.CurrentHp < dmg)
            dmg = UnitInfo.Hp.CurrentHp;
        UnitInfo.Hp.CurrentHp -= dmg;
    }

    public void BlockControllUnit()
    {
        Color col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
        col.a = 0;
        Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;

        DisableUnit = true;
    }

    public void UnBlockControllUnit()
    {
        Color col = Target_cell.GetComponent<UnityEngine.UI.Image>().color;
        col.a = 100;
        Target_cell.GetComponent<UnityEngine.UI.Image>().color = col;

        DisableUnit = false;
    }

    #region Event Controller
    public void PlayerWalkUp(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit)
        {
            return;
        }
        if (value.Equals("1"))
        {
            walkUp = true;
        }
        else
        {
            walkUp = false;
        }

    }

    public void PlayerWalkLeft(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit)
        {
            return;
        }
        if (value.Equals("1"))
        {
            walkLeft = true;
        }
        else
        {
            walkLeft = false;
        }

    }

    public void PlayerWalkRight(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit)
        {
            return;
        }
        if (value.Equals("1"))
        {
            walkRight = true;
        }
        else
        {
            walkRight = false;
        }

    }

    public void PlayerWalkDown(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit)
        {
            return;
        }
        if (value.Equals("1"))
        {
            walkDown = true;
        }
        else
        {
            walkDown = false;
        }

    }

    public void PlayerCellDown(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit)
        {
            return;
        }
        if (value.Equals("1"))
        {
            cellDown = true;
        }
        else
        {
            cellDown = false;
        }

    }

    public void PlayerShootingDown(string value)
    {
        if (Stage.GetComponent<StageEnvironment>().GetGameOverState() || DisableUnit || Stage.GetComponent<StageEnvironment>().BlockShootState())
        {
            return;
        }
        if (value.Equals("1"))
        {
            shootingDown = true;
        }
        else
        {
            if(shootingDown)
                fire = true;

            shootingDown = false;
        }
    }

    /*public void PlayerShootingUp(int value)
    {
        if (value == 1 && shootingDown)
        {
            fire = true;
        }
    }*/
    #endregion Event Controller
}
