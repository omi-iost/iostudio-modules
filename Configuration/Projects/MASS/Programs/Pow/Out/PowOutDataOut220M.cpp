// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowOutDataOut220M.h"
PowOutDataOut220M::PowOutDataOut220M()
{
    InitializeData();
}
PowOutDataOut220M::~PowOutDataOut220M()
{
}
void PowOutDataOut220M::InitializeData(void)
{
    PowOutData::InitializeData();
    OnCh1.SetValue(FALSE);
    AddData((ioData*)&OnCh1, Duid_Pow_Out220M_OnCh1);
    OnCh2.SetValue(FALSE);
    AddData((ioData*)&OnCh2, Duid_Pow_Out220M_OnCh2);
    OnCh3.SetValue(FALSE);
    AddData((ioData*)&OnCh3, Duid_Pow_Out220M_OnCh3);
    OnCh4.SetValue(FALSE);
    AddData((ioData*)&OnCh4, Duid_Pow_Out220M_OnCh4);
    OnCh5.SetValue(FALSE);
    AddData((ioData*)&OnCh5, Duid_Pow_Out220M_OnCh5);
    OnCh6.SetValue(FALSE);
    AddData((ioData*)&OnCh6, Duid_Pow_Out220M_OnCh6);
    OnCh7.SetValue(FALSE);
    AddData((ioData*)&OnCh7, Duid_Pow_Out220M_OnCh7);
    OnCh8.SetValue(FALSE);
    AddData((ioData*)&OnCh8, Duid_Pow_Out220M_OnCh8);
    AddData((ioData*)&SwitchOnCh1, Duid_Pow_Out220M_SwitchOnCh1);
    AddData((ioData*)&SwitchOnCh2, Duid_Pow_Out220M_SwitchOnCh2);
    AddData((ioData*)&SwitchOnCh3, Duid_Pow_Out220M_SwitchOnCh3);
    AddData((ioData*)&SwitchOnCh4, Duid_Pow_Out220M_SwitchOnCh4);
    AddData((ioData*)&SwitchOnCh5, Duid_Pow_Out220M_SwitchOnCh5);
    AddData((ioData*)&SwitchOnCh6, Duid_Pow_Out220M_SwitchOnCh6);
    AddData((ioData*)&SwitchOnCh7, Duid_Pow_Out220M_SwitchOnCh7);
    AddData((ioData*)&SwitchOnCh8, Duid_Pow_Out220M_SwitchOnCh8);
    AddData((ioData*)&SwitchOffCh1, Duid_Pow_Out220M_SwitchOffCh1);
    AddData((ioData*)&SwitchOffCh2, Duid_Pow_Out220M_SwitchOffCh2);
    AddData((ioData*)&SwitchOffCh3, Duid_Pow_Out220M_SwitchOffCh3);
    AddData((ioData*)&SwitchOffCh4, Duid_Pow_Out220M_SwitchOffCh4);
    AddData((ioData*)&SwitchOffCh5, Duid_Pow_Out220M_SwitchOffCh5);
    AddData((ioData*)&SwitchOffCh6, Duid_Pow_Out220M_SwitchOffCh6);
    AddData((ioData*)&SwitchOffCh7, Duid_Pow_Out220M_SwitchOffCh7);
    AddData((ioData*)&SwitchOffCh8, Duid_Pow_Out220M_SwitchOffCh8);
    AddData((ioData*)&OutStatus, Duid_Pow_Out220M_OutStatus);
    AddData((ioData*)&OnRequestPowData, Duid_Pow_Out220M_OnRequestPowData);
}
