using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    //[PunRPC]
    void SetParent(int[] id)
    {
        //PhotonView view = PhotonView.Find(id[0]);
        this.gameObject.name = "Player_" + id[1].ToString();
        this.transform.SetParent(/*view.transform.Find("Players")*/GameObject.Find("Main Camera").transform.Find("Stage").Find("Players"));
        this.transform.GetComponent<RectTransform>().offsetMin = new Vector2(0, 0);
        this.transform.GetComponent<RectTransform>().offsetMax = new Vector2(0, 0);
    }
}
