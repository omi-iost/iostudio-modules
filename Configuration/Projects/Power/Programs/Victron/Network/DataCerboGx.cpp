// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "DataCerboGx.h"
DataCerboGx::DataCerboGx()
{
    InitializeData();
}
DataCerboGx::~DataCerboGx()
{
}
void DataCerboGx::InitializeData(void)
{
    SetListData(m_ListData, 11);
    ResetItem();
    RequestDataCgx.SetVariablesBuffer(m_RequestDataCgxVars, 9);
    RequestDataCgx.AddVariable(&Dc0Power);
    RequestDataCgx.AddVariable(&Dc0Voltage);
    RequestDataCgx.AddVariable(&Dc1Voltage);
    RequestDataCgx.AddVariable(&Dc0Current);
    RequestDataCgx.AddVariable(&Dc0Temperature);
    RequestDataCgx.AddVariable(&Dc0MidVoltage);
    RequestDataCgx.AddVariable(&Dc0MidVoltageDeviation);
    RequestDataCgx.AddVariable(&ConsumedAmphours);
    RequestDataCgx.AddVariable(&Soc);
    AddData((ioData*)&RequestDataCgx, Duid_Victron_Network_RequestDataCgx);
    ResponseDataCgx.SetVariablesBuffer(m_ResponseDataCgxVars, 9);
    ResponseDataCgx.AddVariable(&Dc0Power);
    ResponseDataCgx.AddVariable(&Dc0Voltage);
    ResponseDataCgx.AddVariable(&Dc1Voltage);
    ResponseDataCgx.AddVariable(&Dc0Current);
    ResponseDataCgx.AddVariable(&Dc0Temperature);
    ResponseDataCgx.AddVariable(&Dc0MidVoltage);
    ResponseDataCgx.AddVariable(&Dc0MidVoltageDeviation);
    ResponseDataCgx.AddVariable(&ConsumedAmphours);
    ResponseDataCgx.AddVariable(&Soc);
    AddData((ioData*)&ResponseDataCgx, Duid_Victron_Network_ResponseDataCgx);
    Dc0Voltage.SetValueUnsigned(120);
    AddData((ioData*)&Dc0Voltage, Duid_Victron_Network_Dc0Voltage);
    Dc0MidVoltage.SetValueUnsigned(0);
    AddData((ioData*)&Dc0MidVoltage, Duid_Victron_Network_Dc0MidVoltage);
    Dc0MidVoltageDeviation.SetValueUnsigned(0);
    AddData((ioData*)&Dc0MidVoltageDeviation, Duid_Victron_Network_Dc0MidVoltageDeviation);
    Dc0Current.SetValueSigned(0);
    AddData((ioData*)&Dc0Current, Duid_Victron_Network_Dc0Current);
    Dc0Power.SetValueSigned(0);
    AddData((ioData*)&Dc0Power, Duid_Victron_Network_Dc0Power);
    Dc1Voltage.SetValueUnsigned(0);
    AddData((ioData*)&Dc1Voltage, Duid_Victron_Network_Dc1Voltage);
    Soc.SetValueUnsigned(0);
    AddData((ioData*)&Soc, Duid_Victron_Network_Soc);
    ConsumedAmphours.SetValueUnsigned(0);
    AddData((ioData*)&ConsumedAmphours, Duid_Victron_Network_ConsumedAmphours);
    Dc0Temperature.SetValueUnsigned(0);
    AddData((ioData*)&Dc0Temperature, Duid_Victron_Network_Dc0Temperature);
}