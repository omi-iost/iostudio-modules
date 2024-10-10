// !!! This C# file is generated by ioStudio !!!
using System;
namespace ioSystemNetworkNet
{
    public enum ioSystemDataType
    {
        Duid_NotDefined = 0,
        Duid_Batt_ChargeInputVolt = 1,
        Duid_Batt_IsChargActive12V = 2,
        Duid_Batt_IsChargActive24V = 3,
        Duid_Batt_StatusOfCharge = 4,
        Duid_Batt_TimeTo10Percent = 5,
        Duid_Batt_RequestBattData = 6,
        Duid_Batt_ResponseBattData = 7,
        Duid_Batt_Dc12_BattVolt = 8,
        Duid_Batt_Dc12_BattAmpOut = 9,
        Duid_Batt_Dc12_BattAmpIn = 10,
        Duid_Batt_Dc12_BattAmpAvg = 11,
        Duid_Batt_Dc12_RequestDcData = 12,
        Duid_Batt_Dc12_ResponseDcData = 13,
        Duid_Batt_Dc24_BattVolt = 14,
        Duid_Batt_Dc24_BattAmpOut = 15,
        Duid_Batt_Dc24_BattAmpIn = 16,
        Duid_Batt_Dc24_BattAmpAvg = 17,
        Duid_Batt_Dc24_RequestDcData = 18,
        Duid_Batt_Dc24_ResponseDcData = 19,
    } // enum
    public class ioSystemData
    {
        public static string GetGlobalID(ioSystemDataType duid)
        {
            switch (duid)
            {
                case ioSystemDataType.Duid_Batt_ChargeInputVolt: return "Batt.ChargeInputVolt";
                case ioSystemDataType.Duid_Batt_IsChargActive12V: return "Batt.IsChargActive12V";
                case ioSystemDataType.Duid_Batt_IsChargActive24V: return "Batt.IsChargActive24V";
                case ioSystemDataType.Duid_Batt_StatusOfCharge: return "Batt.StatusOfCharge";
                case ioSystemDataType.Duid_Batt_TimeTo10Percent: return "Batt.TimeTo10Percent";
                case ioSystemDataType.Duid_Batt_RequestBattData: return "Batt.RequestBattData";
                case ioSystemDataType.Duid_Batt_ResponseBattData: return "Batt.ResponseBattData";
                case ioSystemDataType.Duid_Batt_Dc12_BattVolt: return "Batt.Dc12.BattVolt";
                case ioSystemDataType.Duid_Batt_Dc12_BattAmpOut: return "Batt.Dc12.BattAmpOut";
                case ioSystemDataType.Duid_Batt_Dc12_BattAmpIn: return "Batt.Dc12.BattAmpIn";
                case ioSystemDataType.Duid_Batt_Dc12_BattAmpAvg: return "Batt.Dc12.BattAmpAvg";
                case ioSystemDataType.Duid_Batt_Dc12_RequestDcData: return "Batt.Dc12.RequestDcData";
                case ioSystemDataType.Duid_Batt_Dc12_ResponseDcData: return "Batt.Dc12.ResponseDcData";
                case ioSystemDataType.Duid_Batt_Dc24_BattVolt: return "Batt.Dc24.BattVolt";
                case ioSystemDataType.Duid_Batt_Dc24_BattAmpOut: return "Batt.Dc24.BattAmpOut";
                case ioSystemDataType.Duid_Batt_Dc24_BattAmpIn: return "Batt.Dc24.BattAmpIn";
                case ioSystemDataType.Duid_Batt_Dc24_BattAmpAvg: return "Batt.Dc24.BattAmpAvg";
                case ioSystemDataType.Duid_Batt_Dc24_RequestDcData: return "Batt.Dc24.RequestDcData";
                case ioSystemDataType.Duid_Batt_Dc24_ResponseDcData: return "Batt.Dc24.ResponseDcData";
            } // switch
            return string.Empty;
        }
        public static ioSystemDataType GetDuid(string globalID)
        {
            switch (globalID)
            {
                case "Batt.ChargeInputVolt": return ioSystemDataType.Duid_Batt_ChargeInputVolt;
                case "Batt.IsChargActive12V": return ioSystemDataType.Duid_Batt_IsChargActive12V;
                case "Batt.IsChargActive24V": return ioSystemDataType.Duid_Batt_IsChargActive24V;
                case "Batt.StatusOfCharge": return ioSystemDataType.Duid_Batt_StatusOfCharge;
                case "Batt.TimeTo10Percent": return ioSystemDataType.Duid_Batt_TimeTo10Percent;
                case "Batt.RequestBattData": return ioSystemDataType.Duid_Batt_RequestBattData;
                case "Batt.ResponseBattData": return ioSystemDataType.Duid_Batt_ResponseBattData;
                case "Batt.Dc12.BattVolt": return ioSystemDataType.Duid_Batt_Dc12_BattVolt;
                case "Batt.Dc12.BattAmpOut": return ioSystemDataType.Duid_Batt_Dc12_BattAmpOut;
                case "Batt.Dc12.BattAmpIn": return ioSystemDataType.Duid_Batt_Dc12_BattAmpIn;
                case "Batt.Dc12.BattAmpAvg": return ioSystemDataType.Duid_Batt_Dc12_BattAmpAvg;
                case "Batt.Dc12.RequestDcData": return ioSystemDataType.Duid_Batt_Dc12_RequestDcData;
                case "Batt.Dc12.ResponseDcData": return ioSystemDataType.Duid_Batt_Dc12_ResponseDcData;
                case "Batt.Dc24.BattVolt": return ioSystemDataType.Duid_Batt_Dc24_BattVolt;
                case "Batt.Dc24.BattAmpOut": return ioSystemDataType.Duid_Batt_Dc24_BattAmpOut;
                case "Batt.Dc24.BattAmpIn": return ioSystemDataType.Duid_Batt_Dc24_BattAmpIn;
                case "Batt.Dc24.BattAmpAvg": return ioSystemDataType.Duid_Batt_Dc24_BattAmpAvg;
                case "Batt.Dc24.RequestDcData": return ioSystemDataType.Duid_Batt_Dc24_RequestDcData;
                case "Batt.Dc24.ResponseDcData": return ioSystemDataType.Duid_Batt_Dc24_ResponseDcData;
            } // switch
            return ioSystemDataType.Duid_NotDefined;
        }
    } // class
} // namespace