// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowIndicatorPanelOut220M.h"
#include "Programs/ioSystemGraphics.h"
PowIndicatorPanelOut220M::PowIndicatorPanelOut220M()
{
    InitializeData();
}
PowIndicatorPanelOut220M::~PowIndicatorPanelOut220M()
{
}
void PowIndicatorPanelOut220M::InitializeData(void)
{
    PowIndicatorPanel::InitializeData();
    AddGraphics(&ShpOnOffInd1, Puid_Pow_Out220M_ShpOnOffInd1);
    AddGraphics(&LabelNameInd1, Puid_Pow_Out220M_LabelNameInd1);
    LabelNameInd1.SetTextForced((ioChars)"NameChannel_220M1");
    AddGraphics(&ShpOnOffInd2, Puid_Pow_Out220M_ShpOnOffInd2);
    AddGraphics(&LabelNameInd2, Puid_Pow_Out220M_LabelNameInd2);
    LabelNameInd2.SetTextForced((ioChars)"NameChannel_220M2");
    AddGraphics(&ShpOnOffInd3, Puid_Pow_Out220M_ShpOnOffInd3);
    AddGraphics(&LabelNameInd3, Puid_Pow_Out220M_LabelNameInd3);
    LabelNameInd3.SetTextForced((ioChars)"NameChannel_220M3");
    AddGraphics(&ShpOnOffInd4, Puid_Pow_Out220M_ShpOnOffInd4);
    AddGraphics(&LabelNameInd4, Puid_Pow_Out220M_LabelNameInd4);
    LabelNameInd4.SetTextForced((ioChars)"NameChannel_220M4");
    AddGraphics(&ShpOnOffInd5, Puid_Pow_Out220M_ShpOnOffInd5);
    AddGraphics(&LabelNameInd5, Puid_Pow_Out220M_LabelNameInd5);
    LabelNameInd5.SetTextForced((ioChars)"NameChannel_220M5");
    AddGraphics(&ShpOnOffInd6, Puid_Pow_Out220M_ShpOnOffInd6);
    AddGraphics(&LabelNameInd6, Puid_Pow_Out220M_LabelNameInd6);
    LabelNameInd6.SetTextForced((ioChars)"NameChannel_220M6");
    AddGraphics(&ShpOnOffInd7, Puid_Pow_Out220M_ShpOnOffInd7);
    AddGraphics(&LabelNameInd7, Puid_Pow_Out220M_LabelNameInd7);
    LabelNameInd7.SetTextForced((ioChars)"NameChannel_220M7");
    AddGraphics(&ShpOnOffInd8, Puid_Pow_Out220M_ShpOnOffInd8);
    AddGraphics(&LabelNameInd8, Puid_Pow_Out220M_LabelNameInd8);
    LabelNameInd8.SetTextForced((ioChars)"NameChannel_220M8");
}