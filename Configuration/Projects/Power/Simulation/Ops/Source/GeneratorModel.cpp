// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "GeneratorModel.h"
GeneratorModel::GeneratorModel()
{
}
GeneratorModel::~GeneratorModel()
{
}
// Initialize simulation model
void GeneratorModel::InitializeItem(void)
{
    ioModel::InitializeItem();
    AddData((ioDataCollection*)&GeneratorData);
}
// Do simulation every 100ms (slotCounter_100ms: Slot ID for simulation task)
void GeneratorModel::DoSimulation_100ms(Int32 slotCounter_100ms)
{
}