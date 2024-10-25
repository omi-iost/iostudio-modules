// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemPorts.h"
ioSystemPorts::ioSystemPorts()
{
}
ioSystemPorts::~ioSystemPorts()
{
}
Int32 ioSystemPorts::GetNetworkID(ioSystemPortsType nuid)
{
    return (Int32)nuid;
}
ioSystemPortsType ioSystemPorts::GetPortType(Int32 nuidValue)
{
    switch (nuidValue)
    {
    default: return Nuid_NotDefined; 
    case 0: return Nuid_NotDefined; 
    case 1: return Nuid_NetEthernet_192_168_10_Victron_CerboGx_10; 
    case 2: return Nuid_NetEthernet_192_168_10_Ids_PlcIpc_11; 
    case 3: return Nuid_NetEthernet_192_168_10_Ids_Op_12; 
    case 4: return Nuid_NetWiFi_192_168_11_Victron_Io_CerboGx_10; 
    case 5: return Nuid_NetWiFi_192_168_11_Ids_PlcIpc_11; 
    case 6: return Nuid_NetWiFi_192_168_11_Ids_Op_12; 
    case 7: return Nuid_NetVeDirect_Io_Victron_Io_VeDirectToUsbA_VeDirect; 
    case 8: return Nuid_NetVeDirect_Io_Victron_Io_VeDirectToUsbB_VeDirect; 
    case 9: return Nuid_NetVeDirect_Io_Victron_Io_CerboGx_VeDirect1; 
    case 10: return Nuid_NetVeDirect_Io_Victron_Io_CerboGx_VeDirect2; 
    case 11: return Nuid_NetVeDirect_Io_Victron_Io_CerboGx_VeDirect3; 
    case 12: return Nuid_NetVeDirect_Io_Victron_Charge_SmartIp43_12V_50_2_VeDirect; 
    case 13: return Nuid_NetVeDirect_Io_Victron_Charge_SmartIp43_12V_30_2_VeDirect; 
    case 14: return Nuid_NetVeDirect_Io_Victron_Charge_OrionTrSmartIso12_24_10A_VeDirect; 
    case 15: return Nuid_NetVeDirect_Io_Victron_Charge_OrionTrSmartIso12_24_10B_VeDirect; 
    case 16: return Nuid_NetDc12_Generator_Victron_Isolate_Argofet200_3_Input; 
    case 17: return Nuid_NetDc12_Generator_MaksPower_Generator_Mp200_Out14_4V; 
    case 18: return Nuid_NetDc12_Consume_Victron_Isolate_Argofet200_3_Output1; 
    case 19: return Nuid_NetDc12_Consume_MaksPower_Fuses_Mega300A_Port1; 
    case 20: return Nuid_NetDc12_Consume_MaksPower_Batteries_Ultimate150Ah1_Pos; 
    case 21: return Nuid_NetDc12_Consume_MaksPower_Batteries_Ultimate150Ah2_Pos; 
    case 22: return Nuid_NetDc12_Consume_Victron_Charge_SmartIp43_12V_50_2_Battery; 
    case 23: return Nuid_NetDc12_Consume_Victron_Charge_SmartIp43_12V_30_2_Battery; 
    case 24: return Nuid_NetDc12_Consume_BEP_Switch_275A_Input; 
    case 25: return Nuid_NetDc12_Motor_Victron_Isolate_Argofet200_3_Output2; 
    case 26: return Nuid_NetDc12_Motor_MaksPower_Fuses_Mega300A_Port1; 
    case 27: return Nuid_NetDc12_Motor_BEP_Switch_275A_Input; 
    case 28: return Nuid_NetDc12_Motor_Victron_Chg12V_Output2; 
    case 29: return Nuid_NetDc12_Motor_MaksPower_Batteries_Optima50Ah_Pos; 
    case 30: return Nuid_NetDc12_Motor_Victron_Charge_SmartIp43_12V_50_2_Trickle; 
    case 31: return Nuid_NetDc12_Motor_Victron_Charge_SmartIp43_12V_30_2_Trickle; 
    case 32: return Nuid_NetDc12_DcDc_Victron_Isolate_Argofet200_3_Output3; 
    case 33: return Nuid_NetDc12_DcDc_Victron_DcDc_OrionTrSmartIso12_24_10A_Input; 
    case 34: return Nuid_NetDc12_DcDc_Victron_DcDc_OrionTrSmartIso12_24_10B_Input; 
    case 35: return Nuid_NetDc24_Consume_Victron_DcDc_OrionTrSmartIso12_24_10A_Output; 
    case 36: return Nuid_NetDc24_Consume_Victron_Charge_SmartIp43_24V_16_2_Battery; 
    case 37: return Nuid_NetDc24_Consume_Victron_Charge_SmartIp43_12V_25_2_Battery; 
    case 38: return Nuid_NetDc24_Consume_MaksPower_Batteries_Ultimate150Ah1_Pos; 
    case 39: return Nuid_NetDc24_Consume_BEP_Switch_275A_Input; 
    case 40: return Nuid_NetDc24_Motor_Victron_DcDc_OrionTrSmartIso12_24_10B_Output; 
    case 41: return Nuid_NetDc24_Motor_MaksPower_Batteries_Optima50Ah_Pos; 
    case 42: return Nuid_NetDc24_Motor_Victron_Charge_SmartIp43_24V_16_2_Trickle; 
    case 43: return Nuid_NetDc24_Motor_Victron_Charge_SmartIp43_12V_25_2_Trickle; 
    case 44: return Nuid_NetDc24_Motor_BEP_Switch_275A_Input; 
    } // switch
}
