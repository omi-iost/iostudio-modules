// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "VictronData.h"
VictronData::VictronData()
{
    InitializeData();
}
VictronData::~VictronData()
{
}
void VictronData::InitializeData(void)
{
    SetListData(m_ListData, 2);
    ResetItem();
    AddData((ioData*)&RequestVictronData, Duid_Victron_RequestVictronData);
    AddData((ioData*)&ResponseVictronData, Duid_Victron_ResponseVictronData);
}