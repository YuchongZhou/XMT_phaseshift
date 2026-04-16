#include "__cf_sltestFuelRateControlExample.h"
#ifndef RTW_HEADER_sltestFuelRateControlExample_cap_host_h_
#define RTW_HEADER_sltestFuelRateControlExample_cap_host_h_
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; }
sltestFuelRateControlExample_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void sltestFuelRateControlExample_host_InitializeDataMapInfo (
sltestFuelRateControlExample_host_DataMapInfo_T * dataMap , const char * path
) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
