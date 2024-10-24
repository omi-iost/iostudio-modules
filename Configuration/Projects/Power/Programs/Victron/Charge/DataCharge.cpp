// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "DataCharge.h"
DataCharge::DataCharge()
{
    InitializeData();
}
DataCharge::~DataCharge()
{
}
void DataCharge::InitializeData(void)
{
    SetListData(m_ListData, 3);
    ResetItem();
    VoltInputAc.SetValue((Float)0.0);
    AddData((ioData*)&VoltInputAc, Duid_Victron_Charge_VoltInputAc);
    VoltOutputDc.SetValue((Float)0.0);
    AddData((ioData*)&VoltOutputDc, Duid_Victron_Charge_VoltOutputDc);
    IsOutputActive.SetValue(TRUE);
    AddData((ioData*)&IsOutputActive, Duid_Victron_Charge_IsOutputActive);
}
