// !!! This C++ file is generated by ioStudio !!!
#if !defined(__IOSYSTEMPORTS_H)
#define __IOSYSTEMPORTS_H
#include "ioSystem/Core/ioTypes.h"
typedef enum
{
    Nuid_NotDefined = 0,
    Nuid_NetEthernet_192_168_10_Batt_CerboGx_10 = 1,
    Nuid_NetEthernet_192_168_10_Ids_CcM_C6015_11 = 2,
    Nuid_NetEthernet_192_168_10_Ids_OpM_12 = 3,
    Nuid_NetEthernet_192_168_10_Ids_OpA_13 = 4,
    Nuid_NetWiFi_192_168_11_Batt_CerboGx_10 = 5,
    Nuid_NetWiFi_192_168_11_Ids_CcM_C6015_11 = 6,
    Nuid_NetWiFi_192_168_11_Ids_OpM_12 = 7,
    Nuid_NetWiFi_192_168_11_Ids_OpA_13 = 8,
    Nuid_NetC_CanHs250_Steer_Ap_Ngx1_7 = 9,
    Nuid_NetC_CanHs250_Steer_Ap_GnssR_8 = 10,
    Nuid_NetC_CanHs250_Steer_Ap_Rudd_Rf_9 = 11,
} ioSystemPortsType;
class ioSystemPorts
{
public:
    ioSystemPorts();
    virtual ~ioSystemPorts();
    static Int32 GetNetworkID(ioSystemPortsType nuid);
    static ioSystemPortsType GetPortType(Int32 nuidValue);
};
#endif // __IOSYSTEMPORTS_H
