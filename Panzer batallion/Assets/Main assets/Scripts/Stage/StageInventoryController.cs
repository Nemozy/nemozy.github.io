using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageInventoryController : Photon.MonoBehaviour
{
    public Transform Stage;
    private int DmgRadius = 15;
    private int DmgMin = 10;
    private int DmgMax = 15;

    void Start()
    {
        Application.targetFrameRate = 60;
        Dictionary<string, GameInfo.Weapon> Weapons = Stage.GetComponent<StageEnvironment>().GetWeaponsDefault_SlotKey();
        if (Weapons.ContainsKey("Item_1"))
        {
            Transform cur_tr;
            for (int i = 0; i < this.transform.childCount - 2; i++)
            {
                cur_tr = this.transform.GetChild(i);
                cur_tr.Find("Selected").gameObject.SetActive(false);
            }
            cur_tr = this.transform.GetChild(0);
            cur_tr.Find("Selected").gameObject.SetActive(true);

            DmgRadius = Weapons["Item_1"].DmgRadius;
            DmgMin = Weapons["Item_1"].MinDmg;
            DmgMax = Weapons["Item_1"].MaxDmg;

            this.transform.FindChild("Item_info").FindChild("Text").GetComponent<UnityEngine.UI.Text>().text = "Dmg " + DmgMin.ToString() + " - " + DmgMax.ToString() + "\n" + "Max range " + DmgRadius.ToString();
        }
    }

    public void WeaponPick(GameObject value)
    {
        Dictionary<string, GameInfo.Weapon> Weapons = Stage.GetComponent<StageEnvironment>().GetWeaponsDefault_SlotKey();

        if (Weapons.ContainsKey(value.name))
        {
            for (int i = 0; i < this.transform.childCount - 2; i++)
            {
                Transform cur_tr = this.transform.GetChild(i);
                cur_tr.Find("Selected").gameObject.SetActive(false);
            }
            value.transform.Find("Selected").gameObject.SetActive(true);

            DmgRadius = Weapons[value.name].DmgRadius;
            DmgMin = Weapons[value.name].MinDmg;
            DmgMax = Weapons[value.name].MaxDmg;
        }

        this.transform.FindChild("Item_info").FindChild("Text").GetComponent<UnityEngine.UI.Text>().text = "Dmg " + DmgMin.ToString() + " - " + DmgMax.ToString() + "\n" + "Max range " + DmgRadius.ToString();
    }

    public void AcceptWeapon()
    {
        if (Stage)
        {
            Stage.GetComponent<StageEnvironment>().SetWeapon(DmgRadius, DmgMin, DmgMax);
        }
    }
}
