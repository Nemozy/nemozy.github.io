using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StageInventoryController : MonoBehaviour
{
    public Transform Stage;
    private int DmgRadius = 15;
    private int Dmg = 10;

    void Start ()
    {
		
	}

    public void WeaponPick(GameObject value)
    {
        for (int i = 0; i < this.transform.childCount-2; i++)
        {
            Transform cur_tr = this.transform.GetChild(i);
            cur_tr.Find("Selected").gameObject.SetActive(false);
        }
        value.transform.Find("Selected").gameObject.SetActive(true);

        if (value.name.Equals("Item_1"))
        {
            DmgRadius = 15;
            Dmg = 10;
        }
        else if (value.name.Equals("Item_2"))
        {
            DmgRadius = 25;
            Dmg = 25;
        }
        else if(value.name.Equals("Item_11"))
        {
            DmgRadius = 30;
            Dmg = 30;
        }
        else
        {
            DmgRadius = 15;
            Dmg = 15;
        }
    }

    public void AcceptWeapon()
    {
        if(Stage)
        {
            Stage.GetComponent<StageEnvironment>().SetWeapon(DmgRadius, Dmg);
        }
    }
}
