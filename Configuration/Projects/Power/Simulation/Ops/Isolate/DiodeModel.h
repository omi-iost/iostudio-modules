// !!! This C++ file is generated by ioStudio !!!
#if !defined(__DIODEMODEL_H)
#define __DIODEMODEL_H
#include "ioSystem/Simulation/ioModel.h"
class DiodeModel : public ioModel
{
public:
    DiodeModel();
    virtual ~DiodeModel();
    // Initialize simulation model
    virtual void InitializeItem(void);
    // Do simulation every 100ms (slotCounter_100ms: Slot ID for simulation task)
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
};
#endif // __DIODEMODEL_H