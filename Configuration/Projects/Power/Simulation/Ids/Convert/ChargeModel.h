// !!! This C++ file is generated by ioStudio !!!
#if !defined(__CHARGEMODEL_H)
#define __CHARGEMODEL_H
#include "ioSystem/Simulation/ioModel.h"
#include "Programs/Ids/Convert/DataCharge.h"
class ChargeModel : public ioModel
{
public:
    ChargeModel();
    virtual ~ChargeModel();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
    virtual void SimulateVoltOutput(Float voltInputAc, Bool isOutputActive, Float* voltOutputDc);
    DataCharge ChargeData;
};
#endif // __CHARGEMODEL_H
