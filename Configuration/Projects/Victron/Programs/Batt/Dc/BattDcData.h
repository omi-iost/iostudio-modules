// !!! This C++ file is generated by ioStudio !!!
#if !defined(__BATTDCDATA_H)
#define __BATTDCDATA_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class BattDcData : public ioDataCollectionDynamic
{
public:
    BattDcData();
    virtual ~BattDcData();
    virtual void InitializeData(void);
    ioVarFloat BattVolt;
    ioVarFloat BattAmpOut;
    ioVarFloat BattAmpIn;
    ioVarFloat BattAmpAvg;
    ioMethod RequestDcData;
    ioEvent ResponseDcData;
protected:
    ioData* m_ListData[6];
    ioVar* m_ResponseDcDataVars[2];
};
#endif // __BATTDCDATA_H
