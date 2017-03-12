using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    private int Id;
    private int ParentTankId;
    private string NameExplosion;
    private float Delay;
    private int ScaleSizeExplosion;
    private string PlayerName;
    private float DisableDuration = 0;

    void Awake()
    {
        Application.targetFrameRate = 60;
    }

    void Start ()
    {

    }
	
	void Update ()
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
        DisableDuration = Time.timeSinceLevelLoad;
        Id = id;
        ParentTankId = tankId;
    }
    public void SetParentName(string pl)
    {
        DisableDuration = Time.timeSinceLevelLoad;
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
        if (coll.transform.parent.name.ToUpper().Equals(PlayerName.ToUpper()) && Time.timeSinceLevelLoad - DisableDuration < 2)
        {
            return;
        }

        if (coll != null && !coll.gameObject.name.ToUpper().Contains("BULLET") && !coll.gameObject.name.ToUpper().Contains("EXPLOSION"))
        {
            Object bullet = Resources.Load("Models/Weapons/Explosions/ToonExplosion/Prefabs/" + NameExplosion);
            GameObject inst = Instantiate(bullet, this.transform.position, Quaternion.identity) as GameObject;
            inst.transform.SetParent(this.transform.parent);
            inst.transform.localScale *= ScaleSizeExplosion;
            if(inst.GetComponent<ExplosionBullet>())
            {
                inst.GetComponent<ExplosionBullet>().SetExplosionRadius(ScaleSizeExplosion);
                inst.GetComponent<ExplosionBullet>().SetParentBulletId(Id);
                inst.GetComponent<ExplosionBullet>().SetParentTankId(ParentTankId);
            }
            DestroyObject(inst, Delay);
            Destroy(this.gameObject);
        }
    }
}
