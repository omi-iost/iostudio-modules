// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "ioSystemGraphics.h"
ioSystemGraphics::ioSystemGraphics()
{
}
ioSystemGraphics::~ioSystemGraphics()
{
}
Int32 ioSystemGraphics::GetGraphicsID(ioSystemGraphicsType puid)
{
    return (Int32)puid;
}
ioSystemGraphicsType ioSystemGraphics::GetGraphicsType(Int32 puidValue)
{
    if ((puidValue >= 0) && (puidValue < 535))
        return (ioSystemGraphicsType)puidValue;
    else
        return Puid_NotDefined;
}
