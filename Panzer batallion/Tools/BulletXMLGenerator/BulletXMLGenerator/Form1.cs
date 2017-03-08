using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.Xml;
using System.Xml.Serialization;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using System.Security.Cryptography;

namespace BulletXMLGenerator
{
    public partial class Form1 : Form
    {
        private string secretKey = "h5shkss731gpw810d4";//"secret";
        private byte[] key = new byte[8] { 28, 58, 33, 10, 93, 231, 76, 24 };
        private byte[] iv = new byte[8] { 78, 43, 61, 94, 39, 54, 8, 101 };

        public Form1()
        {
            InitializeComponent();
        }

        private void LoadXML_Button_Click(object sender, EventArgs e)
        {
            LoadXML();
        }

        private void SaveXML_Button_Click(object sender, EventArgs e)
        {
            SaveXML();
        }

        public void LoadXML()
        {
            if (openXMLFileDialog.ShowDialog() == DialogResult.OK)
            {
                string path = openXMLFileDialog.FileName;
                if (File.Exists(path))
                {
                    string strRead = "";
                    using (var fileStream = new FileStream(openXMLFileDialog.FileName, FileMode.Open))
                    {
                        using (BinaryReader reader = new BinaryReader(fileStream))
                        {
                            strRead = reader.ReadString();
                        }
                    }

                    SerializationStruct.WeaponsInventoryInfoLoading xmlFile = new SerializationStruct.WeaponsInventoryInfoLoading();
                    using (TextReader reader = new StringReader(CryptorEngine.Decrypt(strRead, true)))
                    {
                        XmlSerializer formatter = new XmlSerializer(typeof(SerializationStruct.WeaponsInventoryInfoLoading));
                        xmlFile = (SerializationStruct.WeaponsInventoryInfoLoading)formatter.Deserialize(reader);
                    }

                    Dictionary<string, SerializationStruct.WeaponNonCrypt> AllWeapons = new Dictionary<string, SerializationStruct.WeaponNonCrypt>();

                    for (int i = 0; i < xmlFile.Weapons.Count; i++)
                    {
                        SerializationStruct.WeaponNonCrypt bullet = new SerializationStruct.WeaponNonCrypt(xmlFile.Weapons[i].Name);
                        bullet.Endless = bool.Parse(CryptorEngine.Decrypt(xmlFile.Weapons[i].Endless, true));
                        bullet.MaxDmg = int.Parse(CryptorEngine.Decrypt(xmlFile.Weapons[i].MaxDmg, true));
                        bullet.MinDmg = int.Parse(CryptorEngine.Decrypt(xmlFile.Weapons[i].MinDmg, true));
                        bullet.UpgradeLvL = int.Parse(CryptorEngine.Decrypt(xmlFile.Weapons[i].UpgradeLvL, true));

                        AllWeapons.Add(xmlFile.Weapons[i].Name, bullet);
                    }
                }
            }
        }

