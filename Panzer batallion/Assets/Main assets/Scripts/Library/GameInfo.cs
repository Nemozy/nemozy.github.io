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
        private string secretKey = "h5shkssdprkflvurp3402jtfp65k19fv";
        private const string initVector = "h5shkss731gpw810";
        private const int keysize = 256;

        public Dictionary<string, Weapon> AllWeapons;

        public WeaponsInventoryInfo()
        {
            AllWeapons = new Dictionary<string, Weapon>();

            //Загрузка оружия
            WeaponsInventoryInfoLoading weapons = new WeaponsInventoryInfoLoading();

            TextAsset textAsset = (TextAsset)Resources.Load("Stages/XMLs/WeaponsDefault");
            if(textAsset && !string.IsNullOrEmpty(textAsset.text))
                AllWeapons = DeXml(textAsset.text);
        }

        public Dictionary<string, Weapon> DeXml(string text)
        {
            WeaponsInventoryInfoLoading xmlFile = new WeaponsInventoryInfoLoading();
            using (TextReader reader = new StringReader(text))
            {
                XmlSerializer formatter = new XmlSerializer(typeof(WeaponsInventoryInfoLoading));
                xmlFile = (WeaponsInventoryInfoLoading)formatter.Deserialize(reader);
            }

            Dictionary<string, Weapon> AllWeapons = new Dictionary<string, Weapon>();

            for (int i = 0; i < xmlFile.Weapons.Count; i++)
            {
                Weapon bullet = new Weapon(DecryptString(xmlFile.Weapons[i].Name, secretKey), DecryptString(xmlFile.Weapons[i].SlotName, secretKey));
                bullet.Endless = bool.Parse(DecryptString(xmlFile.Weapons[i].Endless, secretKey));
                bullet.MaxDmg = int.Parse(DecryptString(xmlFile.Weapons[i].MaxDmg, secretKey));
                bullet.MinDmg = int.Parse(DecryptString(xmlFile.Weapons[i].MinDmg, secretKey));
                bullet.UpgradeLvL = int.Parse(DecryptString(xmlFile.Weapons[i].UpgradeLvL, secretKey));
                bullet.Count = int.Parse(DecryptString(xmlFile.Weapons[i].Count, secretKey));
                bullet.DmgRadius = int.Parse(DecryptString(xmlFile.Weapons[i].DmgRadius, secretKey));

                AllWeapons.Add(DecryptString(xmlFile.Weapons[i].Name, secretKey), bullet);
            }

            return AllWeapons;
        }

        //Encrypt
        public string EncryptString(string plainText, string passPhrase)
        {
            byte[] initVectorBytes = Encoding.UTF8.GetBytes(initVector);
            byte[] plainTextBytes = Encoding.UTF8.GetBytes(plainText);
            PasswordDeriveBytes password = new PasswordDeriveBytes(passPhrase, null);
            byte[] keyBytes = password.GetBytes(keysize / 8);
            RijndaelManaged symmetricKey = new RijndaelManaged();
            symmetricKey.Mode = CipherMode.CBC;
            ICryptoTransform encryptor = symmetricKey.CreateEncryptor(keyBytes, initVectorBytes);
            MemoryStream memoryStream = new MemoryStream();
            CryptoStream cryptoStream = new CryptoStream(memoryStream, encryptor, CryptoStreamMode.Write);
            cryptoStream.Write(plainTextBytes, 0, plainTextBytes.Length);
            cryptoStream.FlushFinalBlock();
            byte[] cipherTextBytes = memoryStream.ToArray();
            memoryStream.Close();
            cryptoStream.Close();
            return Convert.ToBase64String(cipherTextBytes);
        }
        
        //Decrypt
        public string DecryptString(string cipherText, string passPhrase)
        {
            byte[] initVectorBytes = Encoding.UTF8.GetBytes(initVector);
            byte[] cipherTextBytes = Convert.FromBase64String(cipherText);
            PasswordDeriveBytes password = new PasswordDeriveBytes(passPhrase, null);
            byte[] keyBytes = password.GetBytes(keysize / 8);
            RijndaelManaged symmetricKey = new RijndaelManaged();
            symmetricKey.Mode = CipherMode.CBC;
            ICryptoTransform decryptor = symmetricKey.CreateDecryptor(keyBytes, initVectorBytes);
            MemoryStream memoryStream = new MemoryStream(cipherTextBytes);
            CryptoStream cryptoStream = new CryptoStream(memoryStream, decryptor, CryptoStreamMode.Read);
            byte[] plainTextBytes = new byte[cipherTextBytes.Length];
            int decryptedByteCount = cryptoStream.Read(plainTextBytes, 0, plainTextBytes.Length);
            memoryStream.Close();
            cryptoStream.Close();
            return Encoding.UTF8.GetString(plainTextBytes, 0, decryptedByteCount);
        }
    }

    [XmlType("WeaponNonCrypt")]
    public class Weapon
    {
        [XmlAttribute("Name")]
        public string Name;

        [XmlAttribute("SlotName")]
        public string SlotName { get; set; }
        [XmlAttribute("Blocked")]
        public bool Blocked { get; set; }
        [XmlAttribute("UpgradeLvL")]
        public int UpgradeLvL { get; set; }
        [XmlAttribute("DmgRadius")]
        public int DmgRadius { get; set; }
        [XmlAttribute("MinDmg")]
        public int MinDmg { get; set; }
        [XmlAttribute("MaxDmg")]
        public int MaxDmg { get; set; }
        [XmlAttribute("Count")]
        public int Count { get; set; }
        [XmlAttribute("Endless")]
        public bool Endless { get; set; }

        public Weapon(string name, string slotName)
        {
            Name = name;
            SlotName = slotName;
            Blocked = true;
            DmgRadius = 0;
            UpgradeLvL = 0;
            MinDmg = 0;
            MaxDmg = 0;
            Count = 0;
            Endless = false;
        }
    }

    [Serializable]
    [XmlRoot("WeaponsInventoryInfoLoading")]
    public class WeaponsInventoryInfoLoading
    {
        [XmlArray("Weapons"), XmlArrayItem("Weapon")]
        public List<WeaponCrypt> Weapons = new List<WeaponCrypt>();
    }

    [XmlType("Weapon")]
    public class WeaponCrypt
    {
        [XmlAttribute("Name")]
        public string Name;

        [XmlAttribute("SlotName")]
        public string SlotName { get; set; }
        [XmlAttribute("Blocked")]
        public string Blocked { get; set; }
        [XmlAttribute("UpgradeLvL")]
        public string UpgradeLvL { get; set; }
        [XmlAttribute("DmgRadius")]
        public string DmgRadius { get; set; }
        [XmlAttribute("MinDmg")]
        public string MinDmg { get; set; }
        [XmlAttribute("MaxDmg")]
        public string MaxDmg { get; set; }
        [XmlAttribute("Count")]
        public string Count { get; set; }
        [XmlAttribute("Endless")]
        public string Endless { get; set; }
    }
}