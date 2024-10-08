// !!! This C++ file is generated by ioStudio !!!
#if !defined(__CMDPANELSTEER_H)
#define __CMDPANELSTEER_H
#include "ioSystem/Panels/ioPanel.h"
#include "ioSystem/Panels/ioGraphicsText.h"
#include "ioSystem/Panels/ioShape.h"
#include "ioSystem/Panels/ioButtonText.h"
class CmdPanelSteer : public ioPanel
{
public:
    CmdPanelSteer();
    virtual ~CmdPanelSteer();
    virtual void InitializeData(void);
    ioLabel HeaderCommandPanelSteer;
    ioShape ShapeCommandStatusSteer;
    ioLabel LabelSteerMode;
    ioTextBlock TextCommandStatusSteer;
    ioButtonShape ButtTakeRequestSteer;
    ioButtonShape ButtReleaseSteer;
protected:
    ioGraphics* m_CmdPanelSteerGraphics[6];
};
#endif // __CMDPANELSTEER_H
