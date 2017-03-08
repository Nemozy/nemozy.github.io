using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.Security.Cryptography;
using System.Configuration;
using System.IO;

namespace BulletXMLGenerator
{
    public class CryptorEngine
    {
        //public static string secretKey = "h5shkss731gpw810d";//"secret";
        /// <summary>
        /// Encrypt a string using dual encryption method. Return a encrypted cipher Text
        /// </summary>
        /// <param name="toEncrypt">string to be encrypted</param>
        /// <param name="useHashing">use hashing? send to for extra secirity</param>
        /// <returns></returns>

        // This size of the IV (in bytes) must = (keysize / 8).  Default keysize is 256, so the IV must be
        // 32 bytes long.  Using a 16 character string here gives us 32 bytes when converted to a byte array.
        private const string initVector = "h5shkss731gpw810";
        // This constant is used to determine the keysize of the encryption algorithm
        private const int keysize = 256;
        //Encrypt
        public static string EncryptString(string plainText, string passPhrase)
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
        public static string DecryptString(string cipherText, string passPhrase)
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



        //////////public static string Encrypt(string toEncrypt, bool useHashing)
        //////////{
        //////////    byte[] keyArray;
        //////////    byte[] toEncryptArray = UTF8Encoding.UTF8.GetBytes(toEncrypt);

        //////////    //System.Configuration.AppSettingsReader settingsReader = new AppSettingsReader();
        //////////    // Get the key from config file
        //////////    // string key = (string)settingsReader.GetValue("SecurityKey", typeof(String));
        //////////    //System.Windows.Forms.MessageBox.Show(key);
        //////////    if (useHashing)
        //////////    {
        //////////        MD5CryptoServiceProvider hashmd5 = new MD5CryptoServiceProvider();
        //////////        keyArray = hashmd5.ComputeHash(UTF8Encoding.UTF8.GetBytes(secretKey));
        //////////        hashmd5.Clear();
        //////////    }
        //////////    else
        //////////        keyArray = UTF8Encoding.UTF8.GetBytes(secretKey);

        //////////    TripleDESCryptoServiceProvider tdes = new TripleDESCryptoServiceProvider();
        //////////    tdes.Key = keyArray;
        //////////    tdes.Mode = CipherMode.ECB;
        //////////    tdes.Padding = PaddingMode.PKCS7;

        //////////    ICryptoTransform cTransform = tdes.CreateEncryptor();
        //////////    byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);
        //////////    tdes.Clear();
        //////////    return Convert.ToBase64String(resultArray, 0, resultArray.Length);
        //////////}
        ///////////// <summary>
        ///////////// DeCrypt a string using dual encryption method. Return a DeCrypted clear string
        ///////////// </summary>
        ///////////// <param name="cipherString">encrypted string</param>
        ///////////// <param name="useHashing">Did you use hashing to encrypt this data? pass true is yes</param>
        ///////////// <returns></returns>
        //////////public static string Decrypt(string cipherString, bool useHashing)
        //////////{
        //////////    byte[] keyArray;
        //////////    byte[] toEncryptArray = Convert.FromBase64String(cipherString);

        //////////    //System.Configuration.AppSettingsReader settingsReader = new AppSettingsReader();
        //////////    //Get your key from config file to open the lock!
        //////////    // string key = (string)settingsReader.GetValue("SecurityKey", typeof(String));

        //////////    if (useHashing)
        //////////    {
        //////////        MD5CryptoServiceProvider hashmd5 = new MD5CryptoServiceProvider();
        //////////        keyArray = hashmd5.ComputeHash(UTF8Encoding.UTF8.GetBytes(secretKey));
        //////////        hashmd5.Clear();
        //////////    }
        //////////    else
        //////////        keyArray = UTF8Encoding.UTF8.GetBytes(secretKey);

        //////////    TripleDESCryptoServiceProvider tdes = new TripleDESCryptoServiceProvider();
        //////////    tdes.Key = keyArray;
        //////////    tdes.Mode = CipherMode.ECB;
        //////////    tdes.Padding = PaddingMode.PKCS7;

        //////////    ICryptoTransform cTransform = tdes.CreateDecryptor();
        //////////    byte[] resultArray = cTransform.TransformFinalBlock(toEncryptArray, 0, toEncryptArray.Length);

        //////////    tdes.Clear();
        //////////    return UTF8Encoding.UTF8.GetString(resultArray);
        //////////}

        /* public static string Encrypt(string stringToEncrypt)
         {
             if (string.IsNullOrEmpty(stringToEncrypt))
             {
                 throw new ArgumentException("An empty string value cannot be encrypted.");
             }

             if (string.IsNullOrEmpty(secretKey))
             {
                 throw new ArgumentException("Cannot encrypt using an empty key. Please supply an encryption key.");
             }

             System.Security.Cryptography.CspParameters cspp = new System.Security.Cryptography.CspParameters();
             cspp.KeyContainerName = secretKey;

             System.Security.Cryptography.RSACryptoServiceProvider rsa = new System.Security.Cryptography.RSACryptoServiceProvider(cspp);
             rsa.PersistKeyInCsp = true;

             byte[] bytes = rsa.Encrypt(System.Text.UTF8Encoding.UTF8.GetBytes(stringToEncrypt), true);

             return BitConverter.ToString(bytes);
         }

         public static string Decrypt(string stringToDecrypt)
         {
             string result = null;

             if (string.IsNullOrEmpty(stringToDecrypt))
             {
                 throw new ArgumentException("An empty string value cannot be encrypted.");
             }

             if (string.IsNullOrEmpty(secretKey))
             {
                 throw new ArgumentException("Cannot decrypt using an empty key. Please supply a decryption key.");
             }

             try
             {
                 System.Security.Cryptography.CspParameters cspp = new System.Security.Cryptography.CspParameters();
                 cspp.KeyContainerName = secretKey;

                 System.Security.Cryptography.RSACryptoServiceProvider rsa = new System.Security.Cryptography.RSACryptoServiceProvider(cspp);
                 rsa.PersistKeyInCsp = true;

                 string[] decryptArray = stringToDecrypt.Split(new string[] { "-" }, StringSplitOptions.None);
                 byte[] decryptByteArray = Array.ConvertAll<string, byte>(decryptArray, (s => Convert.ToByte(byte.Parse(s, System.Globalization.NumberStyles.HexNumber))));


                 byte[] bytes = rsa.Decrypt(decryptByteArray, true);

                 result = System.Text.UTF8Encoding.UTF8.GetString(bytes);

             }
             finally
             {
                 // no need for further processing
             }

             return result;
         }*/
    }
}
