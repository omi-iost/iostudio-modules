// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "FuseModelData.h"
FuseModelData::FuseModelData()
{
    InitializeData();
}
FuseModelData::~FuseModelData()
{
}
void FuseModelData::InitializeData(void)
{
    SetListData(m_ListData, 3);
    ResetItem();
    MaxFuseCurrent.SetValue((Float)0.15);
    AddData((ioData*)&MaxFuseCurrent, Duid_Ids_Isolate_MaxFuseCurrent);
    IsFuseBlown.SetValue(FALSE);
    AddData((ioData*)&IsFuseBlown, Duid_Ids_Isolate_IsFuseBlown);
    AddData((ioData*)&ResetFuse, Duid_Ids_Isolate_ResetFuse);
}
