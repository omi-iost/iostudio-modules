// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerApPanelApA.h"
#include "Programs/ioSystemGraphics.h"
SteerApPanelApA::SteerApPanelApA()
{
    InitializeData();
}
SteerApPanelApA::~SteerApPanelApA()
{
}
void SteerApPanelApA::InitializeData(void)
{
    SteerApPanel::InitializeData();
    AddGraphics(&LabelApSteer, Puid_Steer_ApA_LabelApSteer);
    LabelApSteer.SetTextForced((ioChars)"AUTOPILOT REFERENCE [°M]");
    AddGraphics(&InstrHeadingRef, Puid_Steer_ApA_InstrHeadingRef);
    InstrHeadingRef.SetTextForced((ioChars)"000");
    InstrHeadingRef.SetDecimals(1);
    AddGraphics(&LabelHeading, Puid_Steer_ApA_LabelHeading);
    LabelHeading.SetTextForced((ioChars)"HEADING [°M]");
    AddGraphics(&InstrHeading, Puid_Steer_ApA_InstrHeading);
    InstrHeading.SetTextForced((ioChars)"000.0");
    InstrHeading.SetDecimals(1);
    AddGraphics(&ShapeContourShip, Puid_Steer_ApA_ShapeContourShip);
    AddGraphics(&CompThruster, Puid_Steer_ApA_CompThruster);
    AddGraphics(&CompRudder, Puid_Steer_ApA_CompRudder);
    AddGraphics(&CompRateOfTurn, Puid_Steer_ApA_CompRateOfTurn);
    AddGraphics(&CompEngine, Puid_Steer_ApA_CompEngine);
    AddGraphics(&TextRotValue, Puid_Steer_ApA_TextRotValue);
    TextRotValue.SetTextForced((ioChars)"044");
    TextRotValue.SetDecimals(0);
    AddGraphics(&LabelRot, Puid_Steer_ApA_LabelRot);
    LabelRot.SetTextForced((ioChars)"°/min");
    AddGraphics(&TextEngineValue, Puid_Steer_ApA_TextEngineValue);
    TextEngineValue.SetTextForced((ioChars)"1500");
    TextEngineValue.SetDecimals(0);
    AddGraphics(&LabelEngine, Puid_Steer_ApA_LabelEngine);
    LabelEngine.SetTextForced((ioChars)"RPM");
    AddGraphics(&TextThrustValue, Puid_Steer_ApA_TextThrustValue);
    TextThrustValue.SetTextForced((ioChars)"-40");
    TextThrustValue.SetDecimals(0);
    AddGraphics(&LabelThrust, Puid_Steer_ApA_LabelThrust);
    LabelThrust.SetTextForced((ioChars)"%");
}
