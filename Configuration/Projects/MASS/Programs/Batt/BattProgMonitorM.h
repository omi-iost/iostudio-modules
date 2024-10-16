// !!! This C++ file is generated by ioStudio !!!
#if !defined(__BATTPROGMONITORM_H)
#define __BATTPROGMONITORM_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "Programs/Batt/BattData.h"
#include "Programs/Batt/Dc/BattDcDataDc12.h"
#include "Programs/Batt/Dc/BattDcDataDc24.h"
#include "Programs/Batt/Dc/BattDcPanelDc12.h"
#include "Programs/Batt/Dc/BattDcPanelDc24.h"
#include "Programs/Batt/BattStatusPanel.h"
#include "Programs/Batt/BattChargingPanel.h"
class BattProgMonitorM : public ioProgram
{
public:
    BattProgMonitorM();
    virtual ~BattProgMonitorM();
    virtual void InitializeTask(void);
    virtual void Run(Int32 activeSlot);
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    BattData MainData;
    BattDcDataDc12 DcDataDc12;
    BattDcDataDc24 DcDataDc24;
    BattDcPanelDc12 DcPanelDc12;
    BattDcPanelDc24 DcPanelDc24;
    BattStatusPanel StatusPanel;
    BattChargingPanel ChargePanel;
};
#endif // __BATTPROGMONITORM_H
