using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ExplosionBullet : MonoBehaviour
{
    private int ParentBulletId;
    public bool dead = false;
    public int ExplosionRadius = 40; // unity units * 100
    public int ExplosionDmg = 20; // unity units * 100
    private Transform Players;
    private Transform Stage;

    void Awake()
    {
        Stage = GameObject.Find("Main Camera").transform.Find("Stage").transform;
        Players = Stage.Find("Players");

        for(int i = 0; i < Players.childCount; i++)
        {
            if(Players.GetChild(i).Find("Tank") && Players.GetChild(i).Find("Tank").GetComponent<UnitController>())
                Players.GetChild(i).Find("Tank").GetComponent<UnitController>().FreezePosition(Time.timeSinceLevelLoad, 1f);
        }
       // Application.targetFrameRate = 60;
    }

    void Start ()
    {
        if (transform)
        {
            Vector2 explosionPos = new Vector2(transform.position.x, transform.position.y);
            Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, (float)ExplosionRadius);

            //Debug.Log(colliders.Length);
            for (int i = 0; i < colliders.Length; i++)
            {
                if (colliders[i].GetComponent<UnitController>())
                    colliders[i].GetComponent<UnitController>().GetDamage(ExplosionDmg);
                if (colliders[i].GetComponent<DestructibleSprite>())
                    colliders[i].GetComponent<DestructibleSprite>().ApplyDamage(explosionPos, ExplosionRadius);
            }
        }
    }

    public void SetParentBulletId(int parentBulletId)
    {
        ParentBulletId = parentBulletId;
    }

    public void SetExplosionRadius(int value)
    {
        ExplosionRadius = value;
    }

    public void SetExplosionDamage(int value)
    {
        ExplosionDmg = value;
    }

    /*void OnCollisionEnter2D(Collision2D coll)
    {
        //Debug.Log(coll.gameObject.name);
        if (transform)
        {
            Vector2 explosionPos = new Vector2(transform.position.x, transform.position.y);
            Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, (float)explosionRadius);

            for (int i = 0; i < colliders.Length; i++)
            {
                if (colliders[i].GetComponent<DestructibleSprite>())
                    colliders[i].GetComponent<DestructibleSprite>().ApplyDamage(explosionPos, explosionRadius);
            }
        }
    }*/
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
            Transform tank = Stage.GetComponent<StageEnvironment>().GetPlayerInfo(ParentBulletId).Unit.TransformUnit;
            if(tank && tank.GetComponent<UnitController>())
            {
                tank.GetComponent<UnitController>().RemoveBullet(ParentBulletId);
            }
        }
    }
    // {
         /*if (transform)
         {
             Vector2 explosionPos = new Vector2(transform.position.x, transform.position.y);
             Collider2D[] colliders = Physics2D.OverlapCircleAll(transform.position, (float)explosionRadius );

            //Debug.Log(colliders.Length);
            for (int i = 0; i < colliders.Length; i++)
             {
                 if (colliders[i].GetComponent<DestructibleSprite>())
                     colliders[i].GetComponent<DestructibleSprite>().ApplyDamage(explosionPos, explosionRadius);
             }
         }*/
     //}
}
