// !!! This C++ file is generated by ioStudio !!!
#if !defined(__PROGRAMCERBOGX_H)
#define __PROGRAMCERBOGX_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Ids/Convert/DataCharge.h"
#include "Programs/Victron/Io/DataCerboGx.h"
#include "Programs/Ids/Convert/DataDcDc.h"
#include "Programs/Ids/Convert/PanelCharge.h"
#include "Programs/Ids/Convert/PanelDcDc.h"
#include "ioModbus/ioPortProgramModbus.h"
class ProgramCerboGx : public ioProgram
{
public:
    ProgramCerboGx();
    virtual ~ProgramCerboGx();
    virtual void InitializeTask(void);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    virtual void RunTask(Int32 activeSlot);
    virtual void UpdateFromCergoGxData(void);
    DataCharge ChargeData;
    DataCerboGx CgxData;
    DataDcDc DcDcData;
    PanelCharge ChargePanel;
    PanelDcDc DcDcPanel;
    ioPortProgramModbus PortModbus;
};
#endif // __PROGRAMCERBOGX_H