        public void SaveXML()
        {
            XmlSerializer xmls = new XmlSerializer(typeof(SerializationStruct.WeaponsInventoryInfoLoading));
            XmlSerializerNamespaces ns = new XmlSerializerNamespaces();
            ns.Add("", "");
            XmlWriterSettings settings = new XmlWriterSettings { OmitXmlDeclaration = true, Indent = true };
            SerializationStruct.WeaponsInventoryInfoLoading ach = new SerializationStruct.WeaponsInventoryInfoLoading();

            SerializationStruct.WeaponCrypt ts = new SerializationStruct.WeaponCrypt();
            ts.Name = CryptorEngine.Encrypt("test_name_1", true);
            ts.Blocked = CryptorEngine.Encrypt("true", true);
            ts.Count = CryptorEngine.Encrypt("999", true);
            ts.Endless = CryptorEngine.Encrypt("true", true);
            ts.UpgradeLvL = CryptorEngine.Encrypt("0", true);
            ts.MinDmg = CryptorEngine.Encrypt("5", true);
            ts.MaxDmg = CryptorEngine.Encrypt("10", true);

            ach.Weapons.Add(ts);

            ts = new SerializationStruct.WeaponCrypt();
            ts.Name = CryptorEngine.Encrypt("test_name_2", true);
            ts.Blocked = CryptorEngine.Encrypt("true", true);
            ts.Count = CryptorEngine.Encrypt("10", true);
            ts.Endless = CryptorEngine.Encrypt("false", true);
            ts.UpgradeLvL = CryptorEngine.Encrypt("0", true);
            ts.MinDmg = CryptorEngine.Encrypt("25", true);
            ts.MaxDmg = CryptorEngine.Encrypt("40", true);

            ach.Weapons.Add(ts);

            ts = new SerializationStruct.WeaponCrypt();
            ts.Name = CryptorEngine.Encrypt("test_name_3", true);
            ts.Blocked = CryptorEngine.Encrypt("true", true);
            ts.Count = CryptorEngine.Encrypt("3", true);
            ts.Endless = CryptorEngine.Encrypt("false", true);
            ts.UpgradeLvL = CryptorEngine.Encrypt("0", true);
            ts.MinDmg = CryptorEngine.Encrypt("20", true);
            ts.MaxDmg = CryptorEngine.Encrypt("40", true);

            ach.Weapons.Add(ts);

            if (saveXMLFileDialog.ShowDialog() == DialogResult.OK)
            {
                if (File.Exists(saveXMLFileDialog.FileName))
                {
                    File.Delete(saveXMLFileDialog.FileName);
                    File.Create(saveXMLFileDialog.FileName).Close();
                    using (var stream = File.OpenWrite(saveXMLFileDialog.FileName))
                    {
                        //string wrte = ns.ToString();
                        StringBuilder strWrite = new StringBuilder();
                        using (var xmlWriter = XmlWriter.Create(strWrite))
                        {
                            xmls.Serialize(xmlWriter, ach, ns);

                            xmlWriter.Close();
                        }

                        if (stream.CanWrite)
                        {
                            byte[] bytes = Encoding.UTF8.GetBytes(CryptorEngine.Encrypt(strWrite.ToString(), true));
                            stream.Write(bytes, 0, bytes.Count());
                        }
                        /*using (var xmlWriter = XmlWriter.Create(stream, settings))
                        {
                            xmls.Serialize(xmlWriter, ach, ns);

                            xmlWriter.Close();
                        }*/

                        stream.Close();
                    }
                    /*using (var stream = File.OpenRead(saveXMLFileDialog.FileName))
                    {
                        using (var xmlWriter = XmlWriter.Create(stream, settings))
                        {
                            xmls.Serialize(xmlWriter, ach, ns);

                            xmlWriter.Close();
                        }
                    }
                        string fileText = */
                }
            }
        }

        public SerializationStruct.WeaponsInventoryInfoLoading LoadFile(string text)
        {
            SerializationStruct.WeaponsInventoryInfoLoading weapons_return = new SerializationStruct.WeaponsInventoryInfoLoading();
            using (FileStream fs = new FileStream(text, FileMode.Open))
            {

                // передаем в конструктор тип класса
                XmlSerializer formatter = new XmlSerializer(typeof(SerializationStruct.WeaponsInventoryInfoLoading));
                weapons_return = (SerializationStruct.WeaponsInventoryInfoLoading)formatter.Deserialize(fs);

            }

            /*XmlSerializer serializer = new XmlSerializer(typeof(SerializationStruct.WeaponsInventoryInfoLoading));
            StringReader reader = new StringReader(text);
            SerializationStruct.WeaponsInventoryInfoLoading weapons_return = serializer.Deserialize(reader) as SerializationStruct.WeaponsInventoryInfoLoading;
            reader.Close();
            */
            return weapons_return;
        }

       /* private string encrypt(string s)
        {
            byte[] inputbuffer = Encoding.Unicode.GetBytes(s);
            byte[] outputBuffer = DES.Create().CreateEncryptor(key, iv).TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
            return System.Convert.ToBase64String(outputBuffer);
        }*/
    }
}
