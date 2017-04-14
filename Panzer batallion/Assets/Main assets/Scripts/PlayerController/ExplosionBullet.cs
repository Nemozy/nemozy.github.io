using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionBullet : Photon.MonoBehaviour
{
    private int ParentBulletId;
    private int ParentTankId;
    public bool dead = false;
    public int ExplosionRadius = 40;
    public int ExplosionDmg = 20;
    private Transform Players;
    private Transform Stage;

    private Vector3 correctPlayerPos;
    private Quaternion correctPlayerRot;

    void Awake()
    {
        correctPlayerPos = transform.position;
        correctPlayerRot = transform.rotation;
        Application.targetFrameRate = 60;
        Stage = GameObject.Find("Main Camera").transform.Find("Stage").transform;
        Players = Stage.Find("Players");

        for(int i = 0; i < Players.childCount; i++)
        {
            if(Players.GetChild(i).Find("Tank") && Players.GetChild(i).Find("Tank").GetComponent<UnitController>())
                Players.GetChild(i).Find("Tank").GetComponent<UnitController>().FreezePosition(Time.timeSinceLevelLoad, 1f);
        }
    }

    void Start ()
    {
        transform.position = correctPlayerPos;
        transform.rotation = correctPlayerRot;
        if (transform)
        {
            Vector2 explosionPos = new Vector2(transform.position.x, transform.position.y);
            Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, (float)ExplosionRadius);
            if (!this.photonView.isMine)
            {
                return;
            }
            for (int i = 0; i < colliders.Length; i++)
            {
                if (colliders[i].GetComponent<UnitController>())
                    colliders[i].gameObject.GetPhotonView().RPC("GetDamage", PhotonTargets.All, ExplosionDmg);
                    //colliders[i].GetComponent<UnitController>().GetDamage(ExplosionDmg);
                if (colliders[i].GetComponent<DestructibleSprite>())
                {
                    float[] parameters = { explosionPos.x, explosionPos.y, ExplosionRadius };
                    colliders[i].gameObject.GetPhotonView().RPC("ApplyDamage", PhotonTargets.All, parameters);
                    //colliders[i].GetComponent<DestructibleSprite>().ApplyDamage(explosionPos, ExplosionRadius);
                }
            }
        }
    }

    public void SetParentBulletId(int parentBulletId)
    {
        ParentBulletId = parentBulletId;
    }

    public void SetParentTankId(int parentTankId)
    {
        ParentTankId = parentTankId;
    }

    public void SetExplosionRadius(int value)
    {
        ExplosionRadius = value;
    }

    public void SetExplosionDamage(int value)
    {
        ExplosionDmg = value;
    }
    
    public void OnDestroy()
    {
        for (int i = 0; i < Players.childCount; i++)
        {
            if (Players.GetChild(i).Find("Tank"))
            {
                Players.GetChild(i).Find("Tank").GetComponent<UnitController>().UnFreezePosition();
            }
        }
        if (Stage && Stage.GetComponent<StageEnvironment>())
        {
            Transform tank = Stage.GetComponent<StageEnvironment>().GetPlayerInfo(ParentTankId).Unit.TransformUnit;
            if(tank && tank.GetComponent<UnitController>())
            {
                tank.GetComponent<UnitController>().RemoveBullet(ParentBulletId);
            }
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
}
