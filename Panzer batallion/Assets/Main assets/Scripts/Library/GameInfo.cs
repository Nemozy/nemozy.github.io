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
        /*private static string secretKey = "h5shkss731gpw810d4";//"secret";
        private static byte[] key = new byte[8] { 28, 58, 33, 10, 93, 231, 76, 24 };
        private static byte[] iv = new byte[8] { 78, 43, 61, 94, 39, 54, 8, 101 };*/
        private string secretKey = "h5shkssdprkflvurp3402jtfp65k19fv";

        private const string initVector = "h5shkss731gpw810";
        // This constant is used to determine the keysize of the encryption algorithm
        private const int keysize = 256;

       /* private static string encrypt(string s)
        {
            byte[] inputbuffer = Encoding.Unicode.GetBytes(s);
            byte[] outputBuffer = DES.Create().CreateEncryptor(key, iv).TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
            return System.Convert.ToBase64String(outputBuffer);
        }*/

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

            TextAsset textAsset = (TextAsset)Resources.Load("Stages/XMLs/WeaponsDefault");
            if(textAsset && !string.IsNullOrEmpty(textAsset.text))
                AllWeapons = DeXml(textAsset.text);

            string adad = "";
            /*for (int i = 0; i < weapons.Weapons.Count; i++)
            {
                Weapon bullet = new Weapon(weapons.Weapons[i].Name);
                bullet.Endless = bool.Parse(encrypt(weapons.Weapons[i].Endless));
                bullet.MaxDmg = int.Parse(encrypt(weapons.Weapons[i].MaxDmg));
                bullet.MinDmg = int.Parse(encrypt(weapons.Weapons[i].MinDmg));
                bullet.UpgradeLvL = int.Parse(encrypt(weapons.Weapons[i].UpgradeLvL));

                AllWeapons.Add(weapons.Weapons[i].Name, bullet);
            }*/
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