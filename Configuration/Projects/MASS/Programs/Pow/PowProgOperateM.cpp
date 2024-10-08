// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowProgOperateM.h"
#include "Programs/ioSystemGraphics.h"
#include "Programs/ioSystemPorts.h"
PowProgOperateM::PowProgOperateM()
{
}
PowProgOperateM::~PowProgOperateM()
{
}
void PowProgOperateM::InitializeTask(void)
{
    ioProgram::InitializeTask();
    AddPanel((ioPanel*)&PanelCmdCpM);
    AddPanel((ioPanel*)&PanelOut12M);
    AddPanel((ioPanel*)&PanelOut12F);
    AddPanel((ioPanel*)&PanelOut12A);
    AddPanel((ioPanel*)&PanelOut24M);
    AddPanel((ioPanel*)&PanelOut24F);
    AddPanel((ioPanel*)&PanelOut24A);
    AddPanel((ioPanel*)&PanelOut220M);
    AddPanel((ioPanel*)&PanelOut220F);
    AddPanel((ioPanel*)&PanelOut220A);
    AddPanel((ioPanel*)&PanelIndOut12M);
    AddPanel((ioPanel*)&PanelIndOut12F);
    AddPanel((ioPanel*)&PanelIndOut12A);
    AddPanel((ioPanel*)&PanelIndOut24M);
    AddPanel((ioPanel*)&PanelIndOut24F);
    AddPanel((ioPanel*)&PanelIndOut24A);
    AddPanel((ioPanel*)&PanelIndOut220M);
    AddPanel((ioPanel*)&PanelIndOut220F);
    AddPanel((ioPanel*)&PanelIndOut220A);
}
void PowProgOperateM::Run(Int32 activeSlot)
{
    if (activeSlot == 0) {}
}
void PowProgOperateM::ReceiveGraphicsEvent(Int32 puidValue, ioProgramGraphicsEvent typeEvent)
{
    ioSystemGraphicsType puid = ioSystemGraphics::GetGraphicsType(puidValue);
    if (puidValue == 0) {}
    if (typeEvent == ioProgramGraphicsEvent_NotDefined) {}
    switch (puid)
    {
    case Puid_Pow_CpM_ButtTakeRequestPow:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&DataCmdCpM.TakeCommandPow, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOnCh1:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOnCh1, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOffCh1:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOffCh1, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOnCh2:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOnCh2, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOffCh2:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOffCh2, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOnCh3:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOnCh3, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    case Puid_Pow_Out12A_ButtOffCh3:
        if (typeEvent == ioProgramGraphicsEvent_Clicked)
            SendData(&PortOut12A.SwitchOffCh3, ioPortProgramProtocol_System, (Int32)Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11);
        break;
    } // switch
}
void PowProgOperateM::ReceiveData(ioDataCollection* listData, ioData* data)
{
    ioVarInt32 in1_Int32;
    if (listData == NULL) {}
    if (data == NULL) {}
    else
    {
        ioSystemDataType duid = ioSystemData::GetDataType(data->GetDataID());
        switch (duid)
        {
        case Duid_Pow_CpM_OnChangeCommandPow:
            PanelCmdCpM.TextCommandStatusPow.SetValueVar(&DataCmdCpM.ActiveStationPow);
            in1_Int32.SetValueVar(&DataCmdCpM.ActiveStationPow);
            ReceiveOnChangeCommandPow(&in1_Int32);
            break;
        case Duid_Pow_Out12A_OutStatus:
            PanelIndOut12A.ShpOnOffInd1.SetValueVar(&PortOut12A.OnCh1);
            PanelIndOut12A.ShpOnOffInd2.SetValueVar(&PortOut12A.OnCh2);
            PanelIndOut12A.ShpOnOffInd3.SetValueVar(&PortOut12A.OnCh3);
            break;
        } // switch
    } // else
}
void PowProgOperateM::ReceiveOnChangeCommandPow(ioVarInt32* activeStation)
{
    if (activeStation == NULL) {};
}
