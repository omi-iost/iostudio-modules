// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowIndicatorPanelOut12A.h"
#include "Programs/ioSystemGraphics.h"
PowIndicatorPanelOut12A::PowIndicatorPanelOut12A()
{
    InitializeData();
}
PowIndicatorPanelOut12A::~PowIndicatorPanelOut12A()
{
}
void PowIndicatorPanelOut12A::InitializeData(void)
{
    PowIndicatorPanel::InitializeData();
    AddGraphics(&ShpOnOffInd1, Puid_Pow_Out12A_ShpOnOffInd1);
    AddGraphics(&LabelNameInd1, Puid_Pow_Out12A_LabelNameInd1);
    LabelNameInd1.SetTextForced((ioChars)"AP Clutch");
    AddGraphics(&ShpOnOffInd2, Puid_Pow_Out12A_ShpOnOffInd2);
    AddGraphics(&LabelNameInd2, Puid_Pow_Out12A_LabelNameInd2);
    LabelNameInd2.SetTextForced((ioChars)"AP Drive");
    AddGraphics(&ShpOnOffInd3, Puid_Pow_Out12A_ShpOnOffInd3);
    AddGraphics(&LabelNameInd3, Puid_Pow_Out12A_LabelNameInd3);
    LabelNameInd3.SetTextForced((ioChars)"NMEA 2000");
    AddGraphics(&ShpOnOffInd4, Puid_Pow_Out12A_ShpOnOffInd4);
    AddGraphics(&LabelNameInd4, Puid_Pow_Out12A_LabelNameInd4);
    LabelNameInd4.SetTextForced((ioChars)"NameChannel_12A4");
    AddGraphics(&ShpOnOffInd5, Puid_Pow_Out12A_ShpOnOffInd5);
    AddGraphics(&LabelNameInd5, Puid_Pow_Out12A_LabelNameInd5);
    LabelNameInd5.SetTextForced((ioChars)"NameChannel_12A5");
    AddGraphics(&ShpOnOffInd6, Puid_Pow_Out12A_ShpOnOffInd6);
    AddGraphics(&LabelNameInd6, Puid_Pow_Out12A_LabelNameInd6);
    LabelNameInd6.SetTextForced((ioChars)"NameChannel_12A6");
    AddGraphics(&ShpOnOffInd7, Puid_Pow_Out12A_ShpOnOffInd7);
    AddGraphics(&LabelNameInd7, Puid_Pow_Out12A_LabelNameInd7);
    LabelNameInd7.SetTextForced((ioChars)"NameChannel_12A7");
    AddGraphics(&ShpOnOffInd8, Puid_Pow_Out12A_ShpOnOffInd8);
    AddGraphics(&LabelNameInd8, Puid_Pow_Out12A_LabelNameInd8);
    LabelNameInd8.SetTextForced((ioChars)"NameChannel_12A8");
}
