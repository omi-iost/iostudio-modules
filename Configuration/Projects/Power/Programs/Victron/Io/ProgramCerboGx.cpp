// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ProgramCerboGx.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
ProgramCerboGx::ProgramCerboGx()
{
}
ProgramCerboGx::~ProgramCerboGx()
{
}
void ProgramCerboGx::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&ChargePanel);
    AddPanel((ioPanel*)&DcDcPanel);
}
void ProgramCerboGx::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Victron_Io_ResponseDataCgx:
            UpdateFromCergoGxData();
            ChargePanel.InstrVoltInputAc.SetValueVar(&ChargeData.VoltageInputAc);
            ChargePanel.InstVoltOutputDc.SetValueVar(&ChargeData.VoltageOutputDc);
            DcDcPanel.InstrVoltInputDcDc.SetValueVar(&DcDcData.VoltageInputDcDc);
            DcDcPanel.InstrVoltOutputDcDc.SetValueVar(&DcDcData.VoltageOutputDcDc);
            break;
        } // switch
    } // else
}
void ProgramCerboGx::RunTask(Int32 activeSlot)
{
    if (activeSlot == 0) {}
    SendData(&CgxData.RequestDataCgx, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Victron_CerboGx_10);
}
void ProgramCerboGx::UpdateFromCergoGxData(void)
{
}
