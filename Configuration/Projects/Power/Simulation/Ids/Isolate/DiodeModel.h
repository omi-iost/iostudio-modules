// !!! This C++ file is generated by ioStudio !!!
#if !defined(__DIODEMODEL_H)
#define __DIODEMODEL_H
#include "ioSystem/Simulation/ioModel.h"
class DiodeModel : public ioModel
{
public:
    DiodeModel();
    virtual ~DiodeModel();
    virtual void InitializeItem(void);
    virtual void DoSimulation_100ms(Int32 slotCounter_100ms);
};
#endif // __DIODEMODEL_H
