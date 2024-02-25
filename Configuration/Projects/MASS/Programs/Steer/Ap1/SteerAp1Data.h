// !!! This file is generated by ioStudio !!!
// Generation date and time: 30.JAN.2024 15:01:38
#if !defined(__STEERAP1DATA_H)
#define __STEERAP1DATA_H
#include "ioSystem/Data/ioDataCollectionDynamic.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
class SteerAp1Data : public ioDataCollectionDynamic
{
public:
    SteerAp1Data();
    virtual ~SteerAp1Data();
    void InitializeData(void);
    ioVarFloat MeasRudderAngle;
    ioVarFloat MeasThrust;
    ioVarFloat MeasRateOfTurn;
    ioVarFloat MeasHeading;
protected:
    ioData* m_ListData[4];
};
#endif // STEERAP1DATA_H