// !!! This C++ file is generated by ioStudio !!!
#if !defined(__DATACERBOGX_H)
#define __DATACERBOGX_H
#include "ioSystem/Data/ioDataCollection.h"
#include "ioSystem/Data/ioVar.h"
#include "Programs/ioSystemData.h"
#include "ioSystem/Data/ioEvent.h"
#include "ioSystem/Data/ioMethod.h"
class DataCerboGx : public ioDataCollection
{
public:
    DataCerboGx();
    virtual ~DataCerboGx();
    void InitializeData(void);
    ioMethod RequestDataCgx;
    ioEvent ResponseDataCgx;
    ioVarInt32 Dc0Voltage;
    ioVarInt32 Dc0MidVoltage;
    ioVarInt32 Dc0MidVoltageDeviation;
    ioVarInt32 Dc0Current;
    ioVarInt32 Dc0Power;
    ioVarInt32 Dc1Voltage;
    ioVarInt32 Soc;
    ioVarInt32 ConsumedAmphours;
    ioVarInt32 Dc0Temperature;
protected:
    ioData* m_ListData[11];
    ioVar* m_RequestDataCgxVars[9];
    ioVar* m_ResponseDataCgxVars[9];
};
#endif // __DATACERBOGX_H
