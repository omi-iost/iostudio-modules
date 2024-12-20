// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMDATA_H)
#define __IOSYSTEMDATA_H
#include "ioSystem/Core/ioTypes.h"
#include "ioSystem/Data/ioEnumeration.h"
typedef enum
{
    Duid_NotDefined = 0,
    Duid_Ids_Consume_IsOutputOn = 32,
    Duid_Ids_Consume_PowerConsumer = 33,
    Duid_Ids_Convert_VoltageInputAc = 20,
    Duid_Ids_Convert_IsChargingActive = 22,
    Duid_Ids_Convert_CurrentOutputDc = 3,
    Duid_Ids_Convert_VoltageOutputDc = 4,
    Duid_Ids_Convert_CurrentInputAc = 7,
    Duid_Ids_Convert_MaxOutCurrentDc = 23,
    Duid_Ids_Convert_VoltageInputDcDc = 24,
    Duid_Ids_Convert_VoltageOutputDcDc = 25,
    Duid_Ids_Convert_IsDcDcOutputActive = 26,
    Duid_Ids_Convert_MaxOutCurrentDcDc = 27,
    Duid_Ids_Convert_CurrentInputDcDc = 5,
    Duid_Ids_Convert_CurrentOutputDcDc = 6,
    Duid_Ids_Isolate_MaxFuseCurrent = 37,
    Duid_Ids_Isolate_IsFuseBlown = 35,
    Duid_Ids_Isolate_ResetFuse = 38,
    Duid_Ids_Source_VoltageBattery = 21,
    Duid_Ids_Source_CurrentBattery = 31,
    Duid_Ids_Source_StatusOfCharge = 34,
    Duid_Ids_Source_BatteryChargeResistance = 36,
    Duid_Ids_Source_BatteryEnergy = 39,
    Duid_Ids_Source_VoltOutputGenerator = 28,
    Duid_Ids_Source_IsGeneratorOutputActive = 30,
    Duid_Ids_Source_MaxOutCurrentGenerator = 29,
    Duid_Ids_Source_CurrentGenerator = 8,
    Duid_Victron_RequestVictronData = 1,
    Duid_Victron_ResponseVictronData = 2,
    Duid_Victron_Io_RequestDataCgx = 9,
    Duid_Victron_Io_ResponseDataCgx = 10,
    Duid_Victron_Io_Dc0Voltage = 11,
    Duid_Victron_Io_Dc0MidVoltage = 12,
    Duid_Victron_Io_Dc0MidVoltageDeviation = 13,
    Duid_Victron_Io_Dc0Current = 14,
    Duid_Victron_Io_Dc0Power = 15,
    Duid_Victron_Io_Dc1Voltage = 16,
    Duid_Victron_Io_Soc = 17,
    Duid_Victron_Io_ConsumedAmphours = 18,
    Duid_Victron_Io_Dc0Temperature = 19,
} ioSystemDataType;
class TypeUnit : public ioEnumeration
{
public:
    TypeUnit();
    virtual ~TypeUnit();
    virtual Bool GetActiveText(ioString* enumText);
    static const Int32 M_S = 0;
    static const Int32 KT = 1;
    static const Int32 KG = 2;
    static const Int32 NM = 3;
    static const Int32 M = 4;
    static const Int32 _C = 5;
};
class StationModeType : public ioEnumeration
{
public:
    StationModeType();
    virtual ~StationModeType();
    virtual Bool GetActiveText(ioString* enumText);
    static const Int32 NO_COMMAND = 0;
    static const Int32 TAKEN = 1;
    static const Int32 REMOTE_CONTROL = 2;
    static const Int32 TAKEN_AND_LOCKED = 3;
    static const Int32 TAKE_OVER_REQUEST = 4;
};
class ioSystemData
{
public:
    ioSystemData();
    virtual ~ioSystemData();
    static Int32 GetDataID(ioSystemDataType duid);
    static ioSystemDataType GetDataType(Int32 duidValue);
};
#endif // __IOSYSTEMDATA_H
