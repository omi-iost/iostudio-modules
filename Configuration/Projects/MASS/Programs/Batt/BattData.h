// !!! This file is generated by ioStudio !!!
// Generation date and time: 30.JAN.2024 14:59:43
#if !defined(__BATTDATA_H)
#define __BATTDATA_H
#include "ioSystem/Data/ioDataCollectionDynamic.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
class BattData : public ioDataCollectionDynamic
{
public:
    BattData();
    virtual ~BattData();
    void InitializeData(void);
    ioVarFloat ChargeInputVolt;
    ioVarBool IsChargActive12V;
    ioVarBool IsChargActive24V;
    ioVarFloat StatusOfCharge;
    ioVarTimeInterval TimeTo10Percent;
protected:
    ioData* m_ListData[5];
};
#endif // BATTDATA_H
