#include "__cf_sltestFuelRateControlExample.h"
#ifndef RTW_HEADER_sltestFuelRateControlExample_types_h_
#define RTW_HEADER_sltestFuelRateControlExample_types_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#ifndef DEFINED_TYPEDEF_FOR_EngSensors_
#define DEFINED_TYPEDEF_FOR_EngSensors_
typedef struct { real32_T throttle ; real32_T speed ; real32_T ego ; real32_T
map ; } EngSensors ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_sld_FuelModes_
#define DEFINED_TYPEDEF_FOR_sld_FuelModes_
typedef enum { LOW = 1 , RICH , DISABLED } sld_FuelModes ;
#endif
#ifndef DEFINED_TYPEDEF_FOR_Fueling_ModeType_
#define DEFINED_TYPEDEF_FOR_Fueling_ModeType_
typedef enum { Fueling_ModeType_None = 0 , Fueling_ModeType_Warmup ,
Fueling_ModeType_Single_Failure , Fueling_ModeType_Normal ,
Fueling_ModeType_Shutdown , Fueling_ModeType_Overspeed } Fueling_ModeType ;
#endif
typedef struct amd2ef32fl_ amd2ef32fl ; typedef struct mm1mv0coea oh0equzdk0
;
#endif
