// !!! This C# file is generated by ioStudio !!!
using System;
namespace ioSystemNetworkNet
{
    public enum ioSystemPortsPowerType
    {
        Nuid_NotDefined = 0,
        Nuid_NetEthernet_192_168_10_Ops_Network_OpsBatteryGate_9 = 1,
        Nuid_NetEthernet_192_168_10_Victron_Network_CerboGx_10 = 2,
        Nuid_NetEthernet_192_168_10_Ops_OpsController_11 = 3,
        Nuid_NetEthernet_192_168_10_Ops_OpsInstrumentDisplay_12 = 4,
        Nuid_NetWiFi_192_168_11_Ops_Network_OpsBatteryGate_9 = 5,
        Nuid_NetWiFi_192_168_11_Victron_Network_CerboGx_10 = 6,
        Nuid_NetWiFi_192_168_11_Ops_OpsController_11 = 7,
        Nuid_NetWiFi_192_168_11_Ops_OpsInstrumentDisplay_12 = 8,
        Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbA_VeDirect = 9,
        Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbB_VeDirect = 10,
        Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect1 = 11,
        Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect2 = 12,
        Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect3 = 13,
        Nuid_NetVeDirect_Victron_Ops_Convert_OpsAcDcCharger_VeDirect = 14,
        Nuid_NetVeDirect_Victron_Ops_Convert_OpsDcDcConverter_VeDirect = 15,
        Nuid_NetVeDirect_Victron_Ops_Network_OpsSmartShunt_VeDirect = 16,
        Nuid_NetAc_Dock_Ops_Isolate_OpsPowerSwitch_Input = 17,
        Nuid_NetAc_Dock_Ops_Convert_OpsAcDcCharger_Input = 18,
        Nuid_NetDc_Generator_Ops_Isolate_OpsDiodeIsolator_Input = 19,
        Nuid_NetDc_Generator_Rotate_Source_EngineGenerator_Output = 20,
        Nuid_NetDc_Aux_Ops_Source_OpsLithiumBattery_Pos = 21,
        Nuid_NetDc_Aux_Ops_Isolate_OpsDiodeIsolator_Output1 = 22,
        Nuid_NetDc_Aux_Ops_Isolate_OpsBatteryFuse_Port1 = 23,
        Nuid_NetDc_Aux_Ops_Isolate_OpsPowerSwitch_Input = 24,
        Nuid_NetDc_Aux_Ops_Convert_OpsBatteryCharger_Battery = 25,
        Nuid_NetDc_Aux_Ops_Network_OpsSmartShunt_Output = 26,
        Nuid_NetDc_Aux_Ops_Consume_OpsPowerJunction_Input = 27,
        Nuid_NetDc_Motor_Ops_Source_OpsMotorBattery_Pos = 28,
        Nuid_NetDc_Motor_Ops_Isolate_OpsDiodeIsolator_Output2 = 29,
        Nuid_NetDc_Motor_Ops_Isolate_OpsBatteryFuse_Port1 = 30,
        Nuid_NetDc_Motor_Ops_Convert_OpsBatteryCharger_Motor = 31,
        Nuid_NetDc_Motor_Rotate_Consume_EngineStartMotor_Input = 32,
        Nuid_NetDc_Level_Ops_Isolate_OpsDiodeIsolator_Output3 = 33,
        Nuid_NetDc_Level_Ops_Convert_OpsDcDcConverter_Output = 34,
        Nuid_NetDc_Level_Ops_Isolate_OpsBatteryFuse_Port1 = 35,
        Nuid_NetDc_Level_Ops_Source_OpsLithiumBattery_Pos = 36,
    } // enum
    public class ioSystemPortsPower
    {
        public static string GetGlobalID(ioSystemPortsPowerType nuid)
        {
            switch (nuid)
            {
                case ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_Network_OpsBatteryGate_9: return "NetEthernet.192.168.10.Ops.Network.OpsBatteryGate.9";
                case ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Victron_Network_CerboGx_10: return "NetEthernet.192.168.10.Victron.Network.CerboGx.10";
                case ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_OpsController_11: return "NetEthernet.192.168.10.Ops.OpsController.11";
                case ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_OpsInstrumentDisplay_12: return "NetEthernet.192.168.10.Ops.OpsInstrumentDisplay.12";
                case ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_Network_OpsBatteryGate_9: return "NetWiFi.192.168.11.Ops.Network.OpsBatteryGate.9";
                case ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Victron_Network_CerboGx_10: return "NetWiFi.192.168.11.Victron.Network.CerboGx.10";
                case ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_OpsController_11: return "NetWiFi.192.168.11.Ops.OpsController.11";
                case ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_OpsInstrumentDisplay_12: return "NetWiFi.192.168.11.Ops.OpsInstrumentDisplay.12";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbA_VeDirect: return "NetVeDirect.Victron.Victron.Network.VeDirectToUsbA.VeDirect";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbB_VeDirect: return "NetVeDirect.Victron.Victron.Network.VeDirectToUsbB.VeDirect";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect1: return "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect1";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect2: return "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect2";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect3: return "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect3";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Convert_OpsAcDcCharger_VeDirect: return "NetVeDirect.Victron.Ops.Convert.OpsAcDcCharger.VeDirect";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Convert_OpsDcDcConverter_VeDirect: return "NetVeDirect.Victron.Ops.Convert.OpsDcDcConverter.VeDirect";
                case ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Network_OpsSmartShunt_VeDirect: return "NetVeDirect.Victron.Ops.Network.OpsSmartShunt.VeDirect";
                case ioSystemPortsPowerType.Nuid_NetAc_Dock_Ops_Isolate_OpsPowerSwitch_Input: return "NetAc.Dock.Ops.Isolate.OpsPowerSwitch.Input";
                case ioSystemPortsPowerType.Nuid_NetAc_Dock_Ops_Convert_OpsAcDcCharger_Input: return "NetAc.Dock.Ops.Convert.OpsAcDcCharger.Input";
                case ioSystemPortsPowerType.Nuid_NetDc_Generator_Ops_Isolate_OpsDiodeIsolator_Input: return "NetDc.Generator.Ops.Isolate.OpsDiodeIsolator.Input";
                case ioSystemPortsPowerType.Nuid_NetDc_Generator_Rotate_Source_EngineGenerator_Output: return "NetDc.Generator.Rotate.Source.EngineGenerator.Output";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Source_OpsLithiumBattery_Pos: return "NetDc.Aux.Ops.Source.OpsLithiumBattery.Pos";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsDiodeIsolator_Output1: return "NetDc.Aux.Ops.Isolate.OpsDiodeIsolator.Output1";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsBatteryFuse_Port1: return "NetDc.Aux.Ops.Isolate.OpsBatteryFuse.Port1";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsPowerSwitch_Input: return "NetDc.Aux.Ops.Isolate.OpsPowerSwitch.Input";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Convert_OpsBatteryCharger_Battery: return "NetDc.Aux.Ops.Convert.OpsBatteryCharger.Battery";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Network_OpsSmartShunt_Output: return "NetDc.Aux.Ops.Network.OpsSmartShunt.Output";
                case ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Consume_OpsPowerJunction_Input: return "NetDc.Aux.Ops.Consume.OpsPowerJunction.Input";
                case ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Source_OpsMotorBattery_Pos: return "NetDc.Motor.Ops.Source.OpsMotorBattery.Pos";
                case ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Isolate_OpsDiodeIsolator_Output2: return "NetDc.Motor.Ops.Isolate.OpsDiodeIsolator.Output2";
                case ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Isolate_OpsBatteryFuse_Port1: return "NetDc.Motor.Ops.Isolate.OpsBatteryFuse.Port1";
                case ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Convert_OpsBatteryCharger_Motor: return "NetDc.Motor.Ops.Convert.OpsBatteryCharger.Motor";
                case ioSystemPortsPowerType.Nuid_NetDc_Motor_Rotate_Consume_EngineStartMotor_Input: return "NetDc.Motor.Rotate.Consume.EngineStartMotor.Input";
                case ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Isolate_OpsDiodeIsolator_Output3: return "NetDc.Level.Ops.Isolate.OpsDiodeIsolator.Output3";
                case ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Convert_OpsDcDcConverter_Output: return "NetDc.Level.Ops.Convert.OpsDcDcConverter.Output";
                case ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Isolate_OpsBatteryFuse_Port1: return "NetDc.Level.Ops.Isolate.OpsBatteryFuse.Port1";
                case ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Source_OpsLithiumBattery_Pos: return "NetDc.Level.Ops.Source.OpsLithiumBattery.Pos";
            } // switch
            return string.Empty;
        }
        public static ioSystemPortsPowerType GetNuid(string globalID)
        {
            switch (globalID)
            {
                case "NetEthernet.192.168.10.Ops.Network.OpsBatteryGate.9": return ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_Network_OpsBatteryGate_9;
                case "NetEthernet.192.168.10.Victron.Network.CerboGx.10": return ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Victron_Network_CerboGx_10;
                case "NetEthernet.192.168.10.Ops.OpsController.11": return ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_OpsController_11;
                case "NetEthernet.192.168.10.Ops.OpsInstrumentDisplay.12": return ioSystemPortsPowerType.Nuid_NetEthernet_192_168_10_Ops_OpsInstrumentDisplay_12;
                case "NetWiFi.192.168.11.Ops.Network.OpsBatteryGate.9": return ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_Network_OpsBatteryGate_9;
                case "NetWiFi.192.168.11.Victron.Network.CerboGx.10": return ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Victron_Network_CerboGx_10;
                case "NetWiFi.192.168.11.Ops.OpsController.11": return ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_OpsController_11;
                case "NetWiFi.192.168.11.Ops.OpsInstrumentDisplay.12": return ioSystemPortsPowerType.Nuid_NetWiFi_192_168_11_Ops_OpsInstrumentDisplay_12;
                case "NetVeDirect.Victron.Victron.Network.VeDirectToUsbA.VeDirect": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbA_VeDirect;
                case "NetVeDirect.Victron.Victron.Network.VeDirectToUsbB.VeDirect": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_VeDirectToUsbB_VeDirect;
                case "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect1": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect1;
                case "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect2": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect2;
                case "NetVeDirect.Victron.Victron.Network.CerboGx.VeDirect3": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Victron_Network_CerboGx_VeDirect3;
                case "NetVeDirect.Victron.Ops.Convert.OpsAcDcCharger.VeDirect": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Convert_OpsAcDcCharger_VeDirect;
                case "NetVeDirect.Victron.Ops.Convert.OpsDcDcConverter.VeDirect": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Convert_OpsDcDcConverter_VeDirect;
                case "NetVeDirect.Victron.Ops.Network.OpsSmartShunt.VeDirect": return ioSystemPortsPowerType.Nuid_NetVeDirect_Victron_Ops_Network_OpsSmartShunt_VeDirect;
                case "NetAc.Dock.Ops.Isolate.OpsPowerSwitch.Input": return ioSystemPortsPowerType.Nuid_NetAc_Dock_Ops_Isolate_OpsPowerSwitch_Input;
                case "NetAc.Dock.Ops.Convert.OpsAcDcCharger.Input": return ioSystemPortsPowerType.Nuid_NetAc_Dock_Ops_Convert_OpsAcDcCharger_Input;
                case "NetDc.Generator.Ops.Isolate.OpsDiodeIsolator.Input": return ioSystemPortsPowerType.Nuid_NetDc_Generator_Ops_Isolate_OpsDiodeIsolator_Input;
                case "NetDc.Generator.Rotate.Source.EngineGenerator.Output": return ioSystemPortsPowerType.Nuid_NetDc_Generator_Rotate_Source_EngineGenerator_Output;
                case "NetDc.Aux.Ops.Source.OpsLithiumBattery.Pos": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Source_OpsLithiumBattery_Pos;
                case "NetDc.Aux.Ops.Isolate.OpsDiodeIsolator.Output1": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsDiodeIsolator_Output1;
                case "NetDc.Aux.Ops.Isolate.OpsBatteryFuse.Port1": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsBatteryFuse_Port1;
                case "NetDc.Aux.Ops.Isolate.OpsPowerSwitch.Input": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Isolate_OpsPowerSwitch_Input;
                case "NetDc.Aux.Ops.Convert.OpsBatteryCharger.Battery": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Convert_OpsBatteryCharger_Battery;
                case "NetDc.Aux.Ops.Network.OpsSmartShunt.Output": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Network_OpsSmartShunt_Output;
                case "NetDc.Aux.Ops.Consume.OpsPowerJunction.Input": return ioSystemPortsPowerType.Nuid_NetDc_Aux_Ops_Consume_OpsPowerJunction_Input;
                case "NetDc.Motor.Ops.Source.OpsMotorBattery.Pos": return ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Source_OpsMotorBattery_Pos;
                case "NetDc.Motor.Ops.Isolate.OpsDiodeIsolator.Output2": return ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Isolate_OpsDiodeIsolator_Output2;
                case "NetDc.Motor.Ops.Isolate.OpsBatteryFuse.Port1": return ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Isolate_OpsBatteryFuse_Port1;
                case "NetDc.Motor.Ops.Convert.OpsBatteryCharger.Motor": return ioSystemPortsPowerType.Nuid_NetDc_Motor_Ops_Convert_OpsBatteryCharger_Motor;
                case "NetDc.Motor.Rotate.Consume.EngineStartMotor.Input": return ioSystemPortsPowerType.Nuid_NetDc_Motor_Rotate_Consume_EngineStartMotor_Input;
                case "NetDc.Level.Ops.Isolate.OpsDiodeIsolator.Output3": return ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Isolate_OpsDiodeIsolator_Output3;
                case "NetDc.Level.Ops.Convert.OpsDcDcConverter.Output": return ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Convert_OpsDcDcConverter_Output;
                case "NetDc.Level.Ops.Isolate.OpsBatteryFuse.Port1": return ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Isolate_OpsBatteryFuse_Port1;
                case "NetDc.Level.Ops.Source.OpsLithiumBattery.Pos": return ioSystemPortsPowerType.Nuid_NetDc_Level_Ops_Source_OpsLithiumBattery_Pos;
            } // switch
            return ioSystemPortsPowerType.Nuid_NotDefined;
        }
    } // class
} // namespace
