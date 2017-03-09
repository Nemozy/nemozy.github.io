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
        private string secretKey = "h5shkssdprkflvurp3402jtfp65k19fv";
        //private byte[] key = new byte[8] { 28, 58, 33, 15, 93, 231, 76, 24 };
        // private byte[] iv = new byte[8] { 78, 43, 61, 94, 39, 54, 8, 101 };

        Dictionary<string, SerializationStruct.WeaponNonCrypt> AllWeapons = new Dictionary<string, SerializationStruct.WeaponNonCrypt>();

        public Form1()
        {
            InitializeComponent();
            LoadAllItems();
        }

        private void LoadXML_Button_Click(object sender, EventArgs e)
        {
            LoadXML();
            LoadAllItems();
        }

        private void SaveXML_Button_Click(object sender, EventArgs e)
        {
            SaveXML();
        }

        private void Names_comboBox_SelectedIndexChanged(object sender, EventArgs e)
        {
            ShowSelectedItem();
        }
        private void Save_button_Click(object sender, EventArgs e)
        {
            SerializationStruct.WeaponNonCrypt weapon = new SerializationStruct.WeaponNonCrypt(Name_textBox.Text, SlotName_textBox.Text);
            weapon.Blocked = bool.Parse(Blocked_comboBox.Text);
            weapon.UpgradeLvL = int.Parse(UpgradeLvL_textBox.Text);
            weapon.MinDmg = int.Parse(MinDmg_textBox.Text);
            weapon.MaxDmg = int.Parse(MaxDmg_textBox.Text);
            weapon.Count = int.Parse(Count_textBox.Text);
            weapon.DmgRadius = int.Parse(DmgRadius_textBox.Text);
            weapon.Endless = bool.Parse(Endless_comboBox.Text);

            if(Names_comboBox.SelectedItem != null && AllWeapons.ContainsKey(Names_comboBox.SelectedItem as string))
            {
                AllWeapons.Remove(Names_comboBox.SelectedItem as string);
                AllWeapons.Add(weapon.Name, weapon);
            }
            else
                AllWeapons.Add(weapon.Name, weapon);
            LoadAllItems();
        }

        private void Delete_button_Click(object sender, EventArgs e)
        {
            if (AllWeapons.ContainsKey(Names_comboBox.SelectedItem as string))
            {
                AllWeapons.Remove(Names_comboBox.SelectedItem as string);
            }
            LoadAllItems();
        }

        private void Add_button_Click(object sender, EventArgs e)
        {
            if (!string.IsNullOrEmpty(Name_textBox.Text))
            {
                SerializationStruct.WeaponNonCrypt weapon = new SerializationStruct.WeaponNonCrypt(Name_textBox.Text, SlotName_textBox.Text);
                weapon.Blocked = bool.Parse(Blocked_comboBox.Text);
                weapon.UpgradeLvL = int.Parse(UpgradeLvL_textBox.Text);
                weapon.MinDmg = int.Parse(MinDmg_textBox.Text);
                weapon.MaxDmg = int.Parse(MaxDmg_textBox.Text);
                weapon.Count = int.Parse(Count_textBox.Text);
                weapon.DmgRadius = int.Parse(DmgRadius_textBox.Text);
                weapon.Endless = bool.Parse(Endless_comboBox.Text);

                if (!AllWeapons.ContainsKey(Name_textBox.Text as string))
                {
                    AllWeapons.Add(weapon.Name, weapon);
                }
                LoadAllItems();
                Names_comboBox.SelectedItem = Name_textBox.Text;
            }
        }

        private void UpgradeLvL_textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar <= 47 || e.KeyChar >= 58) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void MinDmg_textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar <= 47 || e.KeyChar >= 58) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void MaxDmg_textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar <= 47 || e.KeyChar >= 58) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void Count_textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar <= 47 || e.KeyChar >= 58) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void DmgRadius_textBox_KeyPress(object sender, KeyPressEventArgs e)
        {
            if ((e.KeyChar <= 47 || e.KeyChar >= 58) && e.KeyChar != 8)
                e.Handled = true;
        }

        private void LoadAllItems()
        {
            Names_comboBox.Items.Clear();
            foreach (string key in AllWeapons.Keys)
            {
                Names_comboBox.Items.Add(key);
                Names_comboBox.SelectedItem = key;
            }
            /*if (Names_comboBox.Items.Count > 0)
            {
                Names_comboBox.SelectedIndex = 0;
                Names_comboBox.SelectedText = Names_comboBox.Items.[Names_comboBox.SelectedIndex];
            }*/

            ShowSelectedItem();
        }

        private void ShowSelectedItem()
        {
            if (Names_comboBox.Items.Count > 0)
            {
                Name_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].Name;
                SlotName_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].SlotName;
                Blocked_comboBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].Blocked.ToString().ToUpper();
                UpgradeLvL_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].UpgradeLvL.ToString();
                MinDmg_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].MinDmg.ToString();
                MaxDmg_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].MaxDmg.ToString();
                Count_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].Count.ToString();
                DmgRadius_textBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].DmgRadius.ToString();
                Endless_comboBox.Text = AllWeapons[Names_comboBox.SelectedItem as string].Endless.ToString().ToUpper();
            }
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
                        using (StreamReader reader = new StreamReader(fileStream))
                        {
                            strRead = reader.ReadToEnd();
                        }
                    }
                    
                    SerializationStruct.WeaponsInventoryInfoLoading xmlFile = new SerializationStruct.WeaponsInventoryInfoLoading();
                    using (TextReader reader = new StringReader(strRead))
                    {
                        XmlSerializer formatter = new XmlSerializer(typeof(SerializationStruct.WeaponsInventoryInfoLoading));
                        xmlFile = (SerializationStruct.WeaponsInventoryInfoLoading)formatter.Deserialize(reader);
                    }

                    AllWeapons = new Dictionary<string, SerializationStruct.WeaponNonCrypt>();

                    for (int i = 0; i < xmlFile.Weapons.Count; i++)
                    {
                        SerializationStruct.WeaponNonCrypt bullet = new SerializationStruct.WeaponNonCrypt(CryptorEngine.DecryptString(xmlFile.Weapons[i].Name, secretKey), CryptorEngine.DecryptString(xmlFile.Weapons[i].SlotName, secretKey));
                        bullet.Endless = bool.Parse(CryptorEngine.DecryptString(xmlFile.Weapons[i].Endless, secretKey));
                        bullet.MaxDmg = int.Parse(CryptorEngine.DecryptString(xmlFile.Weapons[i].MaxDmg, secretKey));
                        bullet.MinDmg = int.Parse(CryptorEngine.DecryptString(xmlFile.Weapons[i].MinDmg, secretKey));
                        bullet.UpgradeLvL = int.Parse(CryptorEngine.DecryptString(xmlFile.Weapons[i].UpgradeLvL, secretKey));
                        bullet.DmgRadius = int.Parse(CryptorEngine.DecryptString(xmlFile.Weapons[i].DmgRadius, secretKey));

                        AllWeapons.Add(CryptorEngine.DecryptString(xmlFile.Weapons[i].Name, secretKey), bullet);
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

            foreach (string key in AllWeapons.Keys)
            {
                SerializationStruct.WeaponCrypt wc = new SerializationStruct.WeaponCrypt();
                wc.Name = CryptorEngine.EncryptString(AllWeapons[key].Name, secretKey);
                wc.SlotName = CryptorEngine.EncryptString(AllWeapons[key].SlotName, secretKey);
                wc.Blocked = CryptorEngine.EncryptString(AllWeapons[key].Blocked.ToString(), secretKey);
                wc.Count = CryptorEngine.EncryptString(AllWeapons[key].Count.ToString(), secretKey);
                wc.Endless = CryptorEngine.EncryptString(AllWeapons[key].Endless.ToString(), secretKey);
                wc.UpgradeLvL = CryptorEngine.EncryptString(AllWeapons[key].UpgradeLvL.ToString(), secretKey);
                wc.DmgRadius = CryptorEngine.EncryptString(AllWeapons[key].DmgRadius.ToString(), secretKey);
                wc.MinDmg = CryptorEngine.EncryptString(AllWeapons[key].MinDmg.ToString(), secretKey);
                wc.MaxDmg = CryptorEngine.EncryptString(AllWeapons[key].MaxDmg.ToString(), secretKey);

                ach.Weapons.Add(wc);
            }

            /*ts = new SerializationStruct.WeaponCrypt();
            ts.Name = CryptorEngine.EncryptString("test_name_2", secretKey);
            ts.Blocked = CryptorEngine.EncryptString("true", secretKey);
            ts.Count = CryptorEngine.EncryptString("10", secretKey);
            ts.Endless = CryptorEngine.EncryptString("false", secretKey);
            ts.UpgradeLvL = CryptorEngine.EncryptString("0", secretKey);
            ts.MinDmg = CryptorEngine.EncryptString("25", secretKey);
            ts.MaxDmg = CryptorEngine.EncryptString("40", secretKey);

            ach.Weapons.Add(ts);

            ts = new SerializationStruct.WeaponCrypt();
            ts.Name = CryptorEngine.EncryptString("test_name_3", secretKey);
            ts.Blocked = CryptorEngine.EncryptString("true", secretKey);
            ts.Count = CryptorEngine.EncryptString("3", secretKey);
            ts.Endless = CryptorEngine.EncryptString("false", secretKey);
            ts.UpgradeLvL = CryptorEngine.EncryptString("0", secretKey);
            ts.MinDmg = CryptorEngine.EncryptString("20", secretKey);
            ts.MaxDmg = CryptorEngine.EncryptString("40", secretKey);

            ach.Weapons.Add(ts);*/

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
                            byte[] bytes = Encoding.UTF8.GetBytes(/*CryptorEngine.Encrypt(*/strWrite.ToString()/*, true)*/);
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
        
        /*private string encrypt(string s)
        {
            byte[] inputbuffer = Encoding.Unicode.GetBytes(s);
            byte[] outputBuffer = DES.Create().CreateEncryptor(key, iv).TransformFinalBlock(inputbuffer, 0, inputbuffer.Length);
            return System.Convert.ToBase64String(outputBuffer);
        }*/

    }
}
