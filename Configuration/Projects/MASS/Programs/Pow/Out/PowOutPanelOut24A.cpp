// !!! This C++ file is generated by ioStudio !!!
#include "pch.h"
#pragma hdrstop
#include "PowOutPanelOut24A.h"
#include "Programs/ioSystemGraphics.h"
PowOutPanelOut24A::PowOutPanelOut24A()
{
    InitializeData();
}
PowOutPanelOut24A::~PowOutPanelOut24A()
{
}
void PowOutPanelOut24A::InitializeData(void)
{
    PowOutPanel::InitializeData();
    AddGraphics(&ButtOffCh1, Puid_Pow_Out24A_ButtOffCh1);
    ButtOffCh1.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh1, Puid_Pow_Out24A_ButtOnCh1);
    ButtOnCh1.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh2, Puid_Pow_Out24A_ButtOffCh2);
    ButtOffCh2.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh2, Puid_Pow_Out24A_ButtOnCh2);
    ButtOnCh2.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh3, Puid_Pow_Out24A_ButtOffCh3);
    ButtOffCh3.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh3, Puid_Pow_Out24A_ButtOnCh3);
    ButtOnCh3.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh4, Puid_Pow_Out24A_ButtOffCh4);
    ButtOffCh4.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh4, Puid_Pow_Out24A_ButtOnCh4);
    ButtOnCh4.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh5, Puid_Pow_Out24A_ButtOffCh5);
    ButtOffCh5.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh5, Puid_Pow_Out24A_ButtOnCh5);
    ButtOnCh5.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh6, Puid_Pow_Out24A_ButtOffCh6);
    ButtOffCh6.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh6, Puid_Pow_Out24A_ButtOnCh6);
    ButtOnCh6.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh7, Puid_Pow_Out24A_ButtOffCh7);
    ButtOffCh7.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh7, Puid_Pow_Out24A_ButtOnCh7);
    ButtOnCh7.SetTextForced((ioChars)"On");
    AddGraphics(&ButtOffCh8, Puid_Pow_Out24A_ButtOffCh8);
    ButtOffCh8.SetTextForced((ioChars)"Off");
    AddGraphics(&ButtOnCh8, Puid_Pow_Out24A_ButtOnCh8);
    ButtOnCh8.SetTextForced((ioChars)"On");
}
