#include "__cf_sltestFuelRateControlExample.h"
#ifndef RTW_HEADER_sltestFuelRateControlExample_h_
#define RTW_HEADER_sltestFuelRateControlExample_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef sltestFuelRateControlExample_COMMON_INCLUDES_
#define sltestFuelRateControlExample_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "sltestFuelRateControlExample_types.h"
#include "multiword_types.h"
#include "model_reference_types.h"
#include "look2_iflf_linlcapw.h"
#include "rt_nonfinite.h"
typedef struct { EngSensors ip2hg4hncd ; real32_T iehrs1bfti ; real32_T
dxlqievcka ; real32_T kal4cjzqxv ; real32_T mgqxcphn03 ; real32_T kmm4g4le2x
; real32_T iukqnppa0i ; real32_T oevpdcpr1z ; real32_T cv0l3t3o2o ; real32_T
dgvuqwnq11 ; real32_T a5qzb2zxuc ; real32_T pw3zl1fp2l ; sld_FuelModes
dpqe5mrupf ; boolean_T d5fnkqyyhm ; } kfgzjec0hk ; typedef struct { real32_T
gdxty0epfl ; real32_T g4epmevidu ; real32_T cjlqjt3njc ; real32_T fqey34mmcf
; real32_T n025f2dqas ; real32_T cvumlszwxd ; int32_T mhivhlq5d1 ; struct {
uint_T lfv2jx2lln : 2 ; uint_T cmxsgvof5k : 2 ; uint_T cicy20d1ya : 2 ;
uint_T lqi4ycbrbi : 2 ; uint_T esepnq0lq0 : 2 ; uint_T ks101l5lkk : 2 ;
uint_T i24j1pe5bs : 2 ; uint_T iiadmwmliq : 2 ; uint_T grs0245ugm : 2 ;
uint_T efkz4gtkyi : 2 ; uint_T gdsldb3ugy : 2 ; uint_T ko3zsunh0c : 2 ;
uint_T m1fyoxg5ll : 1 ; uint_T lrnaiftqmv : 1 ; uint_T cbymrbpu22 : 1 ;
uint_T p4df0u25qy : 1 ; uint_T mu5l2andm0 : 1 ; uint_T d54ws1m3hr : 1 ;
uint_T cqepffoxqv : 1 ; uint_T nthl3jo4xz : 1 ; uint_T byfduinobf : 1 ; }
o4cyqt01yu ; uint16_T bz1ypnwz02 ; int8_T ggfpxzfbem ; int8_T pnov14j1k0 ;
int8_T kssslji0xj ; int8_T gqfqobi2yn ; int8_T ig4nvl4xie ; int8_T dlujoo2clf
; int8_T pijcpfwuns ; } h5txqhwwth ; struct amd2ef32fl_ { real32_T P_0 [ 36 ]
; real32_T P_1 [ 6 ] ; real32_T P_2 [ 6 ] ; real32_T P_3 [ 306 ] ; real32_T
P_4 [ 18 ] ; real32_T P_5 [ 17 ] ; real32_T P_6 [ 342 ] ; real32_T P_7 [ 18 ]
; real32_T P_8 [ 19 ] ; real32_T P_9 [ 323 ] ; real32_T P_10 [ 17 ] ;
real32_T P_11 [ 19 ] ; real32_T P_12 ; real32_T P_13 ; real32_T P_14 ;
real32_T P_15 ; real32_T P_16 ; real32_T P_17 ; real32_T P_18 ; real32_T P_19
; real32_T P_20 ; real32_T P_21 ; real32_T P_22 ; real32_T P_23 [ 2 ] ;
real32_T P_24 [ 2 ] ; real32_T P_25 ; real32_T P_26 ; real32_T P_27 [ 2 ] ;
real32_T P_28 [ 2 ] ; real32_T P_29 ; real32_T P_30 ; real32_T P_31 ;
real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ; real32_T P_36
[ 342 ] ; real32_T P_37 [ 18 ] ; real32_T P_38 [ 19 ] ; real32_T P_39 [ 2 ] ;
real32_T P_40 [ 2 ] ; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ;
real32_T P_44 ; uint32_T P_45 [ 2 ] ; uint32_T P_46 [ 2 ] ; uint32_T P_47 [ 2
] ; uint32_T P_48 [ 2 ] ; uint32_T P_49 [ 2 ] ; sld_FuelModes P_50 ; uint8_T
P_51 ; } ; struct mm1mv0coea { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 4 ] ; int32_T * vardimsAddress [ 4
] ; sysRanDType * systemRan [ 10 ] ; int_T systemTid [ 10 ] ; } DataMapInfo ;
} ; typedef struct { kfgzjec0hk rtb ; h5txqhwwth rtdw ; oh0equzdk0 rtm ; }
kvmiw41uugl ; extern void lwz40dwdzm ( SimStruct * _mdlRefSfcnS , int_T
mdlref_TID0 , int_T mdlref_TID1 , oh0equzdk0 * const lxv1rtbads , kfgzjec0hk
* localB , h5txqhwwth * localDW , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern const EngSensors
sltestFuelRateControlExample_rtZEngSensors ; extern void
mr_sltestFuelRateControlExample_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_sltestFuelRateControlExample_GetDWork ( const kvmiw41uugl * mdlrefDW ) ;
extern void mr_sltestFuelRateControlExample_SetDWork ( kvmiw41uugl * mdlrefDW
, const mxArray * ssDW ) ; extern void
mr_sltestFuelRateControlExample_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_sltestFuelRateControlExample_GetSimStateDisallowedBlocks
( ) ; extern const rtwCAPI_ModelMappingStaticInfo *
sltestFuelRateControlExample_GetCAPIStaticMap ( void ) ; extern void
dmdci12deo ( real32_T * houo3ih12p , Fueling_ModeType * c0kqngp5ge ,
kfgzjec0hk * localB , h5txqhwwth * localDW ) ; extern void etfz3jtpel (
Fueling_ModeType * c0kqngp5ge , kfgzjec0hk * localB , h5txqhwwth * localDW )
; extern void bjav4gyaxx ( h5txqhwwth * localDW ) ; extern void pvfpzm2zah (
kfgzjec0hk * localB , h5txqhwwth * localDW ) ; extern void pvfpzm2zahTID1 (
void ) ; extern void sltestFuelRateControlExample ( const EngSensors *
dv15fgvzkq , real32_T * houo3ih12p , Fueling_ModeType * c0kqngp5ge ,
kfgzjec0hk * localB , h5txqhwwth * localDW ) ; extern void
sltestFuelRateControlExampleTID1 ( void ) ;
#endif
