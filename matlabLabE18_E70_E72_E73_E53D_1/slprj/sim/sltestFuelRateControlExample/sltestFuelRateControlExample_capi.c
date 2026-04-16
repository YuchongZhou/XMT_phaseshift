#include "__cf_sltestFuelRateControlExample.h"
#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "sltestFuelRateControlExample_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)    
#else
#include "builtin_typeid_types.h"
#include "sltestFuelRateControlExample.h"
#include "sltestFuelRateControlExample_capi.h"
#include "sltestFuelRateControlExample_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST                  
#define TARGET_STRING(s)               (NULL)                    
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) ,
0 , 0 , 0 , 0 , 0 } } ; static rtwCAPI_States rtBlockStates [ ] = { { 0 , - 1
, TARGET_STRING (
"sltestFuelRateControlExample/airflow_calc/Discrete\nIntegrator" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 1 , - 1 ,
TARGET_STRING (
"sltestFuelRateControlExample/airflow_calc/Throttle Transient" ) ,
TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 2 , - 1 ,
TARGET_STRING (
 "sltestFuelRateControlExample/fuel_calc/switchable_compensation/low_mode/Discrete Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 3 , - 1
, TARGET_STRING (
 "sltestFuelRateControlExample/fuel_calc/switchable_compensation/rich_mode/Discrete Filter"
) , TARGET_STRING ( "" ) , "" , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } , { 0 , - 1
, ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 , - 1 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void sltestFuelRateControlExample_InitializeDataAddr ( void * dataAddr
[ ] , h5txqhwwth * localDW ) { dataAddr [ 0 ] = ( void * ) ( & localDW ->
gdxty0epfl ) ; dataAddr [ 1 ] = ( void * ) ( & localDW -> g4epmevidu ) ;
dataAddr [ 2 ] = ( void * ) ( & localDW -> fqey34mmcf ) ; dataAddr [ 3 ] = (
void * ) ( & localDW -> cjlqjt3njc ) ; }
#endif
#ifndef HOST_CAPI_BUILD
static void sltestFuelRateControlExample_InitializeVarDimsAddr ( int32_T *
vardimsAddr [ ] ) { vardimsAddr [ 0 ] = ( NULL ) ; }
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "float" ,
"real32_T" , 0 , 0 , sizeof ( real32_T ) , SS_SINGLE , 0 , 0 } } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_SCALAR , 0 , 2 , 0 } } ; static uint_T rtDimensionArray [ ] = { 1 , 1
} ; static const real_T rtcapiStoredFloats [ ] = { 0.01 , 0.0 } ; static
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , 0 } , } ; static rtwCAPI_SampleTimeMap
rtSampleTimeMap [ ] = { { ( const void * ) & rtcapiStoredFloats [ 0 ] , (
const void * ) & rtcapiStoredFloats [ 1 ] , 0 , 0 } } ; static int_T
rtContextSystems [ 10 ] ; static rtwCAPI_LoggingMetaInfo loggingMetaInfo [ ]
= { { 0 , 0 , "" , 0 } } ; static rtwCAPI_ModelMapLoggingStaticInfo
mmiStaticInfoLogging = { 10 , rtContextSystems , loggingMetaInfo , 0 , NULL ,
{ 0 , NULL , NULL } , 0 , ( NULL ) } ; static rtwCAPI_ModelMappingStaticInfo
mmiStatic = { { rtBlockSignals , 0 , ( NULL ) , 0 , ( NULL ) , 0 } , { ( NULL
) , 0 , ( NULL ) , 0 } , { rtBlockStates , 4 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 3094635576U , 2768281722U , 4057215979U ,
62685025U } , & mmiStaticInfoLogging , 0 , 0 } ; const
rtwCAPI_ModelMappingStaticInfo *
sltestFuelRateControlExample_GetCAPIStaticMap ( ) { return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
static void sltestFuelRateControlExample_InitializeSystemRan ( oh0equzdk0 *
const lxv1rtbads , sysRanDType * systemRan [ ] , h5txqhwwth * localDW , int_T
systemTid [ ] , void * rootSysRanPtr , int rootTid ) { UNUSED_PARAMETER (
lxv1rtbads ) ; UNUSED_PARAMETER ( localDW ) ; systemRan [ 0 ] = ( sysRanDType
* ) rootSysRanPtr ; systemRan [ 1 ] = ( NULL ) ; systemRan [ 2 ] = (
sysRanDType * ) & localDW -> ig4nvl4xie ; systemRan [ 3 ] = ( sysRanDType * )
& localDW -> pijcpfwuns ; systemRan [ 4 ] = ( sysRanDType * ) & localDW ->
dlujoo2clf ; systemRan [ 5 ] = ( NULL ) ; systemRan [ 6 ] = ( sysRanDType * )
& localDW -> gqfqobi2yn ; systemRan [ 7 ] = ( sysRanDType * ) & localDW ->
pnov14j1k0 ; systemRan [ 8 ] = ( sysRanDType * ) & localDW -> kssslji0xj ;
systemRan [ 9 ] = ( NULL ) ; systemTid [ 1 ] = i0sf2npjx0 [ 0 ] ; systemTid [
2 ] = i0sf2npjx0 [ 0 ] ; systemTid [ 4 ] = i0sf2npjx0 [ 0 ] ; systemTid [ 3 ]
= i0sf2npjx0 [ 0 ] ; systemTid [ 5 ] = i0sf2npjx0 [ 0 ] ; systemTid [ 7 ] =
i0sf2npjx0 [ 0 ] ; systemTid [ 8 ] = i0sf2npjx0 [ 0 ] ; systemTid [ 6 ] =
i0sf2npjx0 [ 0 ] ; systemTid [ 9 ] = i0sf2npjx0 [ 0 ] ; systemTid [ 0 ] =
rootTid ; rtContextSystems [ 0 ] = 0 ; rtContextSystems [ 1 ] = 0 ;
rtContextSystems [ 2 ] = 2 ; rtContextSystems [ 3 ] = 3 ; rtContextSystems [
4 ] = 4 ; rtContextSystems [ 5 ] = 0 ; rtContextSystems [ 6 ] = 6 ;
rtContextSystems [ 7 ] = 7 ; rtContextSystems [ 8 ] = 8 ; rtContextSystems [
9 ] = 0 ; }
#endif
#ifndef HOST_CAPI_BUILD
void sltestFuelRateControlExample_InitializeDataMapInfo ( oh0equzdk0 * const
lxv1rtbads , h5txqhwwth * localDW , void * sysRanPtr , int contextTid ) {
rtwCAPI_SetVersion ( lxv1rtbads -> DataMapInfo . mmi , 1 ) ;
rtwCAPI_SetStaticMap ( lxv1rtbads -> DataMapInfo . mmi , & mmiStatic ) ;
rtwCAPI_SetLoggingStaticMap ( lxv1rtbads -> DataMapInfo . mmi , &
mmiStaticInfoLogging ) ; sltestFuelRateControlExample_InitializeDataAddr (
lxv1rtbads -> DataMapInfo . dataAddress , localDW ) ;
rtwCAPI_SetDataAddressMap ( lxv1rtbads -> DataMapInfo . mmi , lxv1rtbads ->
DataMapInfo . dataAddress ) ;
sltestFuelRateControlExample_InitializeVarDimsAddr ( lxv1rtbads ->
DataMapInfo . vardimsAddress ) ; rtwCAPI_SetVarDimsAddressMap ( lxv1rtbads ->
DataMapInfo . mmi , lxv1rtbads -> DataMapInfo . vardimsAddress ) ;
rtwCAPI_SetPath ( lxv1rtbads -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetFullPath ( lxv1rtbads -> DataMapInfo . mmi , ( NULL ) ) ;
rtwCAPI_SetInstanceLoggingInfo ( lxv1rtbads -> DataMapInfo . mmi , &
lxv1rtbads -> DataMapInfo . mmiLogInstanceInfo ) ; rtwCAPI_SetChildMMIArray (
lxv1rtbads -> DataMapInfo . mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArrayLen (
lxv1rtbads -> DataMapInfo . mmi , 0 ) ;
sltestFuelRateControlExample_InitializeSystemRan ( lxv1rtbads , lxv1rtbads ->
DataMapInfo . systemRan , localDW , lxv1rtbads -> DataMapInfo . systemTid ,
sysRanPtr , contextTid ) ; rtwCAPI_SetSystemRan ( lxv1rtbads -> DataMapInfo .
mmi , lxv1rtbads -> DataMapInfo . systemRan ) ; rtwCAPI_SetSystemTid (
lxv1rtbads -> DataMapInfo . mmi , lxv1rtbads -> DataMapInfo . systemTid ) ;
rtwCAPI_SetGlobalTIDMap ( lxv1rtbads -> DataMapInfo . mmi , & i0sf2npjx0 [ 0
] ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void sltestFuelRateControlExample_host_InitializeDataMapInfo (
sltestFuelRateControlExample_host_DataMapInfo_T * dataMap , const char * path
) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap (
dataMap -> mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi ,
NULL ) ; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , NULL ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , NULL ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
