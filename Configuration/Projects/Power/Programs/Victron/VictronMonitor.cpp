// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "VictronMonitor.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
VictronMonitor::VictronMonitor()
{
}
VictronMonitor::~VictronMonitor()
{
}
void VictronMonitor::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&MainPanel);
    AddPanel((ioPanel*)&DcDcPanel);
}
void VictronMonitor::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Victron_ResponseVictronData:
            DcDcPanel.InstrVoltInputDcDc.SetValueVar(&DcDcData.IsDcDcOutputActive);
            break;
        } // switch
    } // else
}
