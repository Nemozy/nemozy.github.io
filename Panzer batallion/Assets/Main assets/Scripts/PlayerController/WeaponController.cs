using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponController : Photon.MonoBehaviour
{
    public Transform ammoNeutralParent;
    public Transform Owner;
    public Transform Stage;
    string NameBullet;
    private int RadiusDmg = 15;

    public WeaponController(Transform owner, string nameBullet)
    {
        Application.targetFrameRate = 60;
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
        GameObject inst = PhotonNetwork.Instantiate(NameBullet, Owner.transform.position, Quaternion.identity, 0);

        string[] parameters = { "Bullet", Stage.GetComponent<StageEnvironment>().GetGameObjectId().ToString(), Owner.GetComponent<UnitController>().GetId().ToString(), player, "Explosion", "1", RadiusDmg.ToString() };
        inst.GetPhotonView().RPC("SetInit", PhotonTargets.All, parameters);
        inst.GetPhotonView().RPC("SetPosition", PhotonTargets.All, vecPos);
        inst.GetPhotonView().RPC("SetForce", PhotonTargets.All, vecFire);

        return null;
    }
}
