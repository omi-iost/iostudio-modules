// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IDSPROGOPERATE_H)
#define __IDSPROGOPERATE_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "ioSystem/Ports/System/ioPortProgramSystem.h"
class IdsProgOperate : public ioProgram
{
public:
    IdsProgOperate();
    virtual ~IdsProgOperate();
    virtual void InitializeTask(void);
    virtual void RunTask(Int32 activeSlot);
    ioPortProgramSystem PortSystem;
};
#endif // __IDSPROGOPERATE_H
