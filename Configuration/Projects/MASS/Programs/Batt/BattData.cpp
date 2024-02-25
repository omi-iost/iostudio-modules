// !!! This file is generated by ioStudio !!!
// Generation date and time: 21.FEB.2024 06:11:54
#include "pch.h"
#pragma hdrstop
#include "BattData.h"
BattData::BattData()
{
    InitializeData();
}
BattData::~BattData()
{
}
void BattData::InitializeData(void)
{
    SetListData(m_ListData, 7);
    ResetItem();
    ChargeInputVolt.SetValue((Float)220);
    AddData((ioData*)&ChargeInputVolt, Duid_Batt_ChargeInputVolt);
    IsChargActive12V.SetValue(TRUE);
    AddData((ioData*)&IsChargActive12V, Duid_Batt_IsChargActive12V);
    IsChargActive24V.SetValue(FALSE);
    AddData((ioData*)&IsChargActive24V, Duid_Batt_IsChargActive24V);
    StatusOfCharge.SetValue((Float)0.0);
    AddData((ioData*)&StatusOfCharge, Duid_Batt_StatusOfCharge);
    TimeTo10Percent.SetValue(187140.000);
    AddData((ioData*)&TimeTo10Percent, Duid_Batt_TimeTo10Percent);
    AddData((ioData*)&RequestBattData, Duid_Batt_RequestBattData);
    AddData((ioData*)&ResponseBattData, Duid_Batt_ResponseBattData);
}