// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "SteerApData.h"
SteerApData::SteerApData()
{
}
SteerApData::~SteerApData()
{
}
void SteerApData::InitializeData(void)
{
    SetListData(m_ListData, 16);
    ResetItem();
    OnChangeRef.SetVariablesBuffer(m_OnChangeRefVars, 5);
    OnChangeRef.AddVariable(&FrontThrustRef);
    OnChangeRef.AddVariable(&HeadingRef);
    OnChangeRef.AddVariable(&RateOfTurnRef);
    OnChangeRef.AddVariable(&RudderAngleRef);
    OnChangeRef.AddVariable(&EngineRpmRef);
    OnChangeCompass.SetVariablesBuffer(m_OnChangeCompassVars, 1);
    OnChangeCompass.AddVariable(&HeadingMeas);
    OnChangeRudder.SetVariablesBuffer(m_OnChangeRudderVars, 1);
    OnChangeRudder.AddVariable(&RudderAngleMeas);
    OnChangeThrust.SetVariablesBuffer(m_OnChangeThrustVars, 1);
    OnChangeThrust.AddVariable(&FrontThrustMeas);
    OnChangeEngine.SetVariablesBuffer(m_OnChangeEngineVars, 1);
    OnChangeEngine.AddVariable(&EngineRpmMeas);
}
