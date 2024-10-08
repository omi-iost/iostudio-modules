// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ModePanelCpA.h"
#include "Programs/ioSystemGraphics.h"
ModePanelCpA::ModePanelCpA()
{
    InitializeData();
}
ModePanelCpA::~ModePanelCpA()
{
}
void ModePanelCpA::InitializeData(void)
{
    ModePanel::InitializeData();
    AddGraphics(&HeaderModeControl, Puid_Steer_CpA_HeaderModeControl);
    HeaderModeControl.SetTextForced((ioChars)"MODE CONTROL AFT COCKPIT");
    AddGraphics(&ButtDp, Puid_Steer_CpA_ButtDp);
    ButtDp.SetTextForced((ioChars)"DP");
    AddGraphics(&ButtTrack, Puid_Steer_CpA_ButtTrack);
    ButtTrack.SetTextForced((ioChars)"TRACK");
    AddGraphics(&ButtRiver, Puid_Steer_CpA_ButtRiver);
    ButtRiver.SetTextForced((ioChars)"RIVER");
    AddGraphics(&ButtWork, Puid_Steer_CpA_ButtWork);
    ButtWork.SetTextForced((ioChars)"WORK");
    AddGraphics(&ButtCourse, Puid_Steer_CpA_ButtCourse);
    ButtCourse.SetTextForced((ioChars)"AUTO");
    AddGraphics(&ButtStandby, Puid_Steer_CpA_ButtStandby);
    ButtStandby.SetTextForced((ioChars)"STANDBY");
}
