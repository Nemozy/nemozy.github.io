using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Security.Cryptography;

namespace BulletXMLGenerator
{
    public class SerializationStruct
    {

        [XmlType("WeaponNonCrypt")]
        public class WeaponNonCrypt
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

            public WeaponNonCrypt(string name, string slotName)
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
}
