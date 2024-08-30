// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerProgControl.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
SteerProgControl::SteerProgControl()
{
}
SteerProgControl::~SteerProgControl()
{
}
void SteerProgControl::InitializeTask(void)
{
    ioProgram::InitializeTask();
}
void SteerProgControl::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void SteerProgControl::ReceiveData(ioDataCollection* listData, ioData* data)
{
    ioVarInt32 in1_Int32;
    ioVarInt32 in2_Int32;
    if (listData == NULL) {}
    if (data == NULL) {}
    else if (data == &DataApM.OnRequestSteerData)
    {
        in1_Int32.SetValue(1);
        OnRecvRequestSteerData(&in1_Int32);
    }
    else if (data == &DataControlCpM.TakeCommand)
    {
        in1_Int32.SetValue(1);
        OnRecvTakeCommand(&in1_Int32);
        SendData(&DataControlCpM.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpM.Release)
    {
        in1_Int32.SetValue(1);
        OnRecvRelease(&in1_Int32);
        SendData(&DataControlCpM.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpA.TakeCommand)
    {
        in1_Int32.SetValue(0);
        OnRecvTakeCommand(&in1_Int32);
        SendData(&DataControlCpM.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpA.Release)
    {
        in1_Int32.SetValue(0);
        OnRecvRelease(&in1_Int32);
        SendData(&DataControlCpM.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeCommand, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpM.ModeStandby)
    {
        in1_Int32.SetValue(1);
        in2_Int32.SetValue(0);
        OnRecvSteerMode(&in1_Int32, &in2_Int32);
        SendData(&DataControlCpM.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpM.ModeAuto)
    {
        in1_Int32.SetValue(1);
        in2_Int32.SetValue(2);
        OnRecvSteerMode(&in1_Int32, &in2_Int32);
        SendData(&DataControlCpM.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpA.ModeStandby)
    {
        in1_Int32.SetValue(0);
        in2_Int32.SetValue(0);
        OnRecvSteerMode(&in1_Int32, &in2_Int32);
        SendData(&DataControlCpM.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
    else if (data == &DataControlCpA.ModeAuto)
    {
        in1_Int32.SetValue(0);
        in2_Int32.SetValue(2);
        OnRecvSteerMode(&in1_Int32, &in2_Int32);
        SendData(&DataControlCpM.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpM_12);
        SendData(&DataControlCpA.OnChangeSteerMode, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_OpA_13);
    }
}
void SteerProgControl::OnRecvRequestSteerData(ioVarInt32* sender)
{
    if (sender == NULL) {};
}
void SteerProgControl::OnRecvTakeCommand(ioVarInt32* sender)
{
    if (sender == NULL) {};
}
void SteerProgControl::OnRecvRelease(ioVarInt32* sender)
{
    if (sender == NULL) {};
}
void SteerProgControl::OnRecvSteerMode(ioVarInt32* sender, ioVarInt32* steerMode)
{
    if (sender == NULL) {};
    if (steerMode == NULL) {};
}
