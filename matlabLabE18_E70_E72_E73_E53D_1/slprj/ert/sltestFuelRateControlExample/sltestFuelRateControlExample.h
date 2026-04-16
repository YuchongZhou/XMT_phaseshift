/*
 * File: sltestFuelRateControlExample.h
 *
 * Code generated for Simulink model 'sltestFuelRateControlExample'.
 *
 * Model version                  : 1.651
 * Simulink Coder version         : 8.10 (R2016a) 10-Feb-2016
 * C/C++ source code generated on : Wed Dec 06 15:19:37 2017
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Specified
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_sltestFuelRateControlExample_h_
#define RTW_HEADER_sltestFuelRateControlExample_h_
#include "rtwtypes.h"
#include "model_reference_types.h"
#ifndef sltestFuelRateControlExample_COMMON_INCLUDES_
# define sltestFuelRateControlExample_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* sltestFuelRateControlExample_COMMON_INCLUDES_ */

/* Shared type includes */
#include "model_reference_types.h"
#include "look2_iflf_linlca.h"

/* Forward declaration for rtModel */
typedef struct sltestFuelRateControlEx_tag_RTM sltestFuelRateControlE_RT_MODEL;

#ifndef DEFINED_TYPEDEF_FOR_EngSensors_
#define DEFINED_TYPEDEF_FOR_EngSensors_

typedef struct {
  real32_T throttle;
  real32_T speed;
  real32_T ego;
  real32_T map;
} EngSensors;

#endif

#ifndef DEFINED_TYPEDEF_FOR_sld_FuelModes_
#define DEFINED_TYPEDEF_FOR_sld_FuelModes_

typedef enum {
  LOW = 1,                             /* Default value */
  RICH,
  DISABLED
} sld_FuelModes;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fueling_ModeType_
#define DEFINED_TYPEDEF_FOR_Fueling_ModeType_

typedef enum {
  Fueling_ModeType_None = 0,           /* Default value */
  Fueling_ModeType_Warmup,
  Fueling_ModeType_Single_Failure,
  Fueling_ModeType_Normal,
  Fueling_ModeType_Shutdown,
  Fueling_ModeType_Overspeed
} Fueling_ModeType;

#endif

/* Block signals and states (auto storage) for model 'sltestFuelRateControlExample' */
typedef struct {
  EngSensors es_o;                     /* '<Root>/control_logic' */
  real32_T holdintegrator;             /* '<S1>/hold integrator' */
  real32_T Sum2;                       /* '<S12>/Sum2' */
  real32_T DiscreteIntegrator_DSTATE;  /* '<S1>/Discrete Integrator' */
  real32_T ThrottleTransient_states;   /* '<S1>/Throttle Transient' */
  real32_T DiscreteFilter_states;      /* '<S12>/Discrete Filter' */
  real32_T DiscreteFilter_states_p;    /* '<S11>/Discrete Filter' */
  real32_T ThrottleTransient_tmp;      /* '<S1>/Throttle Transient' */
  real32_T DiscreteFilter_tmp;         /* '<S11>/Discrete Filter' */
  int32_T sfEvent;                     /* '<Root>/control_logic' */
  sld_FuelModes fuel_mode;             /* '<Root>/control_logic' */
  struct {
    uint_T is_A:2;                     /* '<Root>/control_logic' */
    uint_T is_Pressure:2;              /* '<Root>/control_logic' */
    uint_T is_Throttle:2;              /* '<Root>/control_logic' */
    uint_T is_Speed:2;                 /* '<Root>/control_logic' */
    uint_T is_Fail:2;                  /* '<Root>/control_logic' */
    uint_T is_Multi:2;                 /* '<Root>/control_logic' */
    uint_T is_Fueling_Mode:2;          /* '<Root>/control_logic' */
    uint_T is_Fuel_Disabled:2;         /* '<Root>/control_logic' */
    uint_T is_Running:2;               /* '<Root>/control_logic' */
    uint_T was_Running:2;              /* '<Root>/control_logic' */
    uint_T is_Low_Emissions:2;         /* '<Root>/control_logic' */
    uint_T was_Low_Emissions:2;        /* '<Root>/control_logic' */
    uint_T is_active_c1_sltestFuelRateCont:1;/* '<Root>/control_logic' */
    uint_T is_O2:1;                    /* '<Root>/control_logic' */
    uint_T is_active_O2:1;             /* '<Root>/control_logic' */
    uint_T is_active_Pressure:1;       /* '<Root>/control_logic' */
    uint_T is_active_Throttle:1;       /* '<Root>/control_logic' */
    uint_T is_active_Speed:1;          /* '<Root>/control_logic' */
    uint_T is_active_Fail:1;           /* '<Root>/control_logic' */
    uint_T is_active_Fueling_Mode:1;   /* '<Root>/control_logic' */
    uint_T is_Rich_Mixture:1;          /* '<Root>/control_logic' */
    uint_T O2_normal:1;                /* '<Root>/control_logic' */
  } bitsForTID0;

  uint16_T temporalCounter_i1;         /* '<Root>/control_logic' */
  int8_T SwitchCase_ActiveSubsystem;   /* '<S9>/Switch Case' */
} sltestFuelRateControlExamp_rtDW;

