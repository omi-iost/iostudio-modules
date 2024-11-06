// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMDATA_H)
#define __IOSYSTEMDATA_H
#include "ioSystem/Core/ioTypes.h"
#include "ioSystem/Data/ioEnumeration.h"
typedef enum
{
    Duid_NotDefined = 0,
    Duid_Victron_RequestVictronData = 18,
    Duid_Victron_ResponseVictronData = 19,
    Duid_Victron_Charge_VoltInputAc = 1,
    Duid_Victron_Charge_VoltOutputDc = 2,
    Duid_Victron_Charge_IsOutputActive = 3,
    Duid_Victron_DcDc_VoltInput = 4,
    Duid_Victron_DcDc_VoltOutput = 5,
    Duid_Victron_DcDc_IsOutputActive = 6,
    Duid_Victron_Io_RequestDataCgx = 7,
    Duid_Victron_Io_ResponseDataCgx = 8,
    Duid_Victron_Io_Dc0Voltage = 9,
    Duid_Victron_Io_Dc0MidVoltage = 15,
    Duid_Victron_Io_Dc0MidVoltageDeviation = 16,
    Duid_Victron_Io_Dc0Current = 10,
    Duid_Victron_Io_Dc0Power = 11,
    Duid_Victron_Io_Dc1Voltage = 13,
    Duid_Victron_Io_Soc = 12,
    Duid_Victron_Io_ConsumedAmphours = 14,
    Duid_Victron_Io_Dc0Temperature = 17,
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