// !!! This C++ file is generated by ioStudio !!!
#if !defined(__MODECOMMANDDATA_H)
#define __MODECOMMANDDATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEnumeration.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class StationTypePow : public ioEnumeration
{
public:
    StationTypePow();
    virtual ~StationTypePow();
    virtual Bool GetActiveText(ioString* enumText);
    static const Int32 POWER_AT_MID_DECKHOUSE = 0;
    static const Int32 POWER_AT_AFT_COCKPIT = 1;
};
class PowModeType : public ioEnumeration
{
public:
    PowModeType();
    virtual ~PowModeType();
    virtual Bool GetActiveText(ioString* enumText);
    static const Int32 IDLE = 0;
    static const Int32 SHORE = 1;
    static const Int32 DISCONNECT = 2;
    static const Int32 TRANSIT = 3;
    static const Int32 ENGINE = 4;
    static const Int32 SAILING = 5;
};
class ModeCommandData : public ioDataCollection
{
public:
    ModeCommandData();
    virtual ~ModeCommandData();
    void InitializeData(void);
    ioMethod TakeCommandPow;
    ioMethod ReleaseCommandPow;
    StationTypePow ActiveStationPow;
    ioEvent OnChangeCommandPow;
    StationModeType StationModePow;
    ioMethod PowModeIdle;
    ioMethod PowModeShore;
    ioMethod PowModeDisconnect;
    ioMethod PowModeTransitDay;
    ioMethod PowModeTransitNightEngine;
    ioMethod PowModeTransitNightSail;
    PowModeType PowMode;
    ioEvent OnChangePowMode;
protected:
    ioData* m_ListData[13];
    ioVar* m_OnChangeCommandPowVars[2];
    ioVar* m_OnChangePowModeVars[1];
};
#endif // __MODECOMMANDDATA_H
