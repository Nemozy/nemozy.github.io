using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageInventoryController : MonoBehaviour
{
    public Transform Stage;
    private int DmgRadius = 15;
    private int DmgMin = 10;
    private int DmgMax = 15;

    void Start ()
    {
		
	}

    public void WeaponPick(GameObject value)
    {
        Dictionary<string, GameInfo.Weapon> Weapons = Stage.GetComponent<StageEnvironment>().GetWeaponsDefault_SlotKey();
        for (int i = 0; i < this.transform.childCount-2; i++)
        {
            Transform cur_tr = this.transform.GetChild(i);
            cur_tr.Find("Selected").gameObject.SetActive(false);
        }
        value.transform.Find("Selected").gameObject.SetActive(true);

        if (value.name.Equals("Item_1"))
        {
            if (Weapons.ContainsKey("Item_1"))
            {
                DmgRadius = Weapons["Item_1"].DmgRadius;
                DmgMin = Weapons["Item_1"].MinDmg;
                DmgMax = Weapons["Item_1"].MaxDmg;
            }
            /*int ind = 0;
            foreach (string key in Weapons.Keys)
            {
                ind++;
                if (ind == 1)
                {
                    Dmg = Weapons[key].MinDmg;
                }
            }
            DmgRadius = 15;*/
            //Dmg = 10;
        }
        else if (value.name.Equals("Item_2"))
        {
            if (Weapons.ContainsKey("Item_2"))
            {
                DmgRadius = Weapons["Item_2"].DmgRadius;
                DmgMin = Weapons["Item_2"].MinDmg;
                DmgMax = Weapons["Item_2"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_3"))
        {
            if (Weapons.ContainsKey("Item_3"))
            {
                DmgRadius = Weapons["Item_3"].DmgRadius;
                DmgMin = Weapons["Item_3"].MinDmg;
                DmgMax = Weapons["Item_3"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_4"))
        {
            if (Weapons.ContainsKey("Item_4"))
            {
                DmgRadius = Weapons["Item_4"].DmgRadius;
                DmgMin = Weapons["Item_4"].MinDmg;
                DmgMax = Weapons["Item_4"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_5"))
        {
            if (Weapons.ContainsKey("Item_5"))
            {
                DmgRadius = Weapons["Item_5"].DmgRadius;
                DmgMin = Weapons["Item_5"].MinDmg;
                DmgMax = Weapons["Item_5"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_6"))
        {
            if (Weapons.ContainsKey("Item_6"))
            {
                DmgRadius = Weapons["Item_6"].DmgRadius;
                DmgMin = Weapons["Item_6"].MinDmg;
                DmgMax = Weapons["Item_6"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_7"))
        {
            if (Weapons.ContainsKey("Item_7"))
            {
                DmgRadius = Weapons["Item_7"].DmgRadius;
                DmgMin = Weapons["Item_7"].MinDmg;
                DmgMax = Weapons["Item_7"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_8"))
        {
            if (Weapons.ContainsKey("Item_8"))
            {
                DmgRadius = Weapons["Item_8"].DmgRadius;
                DmgMin = Weapons["Item_8"].MinDmg;
                DmgMax = Weapons["Item_8"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_9"))
        {
            if (Weapons.ContainsKey("Item_9"))
            {
                DmgRadius = Weapons["Item_9"].DmgRadius;
                DmgMin = Weapons["Item_9"].MinDmg;
                DmgMax = Weapons["Item_9"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_10"))
        {
            if (Weapons.ContainsKey("Item_10"))
            {
                DmgRadius = Weapons["Item_10"].DmgRadius;
                DmgMin = Weapons["Item_10"].MinDmg;
                DmgMax = Weapons["Item_10"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else if (value.name.Equals("Item_11"))
        {
            if (Weapons.ContainsKey("Item_11"))
            {
                DmgRadius = Weapons["Item_11"].DmgRadius;
                DmgMin = Weapons["Item_11"].MinDmg;
                DmgMax = Weapons["Item_11"].MaxDmg;
            }
            /*int ind = 0;
            foreach (string key in Weapons.Keys)
            {
                ind++;
                if (ind == 3)
                {
                    Dmg = Weapons[key].MinDmg;
                }
            }
            DmgRadius = 30;*/
            //Dmg = 30;
        }
        else if (value.name.Equals("Item_12"))
        {
            if (Weapons.ContainsKey("Item_12"))
            {
                DmgRadius = Weapons["Item_12"].DmgRadius;
                DmgMin = Weapons["Item_12"].MinDmg;
                DmgMax = Weapons["Item_12"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
        }
        else
        {
            if (Weapons.ContainsKey("Item_1"))
            {
                DmgRadius = Weapons["Item_1"].DmgRadius;
                DmgMin = Weapons["Item_1"].MinDmg;
                DmgMax = Weapons["Item_1"].MaxDmg;
            }
            /* int ind = 0;
             foreach (string key in Weapons.Keys)
             {
                 ind++;
                 if (ind == 2)
                 {
                     Dmg = Weapons[key].MinDmg;
                 }
             }
             DmgRadius = 25;*/
            //Dmg = 25;
            /*int ind = 0;
            foreach (string key in Weapons.Keys)
            {
                ind++;
                if (ind == 1)
                {
                    Dmg = Weapons[key].MinDmg;
                }
            }
            DmgRadius = 15;*/
        }
        this.transform.FindChild("Item_info").FindChild("Text").GetComponent<UnityEngine.UI.Text>().text = "Dmg " + DmgMin.ToString() + " - " + DmgMax.ToString() + "\n" + "Max range " + DmgRadius.ToString();
    }

    public void AcceptWeapon()
    {
        if(Stage)
        {
            Stage.GetComponent<StageEnvironment>().SetWeapon(DmgRadius, DmgMin, DmgMax);
        }
    }
}
