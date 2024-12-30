// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IDSPOWEROPERATE_H)
#define __IDSPOWEROPERATE_H
#include "ioSystem/Program/Core/ioProgram.h"
#include "ioSystem/Ports/System/ioPortProgramSystem.h"
class IdsPowerOperate : public ioProgram
{
public:
    IdsPowerOperate();
    virtual ~IdsPowerOperate();
    // Initialize program attributes and operations
    virtual void InitializeTask(void);
    // Receive data in program from the network (listData: List containing the data, data: Data received)
    virtual void ReceiveData(ioDataCollection* listData, ioData* data);
    // Read from inputs before running program tasks (activeSlot: Task slot ID)
    virtual void ReadInput(Int32 activeSlot);
    // Run program tasks at regular intervals (activeSlot: Task slot ID)
    virtual void RunTask(Int32 activeSlot);
    // Write to outputs after running program tasks (activeSlot: Task slot ID)
    virtual void WriteOutput(Int32 activeSlot);
    ioPortProgramSystem PortSystem;
protected:
    // Map system data ID to network data ID for given protocol (protocol: Type of protocol for the data, dataID: Unique ID value for the system data, returns: Unique ID value for the network data)
    virtual Int32 MapSystemDataIDToNetworkID(ioPortProgramProtocol protocol, Int32 dataID);
};
#endif // __IDSPOWEROPERATE_H