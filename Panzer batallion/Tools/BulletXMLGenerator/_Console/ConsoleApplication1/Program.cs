using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Collections;
using System.Collections.Generic;

using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Security.Cryptography;

public class MainSerializations
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

    static void Main(string[] args)
    {

        XmlSerializer xmls = new XmlSerializer(typeof(WeaponsInventoryInfoLoading));
        XmlSerializerNamespaces ns = new XmlSerializerNamespaces();
        ns.Add("", "");
        XmlWriterSettings settings = new XmlWriterSettings { OmitXmlDeclaration = true, Indent = true };
        WeaponsInventoryInfoLoading ach = new WeaponsInventoryInfoLoading();

        //ach.Ver = "1";

        WeaponCrypt ts = new WeaponCrypt();
        ts.Name = encrypt("test_name_1");
        ts.Blocked = encrypt("true");
        ts.Count = encrypt("999");
        ts.Endless = encrypt("true");
        ts.UpgradeLvL = encrypt("0");
        ts.MinDmg = encrypt("5");
        ts.MaxDmg = encrypt("10");

        ach.Weapons.Add(ts);

        ts = new WeaponCrypt();
        ts.Name = encrypt("test_name_2");
        ts.Blocked = encrypt("true");
        ts.Count = encrypt("10");
        ts.Endless = encrypt("false");
        ts.UpgradeLvL = encrypt("0");
        ts.MinDmg = encrypt("25");
        ts.MaxDmg = encrypt("40");

        ach.Weapons.Add(ts);

        ts = new WeaponCrypt();
        ts.Name = encrypt("test_name_3");
        ts.Blocked = encrypt("true");
        ts.Count = encrypt("3");
        ts.Endless = encrypt("false");
        ts.UpgradeLvL = encrypt("0");
        ts.MinDmg = encrypt("20");
        ts.MaxDmg = encrypt("40");

        ach.Weapons.Add(ts);

        using (var stream = File.OpenWrite(Path.Combine("Dat3.xml")))
        {
            using (var xmlWriter = XmlWriter.Create(stream, settings))
            {
                xmls.Serialize(xmlWriter, ach, ns);
            }
        }

        Console.Write("result");

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
}