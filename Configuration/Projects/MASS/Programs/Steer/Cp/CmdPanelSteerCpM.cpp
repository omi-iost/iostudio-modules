// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "CmdPanelSteerCpM.h"
#include "Programs/ioSystemGraphics.h"
CmdPanelSteerCpM::CmdPanelSteerCpM()
{
    InitializeData();
}
CmdPanelSteerCpM::~CmdPanelSteerCpM()
{
}
void CmdPanelSteerCpM::InitializeData(void)
{
    CmdPanelSteer::InitializeData();
    AddGraphics(&HeaderCommandPanelSteer, Puid_Steer_CpM_HeaderCommandPanelSteer);
    HeaderCommandPanelSteer.SetTextForced((ioChars)"COMMAND STEERING MID DECKHOUSE");
    AddGraphics(&ShapeCommandStatusSteer, Puid_Steer_CpM_ShapeCommandStatusSteer);
    AddGraphics(&LabelSteerMode, Puid_Steer_CpM_LabelSteerMode);
    LabelSteerMode.SetTextForced((ioChars)"OFF");
    AddGraphics(&TextCommandStatusSteer, Puid_Steer_CpM_TextCommandStatusSteer);
    TextCommandStatusSteer.SetTextForced((ioChars)"No station in command");
    TextCommandStatusSteer.SetDecimals(1);
    AddGraphics(&ButtTakeRequestSteer, Puid_Steer_CpM_ButtTakeRequestSteer);
    ButtTakeRequestSteer.SetTextForced((ioChars)"Take");
    AddGraphics(&ButtReleaseSteer, Puid_Steer_CpM_ButtReleaseSteer);
    ButtReleaseSteer.SetTextForced((ioChars)"Release");
}
