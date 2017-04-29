using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : Photon.MonoBehaviour
{
    private int Id;
    private int ParentTankId;
    private string NameExplosion;
    private float Delay;
    private int ScaleSizeExplosion;
    private string PlayerName;
    private float DisableDuration = 0;

    private Vector3 correctPlayerPos;
    private Quaternion correctPlayerRot;

    void Awake()
    {
        Application.targetFrameRate = 60;
    }

    void Start()
    {
        correctPlayerPos = transform.position;
        correctPlayerRot = transform.rotation;
    }

    void FixedUpdate()
    {
        if (transform.localPosition.y < -100 || transform.localPosition.x < -600 || transform.localPosition.x > 600)
        {
            Object bullet = Resources.Load("Models/Weapons/Explosions/ToonExplosion/Prefabs/" + NameExplosion);
            GameObject inst = Instantiate(bullet, this.transform.position, Quaternion.identity) as GameObject;
            inst.transform.SetParent(this.transform.parent);
            inst.transform.localScale *= ScaleSizeExplosion;
            inst.name = "Explosion";
            if (inst.GetComponent<ExplosionBullet>())
            {
                inst.GetComponent<ExplosionBullet>().SetExplosionRadius(ScaleSizeExplosion);
                inst.GetComponent<ExplosionBullet>().SetParentBulletId(Id);
                inst.GetComponent<ExplosionBullet>().SetParentTankId(ParentTankId);
            }
            DestroyObject(inst, Delay);
            Destroy(this.gameObject);
        }
    }

    public void SetId(int id, int tankId)
    {
        DisableDuration = (float)PhotonNetwork.time/*Time.timeSinceLevelLoad*/;
        Id = id;
        ParentTankId = tankId;
    }
    public void SetParentName(string pl)
    {
        DisableDuration = (float)PhotonNetwork.time/*Time.timeSinceLevelLoad*/;
        PlayerName = pl;
    }

    public void SetExplosionName(string expl, float delay, int scaleSizeExplosion)
    {
        NameExplosion = expl;
        Delay = delay;
        ScaleSizeExplosion = scaleSizeExplosion;
    }

    void OnCollisionEnter2D(Collision2D coll)
    {
        if (coll.transform.parent.name.ToUpper().Equals(PlayerName.ToUpper()) && (float)PhotonNetwork.time/*Time.timeSinceLevelLoad*/ - DisableDuration < 2)
        {
            return;
        }

        if (coll != null && !coll.gameObject.name.ToUpper().Contains("BULLET") && !coll.gameObject.name.ToUpper().Contains("EXPLOSION"))
        {
            Object bullet = Resources.Load("Models/Weapons/Explosions/ToonExplosion/Prefabs/" + NameExplosion);
            GameObject inst = Instantiate(bullet, this.transform.position, Quaternion.identity) as GameObject;
            inst.transform.SetParent(this.transform.parent);
            inst.transform.localScale *= ScaleSizeExplosion;
            if (inst.GetComponent<ExplosionBullet>())
            {
                inst.GetComponent<ExplosionBullet>().SetExplosionRadius(ScaleSizeExplosion);
                inst.GetComponent<ExplosionBullet>().SetParentBulletId(Id);
                inst.GetComponent<ExplosionBullet>().SetParentTankId(ParentTankId);
            }
            DestroyObject(inst, Delay);
            Destroy(this.gameObject);
        }
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

    [PunRPC]
    void SetForce(Vector2 vecPos)
    {
        this.GetComponent<Rigidbody2D>().AddForce(vecPos * 10000, ForceMode2D.Force);
    }

    [PunRPC]
    void SetPosition(Vector3 vecPos)
    {
        this.transform.position = vecPos;
    }

    [PunRPC]
    void SetInit(string[] parameters)
    {
        //fix name parent
        this.transform.SetParent(GameObject.Find("Main Camera").transform.Find("Stage").Find("NeutralObjects").Find("Bullets"));
        SetId(int.Parse(parameters[1]), int.Parse(parameters[2]));
        SetParentName(parameters[3]);
        SetExplosionName(parameters[4], int.Parse(parameters[5]), int.Parse(parameters[6]));
        this.transform.name = parameters[0];

        GameObject.Find("Main Camera").transform.Find("Stage").GetComponent<StageEnvironment>().GetPlayerInfo(int.Parse(parameters[2])).Unit.TransformUnit.GetComponent<UnitController>().AddNewBullet(this);
    }
}
