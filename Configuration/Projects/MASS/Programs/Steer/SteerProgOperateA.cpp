// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerProgOperateA.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
SteerProgOperateA::SteerProgOperateA()
{
}
SteerProgOperateA::~SteerProgOperateA()
{
}
void SteerProgOperateA::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&CommandCpA);
    AddPanel((ioPanel*)&ModeCpA);
    AddPanel((ioPanel*)&ReferenceCpA);
    AddPanel((ioPanel*)&AutopilotApA);
}
void SteerProgOperateA::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void SteerProgOperateA::ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent)
{
    ioSystemGraphicsType puid = ioSystemGraphics::GetGraphicsType(puidValue);
    if (puidValue == 0) {}
    if (typeEvent == ioProgramGraphicsEvent_NotDefined) {}
    switch (puid)
    {
    case Puid_Steer_CpA_ButtTakeRequestSteer:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCpA.TakeCommandSteer, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Steer_CpA_ButtStandby:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCpA.ModeStandby, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Steer_CpA_ButtCourse:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCpA.ModeAuto, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    } // switch
}
void SteerProgOperateA::ReceiveData(ioDataCollection* listData, ioData* data)
{
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Steer_CpA_OnChangeCommandSteer:
            CommandCpA.TextCommandStatusSteer.SetValueVar(&DataCpA.ActiveStationSteer);
            break;
        case Duid_Steer_CpA_OnChangeSteerMode:
            CommandCpA.LabelSteerMode.SetValueVar(&DataCpA.SteerMode);
            break;
        case Duid_Steer_ApA_OnChangeRef:
            AutopilotApA.InstrHeadingRef.SetValueVar(&DataApA.HeadingRef);
            break;
        case Duid_Steer_ApA_OnChangeCompass:
            SendData(&DataCpA.ModeWork, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
            break;
        case Duid_Steer_ApA_OnChangeRudder:
            break;
        case Duid_Steer_ApA_OnChangeThrust:
            break;
        case Duid_Steer_ApA_OnChangeEngine:
            break;
        } // switch
    } // else
}
