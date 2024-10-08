// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "BattDcPanelDc24.h"
#include "Programs/ioSystemGraphics.h"
BattDcPanelDc24::BattDcPanelDc24()
{
    InitializeData();
}
BattDcPanelDc24::~BattDcPanelDc24()
{
}
void BattDcPanelDc24::InitializeData(void)
{
    BattDcPanel::InitializeData();
    AddGraphics(&LabelBatt, Puid_Batt_Dc24_LabelBatt);
    LabelBatt.SetTextForced((ioChars)"BATTERY 24V");
    AddGraphics(&InstrVolt, Puid_Batt_Dc24_InstrVolt);
    InstrVolt.SetTextForced((ioChars)"24.32");
    InstrVolt.SetDecimals(2);
    AddGraphics(&LabelVolt, Puid_Batt_Dc24_LabelVolt);
    LabelVolt.SetTextForced((ioChars)"Voltage [VDC]");
    AddGraphics(&InstrAmpAvg, Puid_Batt_Dc24_InstrAmpAvg);
    InstrAmpAvg.SetTextForced((ioChars)"1.31");
    InstrAmpAvg.SetDecimals(1);
    AddGraphics(&LabelAmpAvg, Puid_Batt_Dc24_LabelAmpAvg);
    LabelAmpAvg.SetTextForced((ioChars)"Current [A]");
    AddGraphics(&InstrAmpDiff, Puid_Batt_Dc24_InstrAmpDiff);
    InstrAmpDiff.SetTextForced((ioChars)"0.45");
    InstrAmpDiff.SetDecimals(1);
}
