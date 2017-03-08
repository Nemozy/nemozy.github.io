using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Xml.Serialization;
using System.Text;
using System.Security.Cryptography;

public class GameInfo
{
    public class WeaponsInventoryInfo
    {
        private static string secretKey = "h5shkss731gpw810d4";//"secret";
        private static byte[] key = new byte[8] { 28, 58, 33, 10, 93, 231, 76, 24 };
        private static byte[] iv = new byte[8] { 78, 43, 61, 94, 39, 54, 8, 101 };

        private static string encrypt(string s)
        {
            byte[] inputbuffer = Encoding.Unicode.GetBytes(s);
            byte[] outputBuffer = DES.Create().CreateEncryptor(key, iv).TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
            return System.Convert.ToBase64String(outputBuffer);
        }

        public Dictionary<string, Weapon> AllWeapons;

        public WeaponsInventoryInfo()
        {
            AllWeapons = new Dictionary<string, Weapon>();

            //Загрузка оружия
            WeaponsInventoryInfoLoading weapons = new WeaponsInventoryInfoLoading();
            //Подгрузить XML и распарсить её. Потом перессчитать оружие.
            //string datapath = Application.dataPath + "/Resources/SavedData" + Application.loadedLevel + ".xml";

            /*if (File.Exists(datapath))  // если файл сохранения уже существует
                weapons = DeXml(datapath);*/

            TextAsset textAsset = (TextAsset)Resources.Load("Stages/XMLs/WeaponsDefault.xml");
            if(textAsset && !string.IsNullOrEmpty(textAsset.text))
                DeXml(textAsset.text);

            for (int i = 0; i < weapons.Weapons.Count; i++)
            {
                Weapon bullet = new Weapon(weapons.Weapons[i].Name);
                bullet.Endless = bool.Parse(encrypt(weapons.Weapons[i].Endless));
                bullet.MaxDmg = int.Parse(encrypt(weapons.Weapons[i].MaxDmg));
                bullet.MinDmg = int.Parse(encrypt(weapons.Weapons[i].MinDmg));
                bullet.UpgradeLvL = int.Parse(encrypt(weapons.Weapons[i].UpgradeLvL));

                AllWeapons.Add(weapons.Weapons[i].Name, bullet);
            }
        }
    }

    [XmlType("Weapon")]
    public class Weapon
    {
        [XmlAttribute("Name")]
        public string Name;

        [XmlAttribute("Blocked")]
        public bool Blocked { get; set; }
        [XmlAttribute("UpgradeLvL")]
        public int UpgradeLvL { get; set; }
        [XmlAttribute("MinDmg")]
        public int MinDmg { get; set; }
        [XmlAttribute("MaxDmg")]
        public int MaxDmg { get; set; }
        [XmlAttribute("Count")]
        public int Count { get; set; }
        [XmlAttribute("Endless")]
        public bool Endless { get; set; }

        public Weapon(string name)
        {
            Name = name;
            Blocked = true;
            UpgradeLvL = 0;
            MinDmg = 0;
            MaxDmg = 0;
            Count = 0;
            Endless = false;
        }
    }

    [Serializable]
    [XmlRoot("WeaponsInventoryInfo")]
    public class WeaponsInventoryInfoLoading
    {
        [XmlArray("Weapons")]
        [XmlArrayItem("Weapon")]
        public List<WeaponCrypt> Weapons = new List<WeaponCrypt>();
    }

    public class WeaponCrypt
    {
        [XmlAttribute("Name")]
        public string Name;

        [XmlAttribute("Blocked")]
        public string Blocked { get; set; }
        [XmlAttribute("UpgradeLvL")]
        public string UpgradeLvL { get; set; }
        [XmlAttribute("MinDmg")]
        public string MinDmg { get; set; }
        [XmlAttribute("MaxDmg")]
        public string MaxDmg { get; set; }
        [XmlAttribute("Count")]
        public string Count { get; set; }
        [XmlAttribute("Endless")]
        public string Endless { get; set; }
    }

    static public void SaveXml(WeaponsInventoryInfoLoading state, string datapath)
    {

        Type[] extraTypes = { typeof(Weapon) };
        XmlSerializer serializer = new XmlSerializer(typeof(WeaponsInventoryInfoLoading), extraTypes);

        FileStream fs = new FileStream(datapath, FileMode.Create);
        serializer.Serialize(fs, state);
        fs.Close();

    }

    static public WeaponsInventoryInfoLoading DeXml(string text)
    {
        XmlSerializer serializer = new XmlSerializer(typeof(WeaponsInventoryInfoLoading));
        StringReader reader = new StringReader(text);
        WeaponsInventoryInfoLoading weapons_return = serializer.Deserialize(reader) as WeaponsInventoryInfoLoading;
        reader.Close();

        return weapons_return;
        //Type[] extraTypes = { typeof(Weapon) };
        // XmlSerializer serializer = new XmlSerializer(typeof(WeaponsInventoryInfoLoading), extraTypes);

        //FileStream fs = new FileStream(datapath, FileMode.Open);
        /*text
        WeaponsInventoryInfoLoading state = (WeaponsInventoryInfoLoading)serializer.Deserialize(fs);
        fs.Close();

        return state;*/
    }
}