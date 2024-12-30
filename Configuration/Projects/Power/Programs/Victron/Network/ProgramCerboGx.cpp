// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ProgramCerboGx.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
#include "Programs/ioSystemData.h"
ProgramCerboGx::ProgramCerboGx()
{
}
ProgramCerboGx::~ProgramCerboGx()
{
}
// Initialize program attributes and operations
void ProgramCerboGx::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&ChargePanel);
    AddPanel((ioPanel*)&DcDcPanel);
}
// Receive data in program from the network (listData: List containing the data, data: Data received)
void ProgramCerboGx::ReceiveData(ioDataCollection* listData, ioData* data)
{
    ioVarFloat outVarFloat;
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
            default: break;
        case Duid_Victron_Network_ResponseDataCgx:
            UpdateFromCergoGxData();
            ChargePanel.InstrVoltInputAc.SetValueVar(&ChargeData.VoltageInputAc);
            ChargeData.VoltageOutputDc.GetValueVar(0, &outVarFloat);
            ChargePanel.InstVoltOutputDc.SetValueVar(&outVarFloat);
            DcDcPanel.InstrVoltInputDcDc.SetValueVar(&DcDcData.VoltageInputDcDc);
            DcDcPanel.InstrVoltOutputDcDc.SetValueVar(&DcDcData.VoltageOutputDcDc);
            break;
        } // switch
    } // else
}
// Read from inputs before running program tasks (activeSlot: Task slot ID)
void ProgramCerboGx::ReadInput(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
// Run program tasks at regular intervals (activeSlot: Task slot ID)
void ProgramCerboGx::RunTask(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
// Write to outputs after running program tasks (activeSlot: Task slot ID)
void ProgramCerboGx::WriteOutput(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
// Map system data ID to network data ID for given protocol (protocol: Type of protocol for the data, dataID: Unique ID value for the system data, returns: Unique ID value for the network data)
Int32 ProgramCerboGx::MapSystemDataIDToNetworkID(ioPortProgramProtocol protocol, Int32 dataID)
{
    return ioProgram::MapSystemDataIDToNetworkID(protocol, dataID);
}
void ProgramCerboGx::UpdateFromCergoGxData(void)
{
}