using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.IO;
using System.Xml.Serialization;

public class UserInfo
{
    public class Step
    {
        public int PlayerId;
        public bool ShootState;
        public float StartStepTime;

        public Step()
        {
            UpdateState();
        }

        public void Shoot(bool state)
        {
            ShootState = state;
        }

        public void SetPlayerId(int state)
        {
            PlayerId = state;
        }

        public void SetStartStepTime(float state)
        {
            StartStepTime = state;
        }

        public void UpdateState()
        {
            ShootState = false;
            StartStepTime = 0;
        }

        public void NewStep(float time, int playerId)
        {
            ShootState = false;
            StartStepTime = time;
            PlayerId = playerId;
        }
    }
    


    [Serializable]
    public class PlayerInfo
    {
        [XmlElement("Name")]
        public string Name { get; set; }
        public UnitInfo Unit { get; set; }
    }
    public class UnitInfo
    {
        public FuelInfo Fuel { get; set; }
        public HpInfo Hp { get; set; }
        public Transform TransformUnit { get; set; }
    }
    public class FuelInfo
    {
        [XmlElement("FuelMax")]
        public int FuelMax { get; set; }
        [XmlElement("Fuel")]
        public int Fuel { get; set; }
    }
    public class HpInfo
    {
        [XmlElement("MaxHp")]
        public int MaxHp { get; set; }
        [XmlElement("CurrentHp")]
        public int CurrentHp { get; set; }
    }
}