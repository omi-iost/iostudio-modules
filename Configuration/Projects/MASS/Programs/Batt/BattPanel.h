// !!! This C++ file is generated by ioStudio !!!
#if !defined(__BATTPANEL_H)
#define __BATTPANEL_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioGraphicsText.h"
#include "ioSystem/Panels/ioShape.h"
class BattPanel : public ioPanel
{
public:
    BattPanel();
    virtual ~BattPanel();
    void InitializeData(void);
    ioLabel LabelStatus;
    ioTextBlock InstrSoc;
    ioLabel LabelSoc;
    ioTextBlock InstrTime;
    ioLabel LabelTime;
    ioLabel LabelBattCharging;
    ioTextBlock InstrChargeInputVolt;
    ioLabel LabelChargeInputVolt;
    ioShape ShapeActiveCharge12V;
    ioLabel LabelActiveCharge12V;
    ioShape ShapeActiveCharge24V;
    ioLabel LabelActiveCharge24V;
};
#endif // __BATTPANEL_H
