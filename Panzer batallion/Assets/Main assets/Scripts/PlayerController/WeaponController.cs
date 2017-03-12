using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponController: MonoBehaviour
{
    public Transform ammoNeutralParent;
    public Transform Owner;
    public Transform Stage;
    string NameBullet;
    private int RadiusDmg = 15;

    public WeaponController(Transform owner, string nameBullet)
    {
        Owner = owner;
        NameBullet = nameBullet;
        Stage = GameObject.Find("Main Camera").transform.Find("Stage");
        ammoNeutralParent = Stage.Find("NeutralObjects").Find("Bullets").transform;
    }

    public void SetWeapon(int radiusDmg)
    {
        RadiusDmg = radiusDmg;
    }

    public Bullet StartFire(Vector3 vecPos, Vector2 vecFire, string player)
    {
        Object bullet = Resources.Load("Models/Weapons/Bullets/" + NameBullet);
        GameObject inst = Instantiate(bullet, Owner.transform.position, Quaternion.identity) as GameObject;
        inst.transform.SetParent(ammoNeutralParent);
        inst.name = "Bullet";
        inst.transform.position = vecPos;
        inst.GetComponent<Bullet>().SetId(Stage.GetComponent<StageEnvironment>().GetGameObjectId(), Owner.GetComponent<UnitController>().GetId());
        inst.GetComponent<Bullet>().SetParentName(player);
        inst.GetComponent<Bullet>().SetExplosionName("Explosion", 1, RadiusDmg);
        //inst.transform.position = Owner.transform.position;

        inst.GetComponent<Rigidbody2D>().AddForce(vecFire * 10000, ForceMode2D.Force);
        if(inst && inst.GetComponent<Bullet>())
            return inst.GetComponent<Bullet>();

        return null;
    }

    /*void Start ()
    {
		
	}
	
	void Update ()
    {
		
	}*/
}
