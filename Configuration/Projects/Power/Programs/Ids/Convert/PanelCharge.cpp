// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PanelCharge.h"
#include "Programs/ioSystemGraphics.h"
PanelCharge::PanelCharge()
{
}
PanelCharge::~PanelCharge()
{
}
void PanelCharge::InitializeData(void)
{
    m_PanelGraphics.SetListData((ioItem**)m_PanelChargeGraphics, 6);
    AddGraphics(&SelectCharger, Puid_Ids_Convert_SelectCharger);
    AddGraphics(&InstrVoltOutputDc, Puid_Ids_Convert_InstrVoltOutputDc);
    InstrVoltOutputDc.SetTextForced((ioChars)"14.2");
    InstrVoltOutputDc.SetDecimals(1);
    AddGraphics(&LabelHeaderChargeInput, Puid_Ids_Convert_LabelHeaderChargeInput);
    LabelHeaderChargeInput.SetTextForced((ioChars)"CHARGE INPUT [VAC]");
    AddGraphics(&LabelHeaderChargeOutput, Puid_Ids_Convert_LabelHeaderChargeOutput);
    LabelHeaderChargeOutput.SetTextForced((ioChars)"CHARGE OUTPUT [VDC]");
    AddGraphics(&InstrVoltInputAc, Puid_Ids_Convert_InstrVoltInputAc);
    InstrVoltInputAc.SetTextForced((ioChars)"220.1");
    InstrVoltInputAc.SetDecimals(1);
    AddGraphics(&InstVoltOutputDc, Puid_Ids_Convert_InstVoltOutputDc);
    InstVoltOutputDc.SetTextForced((ioChars)"14.3");
    InstVoltOutputDc.SetDecimals(1);
}