/* Real-time Model Data Structure */
struct sltestFuelRateControlEx_tag_RTM {
  const char_T **errorStatus;
};

typedef struct {
  sltestFuelRateControlExamp_rtDW rtdw;
  sltestFuelRateControlE_RT_MODEL rtm;
} sltestFuelRateCon_rtMdlrefDWork;

/* Model reference registration function */
extern void sltestFuelRateContro_initialize(const char_T **rt_errorStatus,
  sltestFuelRateControlE_RT_MODEL *const sltestFuelRateControlExamplrtM,
  sltestFuelRateControlExamp_rtDW *localDW);
extern void sltestFuelRateControlExamp_Init(Fueling_ModeType *rty_Fueling_Mode,
  sltestFuelRateControlExamp_rtDW *localDW);
extern void sltestFuelRateControlExam_Start(sltestFuelRateControlExamp_rtDW
  *localDW);
extern void sltestFuelRateControlExa_Update(sltestFuelRateControlExamp_rtDW
  *localDW);
extern void sltestFuelRateControlExample(const EngSensors *rtu_sensors, real32_T
  *rty_fuel_rate, Fueling_ModeType *rty_Fueling_Mode,
  sltestFuelRateControlExamp_rtDW *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'sltestFuelRateControlExample'
 * '<S1>'   : 'sltestFuelRateControlExample/airflow_calc'
 * '<S2>'   : 'sltestFuelRateControlExample/control_logic'
 * '<S3>'   : 'sltestFuelRateControlExample/fuel_calc'
 * '<S4>'   : 'sltestFuelRateControlExample/airflow_calc/Enumerated Constant'
 * '<S5>'   : 'sltestFuelRateControlExample/control_logic/Pressure.map_estimate'
 * '<S6>'   : 'sltestFuelRateControlExample/control_logic/Speed.speed_estimate'
 * '<S7>'   : 'sltestFuelRateControlExample/control_logic/Throttle.throttle_estimate'
 * '<S8>'   : 'sltestFuelRateControlExample/fuel_calc/feedforward_fuel_rate'
 * '<S9>'   : 'sltestFuelRateControlExample/fuel_calc/switchable_compensation'
 * '<S10>'  : 'sltestFuelRateControlExample/fuel_calc/switchable_compensation/disabled_mode'
 * '<S11>'  : 'sltestFuelRateControlExample/fuel_calc/switchable_compensation/low_mode'
 * '<S12>'  : 'sltestFuelRateControlExample/fuel_calc/switchable_compensation/rich_mode'
 */

/*-
 * Requirements for '<Root>': sltestFuelRateControlExample
 */
#endif                                 /* RTW_HEADER_sltestFuelRateControlExample_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
