/*
 * File: sltestFuelRateControlExample.c
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

#include "sltestFuelRateControlExample.h"

/* Named constants for Chart: '<Root>/control_logic' */
#define sltestFuelRa_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define sltestFuelRat_IN_Single_Failure ((uint8_T)1U)
#define sltestFuelRateC_IN_Rich_Mixture ((uint8_T)2U)
#define sltestFuelRateC_exit_from_Multi (25)
#define sltestFuelRateCo_entry_to_Multi (24)
#define sltestFuelRateCon_IN_O2_failure ((uint8_T)1U)
#define sltestFuelRateCont_IN_O2_normal ((uint8_T)2U)
#define sltestFuelRateCont_IN_O2_warmup ((uint8_T)3U)
#define sltestFuelRateCont_IN_Overspeed ((uint8_T)1U)
#define sltestFuelRateContr_IN_Shutdown ((uint8_T)2U)
#define sltestFuelRateContro_CALL_EVENT (-1)
#define sltestFuelRateContro_IN_Running ((uint8_T)2U)
#define sltestFuelRateControlE_IN_Multi ((uint8_T)1U)
#define sltestFuelRateControlE_IN_Three ((uint8_T)2U)
#define sltestFuelRateControlEx_IN_Four ((uint8_T)1U)
#define sltestFuelRateControlEx_IN_None ((uint8_T)2U)
#define sltestFuelRateControlEx_IN_fail ((uint8_T)1U)
#define sltestFuelRateControlExa_IN_One ((uint8_T)3U)
#define sltestFuelRateControlExa_IN_Two ((uint8_T)3U)
#define sltestFuelRateControlExamp_IN_A ((uint8_T)1U)
#define sltestFuelRateControl_IN_Normal ((uint8_T)1U)
#define sltestFuelRateControl_IN_Warmup ((uint8_T)2U)
#define sltestFuelRateControl_IN_normal ((uint8_T)2U)
#define sltestFuelRateControl_event_DEC (0)
#define sltestFuelRateControl_event_INC (1)
#define sltestFuelRate_IN_Fuel_Disabled ((uint8_T)1U)
#define sltestFuelRate_IN_Low_Emissions ((uint8_T)1U)

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
# define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

extern const real32_T rtCP_pooled_CYSDHmF6WS5a[36];
extern const real32_T rtCP_pooled_eh974HpZT6fS[6];
extern const real32_T rtCP_pooled_KxC3vy00MXGq[6];
extern const real32_T rtCP_pooled_bmJf02dYzJGp[306];
extern const real32_T rtCP_pooled_Q0UdXFi1EA3d[18];
extern const real32_T rtCP_pooled_XK6oEkxtlSKy[17];
extern const real32_T rtCP_pooled_z5NcKAPkm2qz[342];
extern const real32_T rtCP_pooled_49HSiY8sr7UI[19];
extern const real32_T rtCP_pooled_cWJ2MGp6fiB1[323];
extern const real32_T rtCP_pooled_vyf3wWikZdCt[342];
extern const uint32_T rtCP_pooled_iaXYb4Hn552Q[2];
extern const uint32_T rtCP_pooled_VdXSQ7WyQTMu[2];
extern const uint32_T rtCP_pooled_5vlWOoe6WlsO[2];
extern const uint32_T rtCP_pooled_hvxI0PTLbYF9[2];

#define rtCP_RampRateKi_tableData      rtCP_pooled_CYSDHmF6WS5a  /* Computed Parameter: RampRateKi_tableData
                                                                  * Referenced by: '<S1>/Ramp Rate Ki'
                                                                  */
#define rtCP_RampRateKi_bp01Data       rtCP_pooled_eh974HpZT6fS  /* Computed Parameter: RampRateKi_bp01Data
                                                                  * Referenced by: '<S1>/Ramp Rate Ki'
                                                                  */
#define rtCP_RampRateKi_bp02Data       rtCP_pooled_KxC3vy00MXGq  /* Computed Parameter: RampRateKi_bp02Data
                                                                  * Referenced by: '<S1>/Ramp Rate Ki'
                                                                  */
#define rtCP_PressureEstimation_tableDa rtCP_pooled_bmJf02dYzJGp /* Computed Parameter: PressureEstimation_tableData
                                                                  * Referenced by: '<S5>/Pressure Estimation'
                                                                  */
#define rtCP_PressureEstimation_bp01Dat rtCP_pooled_Q0UdXFi1EA3d /* Computed Parameter: PressureEstimation_bp01Data
                                                                  * Referenced by: '<S5>/Pressure Estimation'
                                                                  */
#define rtCP_PressureEstimation_bp02Dat rtCP_pooled_XK6oEkxtlSKy /* Computed Parameter: PressureEstimation_bp02Data
                                                                  * Referenced by: '<S5>/Pressure Estimation'
                                                                  */
#define rtCP_ThrottleEstimation_tableDa rtCP_pooled_z5NcKAPkm2qz /* Computed Parameter: ThrottleEstimation_tableData
                                                                  * Referenced by: '<S7>/Throttle Estimation'
                                                                  */
#define rtCP_ThrottleEstimation_bp01Dat rtCP_pooled_Q0UdXFi1EA3d /* Computed Parameter: ThrottleEstimation_bp01Data
                                                                  * Referenced by: '<S7>/Throttle Estimation'
                                                                  */
#define rtCP_ThrottleEstimation_bp02Dat rtCP_pooled_49HSiY8sr7UI /* Computed Parameter: ThrottleEstimation_bp02Data
                                                                  * Referenced by: '<S7>/Throttle Estimation'
                                                                  */
#define rtCP_SpeedEstimation_tableData rtCP_pooled_cWJ2MGp6fiB1  /* Computed Parameter: SpeedEstimation_tableData
                                                                  * Referenced by: '<S6>/Speed Estimation'
                                                                  */
#define rtCP_SpeedEstimation_bp01Data  rtCP_pooled_XK6oEkxtlSKy  /* Computed Parameter: SpeedEstimation_bp01Data
                                                                  * Referenced by: '<S6>/Speed Estimation'
                                                                  */
#define rtCP_SpeedEstimation_bp02Data  rtCP_pooled_49HSiY8sr7UI  /* Computed Parameter: SpeedEstimation_bp02Data
                                                                  * Referenced by: '<S6>/Speed Estimation'
                                                                  */
#define rtCP_PumpingConstant_tableData rtCP_pooled_vyf3wWikZdCt  /* Computed Parameter: PumpingConstant_tableData
                                                                  * Referenced by: '<S1>/Pumping Constant'
                                                                  */
#define rtCP_PumpingConstant_bp01Data  rtCP_pooled_Q0UdXFi1EA3d  /* Computed Parameter: PumpingConstant_bp01Data
                                                                  * Referenced by: '<S1>/Pumping Constant'
                                                                  */
#define rtCP_PumpingConstant_bp02Data  rtCP_pooled_49HSiY8sr7UI  /* Computed Parameter: PumpingConstant_bp02Data
                                                                  * Referenced by: '<S1>/Pumping Constant'
                                                                  */
#define rtCP_RampRateKi_maxIndex       rtCP_pooled_iaXYb4Hn552Q  /* Computed Parameter: RampRateKi_maxIndex
                                                                  * Referenced by: '<S1>/Ramp Rate Ki'
                                                                  */
#define rtCP_PressureEstimation_maxInde rtCP_pooled_VdXSQ7WyQTMu /* Computed Parameter: PressureEstimation_maxIndex
                                                                  * Referenced by: '<S5>/Pressure Estimation'
                                                                  */
#define rtCP_ThrottleEstimation_maxInde rtCP_pooled_5vlWOoe6WlsO /* Computed Parameter: ThrottleEstimation_maxIndex
                                                                  * Referenced by: '<S7>/Throttle Estimation'
                                                                  */
#define rtCP_SpeedEstimation_maxIndex  rtCP_pooled_hvxI0PTLbYF9  /* Computed Parameter: SpeedEstimation_maxIndex
                                                                  * Referenced by: '<S6>/Speed Estimation'
                                                                  */
#define rtCP_PumpingConstant_maxIndex  rtCP_pooled_5vlWOoe6WlsO  /* Computed Parameter: PumpingConstant_maxIndex
                                                                  * Referenced by: '<S1>/Pumping Constant'
                                                                  */

/* Forward declaration for local functions */
static void sltestFuelRateCont_Fueling_Mode(const EngSensors *rtu_sensors,
  Fueling_ModeType *rty_Fueling_Mode, sltestFuelRateControlExamp_rtDW *localDW);
static void sltestFuelRateControlExamp_Fail(const EngSensors *rtu_sensors,
  Fueling_ModeType *rty_Fueling_Mode, sltestFuelRateControlExamp_rtDW *localDW);

/* Function for Chart: '<Root>/control_logic' */
static void sltestFuelRateCont_Fueling_Mode(const EngSensors *rtu_sensors,
  Fueling_ModeType *rty_Fueling_Mode, sltestFuelRateControlExamp_rtDW *localDW)
{
  /* During 'Fueling_Mode': '<S2>:21' */
  /* This state interprets the other states in the chart to directly control the fueling mode. */
  switch (localDW->bitsForTID0.is_Fueling_Mode) {
   case sltestFuelRate_IN_Fuel_Disabled:
    /* During 'Fuel_Disabled': '<S2>:22' */
    /* The fuel is completely shut off while in this state. */
    switch (localDW->bitsForTID0.is_Fuel_Disabled) {
     case sltestFuelRateCont_IN_Overspeed:
      /* During 'Overspeed': '<S2>:24' */
      /* The speed is dangerously high, so shut off the fuel. */
      if ((localDW->bitsForTID0.is_Speed == sltestFuelRateControl_IN_normal) &&
          (rtu_sensors->speed < 603.0F)) {
        /* Transition: '<S2>:54' */
        if (!(localDW->bitsForTID0.is_Fail == sltestFuelRateControlE_IN_Multi))
        {
          /* Transition: '<S2>:55' */
          localDW->bitsForTID0.is_Fuel_Disabled =
            sltestFuelRa_IN_NO_ACTIVE_CHILD;
          localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRateContro_IN_Running;

          /* Entry Internal 'Running': '<S2>:23' */
          switch (localDW->bitsForTID0.was_Running) {
           case sltestFuelRate_IN_Low_Emissions:
            if (localDW->bitsForTID0.is_Running !=
                sltestFuelRate_IN_Low_Emissions) {
              localDW->bitsForTID0.is_Running = sltestFuelRate_IN_Low_Emissions;
              localDW->bitsForTID0.was_Running = sltestFuelRate_IN_Low_Emissions;

              /* Entry 'Low_Emissions': '<S2>:25' */
              localDW->fuel_mode = LOW;
            }

            /* Entry Internal 'Low_Emissions': '<S2>:25' */
            switch (localDW->bitsForTID0.was_Low_Emissions) {
             case sltestFuelRateControl_IN_Normal:
              localDW->bitsForTID0.is_Low_Emissions =
                sltestFuelRateControl_IN_Normal;
              localDW->bitsForTID0.was_Low_Emissions =
                sltestFuelRateControl_IN_Normal;
              *rty_Fueling_Mode = Fueling_ModeType_Normal;
              break;

             case sltestFuelRateControl_IN_Warmup:
              localDW->bitsForTID0.is_Low_Emissions =
                sltestFuelRateControl_IN_Warmup;
              localDW->bitsForTID0.was_Low_Emissions =
                sltestFuelRateControl_IN_Warmup;
              *rty_Fueling_Mode = Fueling_ModeType_Warmup;
              break;

             default:
              localDW->bitsForTID0.is_Low_Emissions =
                sltestFuelRa_IN_NO_ACTIVE_CHILD;
              break;
            }
            break;

           case sltestFuelRateC_IN_Rich_Mixture:
            if (localDW->bitsForTID0.is_Running !=
                sltestFuelRateC_IN_Rich_Mixture) {
              localDW->bitsForTID0.is_Running = sltestFuelRateC_IN_Rich_Mixture;
              localDW->bitsForTID0.was_Running = sltestFuelRateC_IN_Rich_Mixture;

              /* Entry 'Rich_Mixture': '<S2>:26' */
              localDW->fuel_mode = RICH;
            }

            /* Entry Internal 'Rich_Mixture': '<S2>:26' */
            localDW->bitsForTID0.is_Rich_Mixture =
              sltestFuelRat_IN_Single_Failure;
            *rty_Fueling_Mode = Fueling_ModeType_Single_Failure;
            break;

           default:
            localDW->bitsForTID0.is_Running = sltestFuelRa_IN_NO_ACTIVE_CHILD;
            break;
          }
        } else {
          /* Transition: '<S2>:60' */
          localDW->bitsForTID0.is_Fuel_Disabled =
            sltestFuelRateContr_IN_Shutdown;
          *rty_Fueling_Mode = Fueling_ModeType_Shutdown;
        }
      }
      break;

     case sltestFuelRateContr_IN_Shutdown:
      /* During 'Shutdown': '<S2>:29' */
      /* Cut off system operation due to multiple sensor failures. */
      if (localDW->sfEvent == sltestFuelRateC_exit_from_Multi) {
        /* Transition: '<S2>:63' */
        localDW->bitsForTID0.is_Fuel_Disabled = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRateContro_IN_Running;
        if (localDW->bitsForTID0.is_Running != sltestFuelRateC_IN_Rich_Mixture)
        {
          localDW->bitsForTID0.is_Running = sltestFuelRateC_IN_Rich_Mixture;
          localDW->bitsForTID0.was_Running = sltestFuelRateC_IN_Rich_Mixture;

          /* Entry 'Rich_Mixture': '<S2>:26' */
          localDW->fuel_mode = RICH;
        }

        /* Entry Internal 'Rich_Mixture': '<S2>:26' */
        localDW->bitsForTID0.is_Rich_Mixture = sltestFuelRat_IN_Single_Failure;
        *rty_Fueling_Mode = Fueling_ModeType_Single_Failure;
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      localDW->bitsForTID0.is_Fuel_Disabled = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      break;
    }
    break;

   case sltestFuelRateContro_IN_Running:
    /* During 'Running': '<S2>:23' */
    /* The fuel is actively controlled while in this state. */
    if (localDW->sfEvent == sltestFuelRateCo_entry_to_Multi) {
      /* Transition: '<S2>:61' */
      /* Exit Internal 'Running': '<S2>:23' */
      /* Exit Internal 'Low_Emissions': '<S2>:25' */
      localDW->bitsForTID0.is_Low_Emissions = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      localDW->bitsForTID0.is_Running = sltestFuelRa_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'Rich_Mixture': '<S2>:26' */
      localDW->bitsForTID0.is_Rich_Mixture = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRate_IN_Fuel_Disabled;

      /* Entry 'Fuel_Disabled': '<S2>:22' */
      localDW->fuel_mode = DISABLED;
      localDW->bitsForTID0.is_Fuel_Disabled = sltestFuelRateContr_IN_Shutdown;
      *rty_Fueling_Mode = Fueling_ModeType_Shutdown;
    } else if (rtu_sensors->speed > 628.0F) {
      /* Transition: '<S2>:53' */
      /* Exit Internal 'Running': '<S2>:23' */
      /* Exit Internal 'Low_Emissions': '<S2>:25' */
      localDW->bitsForTID0.is_Low_Emissions = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      localDW->bitsForTID0.is_Running = sltestFuelRa_IN_NO_ACTIVE_CHILD;

      /* Exit Internal 'Rich_Mixture': '<S2>:26' */
      localDW->bitsForTID0.is_Rich_Mixture = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRate_IN_Fuel_Disabled;

      /* Entry 'Fuel_Disabled': '<S2>:22' */
      localDW->fuel_mode = DISABLED;
      localDW->bitsForTID0.is_Fuel_Disabled = sltestFuelRateCont_IN_Overspeed;
      *rty_Fueling_Mode = Fueling_ModeType_Overspeed;
    } else {
      switch (localDW->bitsForTID0.is_Running) {
       case sltestFuelRate_IN_Low_Emissions:
        /* During 'Low_Emissions': '<S2>:25' */
        switch (localDW->bitsForTID0.is_Low_Emissions) {
         case sltestFuelRateControl_IN_Normal:
          /* During 'Normal': '<S2>:28' */
          /* All sensors are in correct operating modes, so effective closed-loop mixture control can be used. */
          if (localDW->bitsForTID0.is_Fail == sltestFuelRateControlExa_IN_One) {
            /* Transition: '<S2>:56' */
            localDW->bitsForTID0.is_Low_Emissions =
              sltestFuelRa_IN_NO_ACTIVE_CHILD;
            localDW->bitsForTID0.is_Running = sltestFuelRateC_IN_Rich_Mixture;
            localDW->bitsForTID0.was_Running = sltestFuelRateC_IN_Rich_Mixture;

            /* Entry 'Rich_Mixture': '<S2>:26' */
            localDW->fuel_mode = RICH;
            localDW->bitsForTID0.is_Rich_Mixture =
              sltestFuelRat_IN_Single_Failure;
            *rty_Fueling_Mode = Fueling_ModeType_Single_Failure;
          }
          break;

         case sltestFuelRateControl_IN_Warmup:
          /* During 'Warmup': '<S2>:30' */
          /* The sensors are all operational, but the oxygen (EGO) sensor is warming up.  We'll target a stoichiometric ratio, nonetheless, but won't close the loop around exhaust gas oxygen. */
          if (localDW->bitsForTID0.is_A == sltestFuelRateCont_IN_O2_normal) {
            /* Transition: '<S2>:62' */
            if (localDW->bitsForTID0.is_Fail == sltestFuelRateControlExa_IN_One)
            {
              /* Transition: '<S2>:59' */
              localDW->bitsForTID0.is_Low_Emissions =
                sltestFuelRa_IN_NO_ACTIVE_CHILD;
              localDW->bitsForTID0.is_Running = sltestFuelRateC_IN_Rich_Mixture;
              localDW->bitsForTID0.was_Running = sltestFuelRateC_IN_Rich_Mixture;

              /* Entry 'Rich_Mixture': '<S2>:26' */
              localDW->fuel_mode = RICH;
              localDW->bitsForTID0.is_Rich_Mixture =
                sltestFuelRat_IN_Single_Failure;
              *rty_Fueling_Mode = Fueling_ModeType_Single_Failure;
            } else {
              /* Transition: '<S2>:58' */
              localDW->bitsForTID0.is_Low_Emissions =
                sltestFuelRateControl_IN_Normal;
              localDW->bitsForTID0.was_Low_Emissions =
                sltestFuelRateControl_IN_Normal;
              *rty_Fueling_Mode = Fueling_ModeType_Normal;
            }
          }
          break;

         default:
          /* Unreachable state, for coverage only */
          localDW->bitsForTID0.is_Low_Emissions =
            sltestFuelRa_IN_NO_ACTIVE_CHILD;
          break;
        }
        break;

       case sltestFuelRateC_IN_Rich_Mixture:
        /* During 'Rich_Mixture': '<S2>:26' */
        /* This mode enriches the mixture, lowering the air/fuel ratio. */
        if (!((localDW->bitsForTID0.is_Rich_Mixture !=
               sltestFuelRat_IN_Single_Failure) ||
              (!(localDW->bitsForTID0.is_Fail == sltestFuelRateControlEx_IN_None))))
        {
          /* During 'Single_Failure': '<S2>:27' */
          /* Continue uninterrupted engine operation, but with a richer mixture. */
          /* Transition: '<S2>:57' */
          localDW->bitsForTID0.is_Rich_Mixture = sltestFuelRa_IN_NO_ACTIVE_CHILD;
          localDW->bitsForTID0.is_Running = sltestFuelRate_IN_Low_Emissions;
          localDW->bitsForTID0.was_Running = sltestFuelRate_IN_Low_Emissions;

          /* Entry 'Low_Emissions': '<S2>:25' */
          localDW->fuel_mode = LOW;
          localDW->bitsForTID0.is_Low_Emissions =
            sltestFuelRateControl_IN_Normal;
          localDW->bitsForTID0.was_Low_Emissions =
            sltestFuelRateControl_IN_Normal;
          *rty_Fueling_Mode = Fueling_ModeType_Normal;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        localDW->bitsForTID0.is_Running = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        break;
      }
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRa_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* Function for Chart: '<Root>/control_logic' */
static void sltestFuelRateControlExamp_Fail(const EngSensors *rtu_sensors,
  Fueling_ModeType *rty_Fueling_Mode, sltestFuelRateControlExamp_rtDW *localDW)
{
  int32_T b_previousEvent;

  /* During 'Fail': '<S2>:14' */
  /* This state maintains a count of the number of sensors in failure mode. */
  switch (localDW->bitsForTID0.is_Fail) {
   case sltestFuelRateControlE_IN_Multi:
    /* During 'Multi': '<S2>:15' */
    /* This state represents any of the conditions in which more than one sensor is in failure mode. */
    switch (localDW->bitsForTID0.is_Multi) {
     case sltestFuelRateControlEx_IN_Four:
      /* During 'Four': '<S2>:17' */
      /* All four of the engine sensors have failed. */
      if (localDW->sfEvent == sltestFuelRateControl_event_DEC) {
        /* Transition: '<S2>:49' */
        localDW->bitsForTID0.is_Multi = sltestFuelRateControlE_IN_Three;
      }
      break;

     case sltestFuelRateControlE_IN_Three:
      /* During 'Three': '<S2>:16' */
      /* Three of the engine sensors have failed. */
      if (localDW->sfEvent == sltestFuelRateControl_event_INC) {
        /* Transition: '<S2>:45' */
        localDW->bitsForTID0.is_Multi = sltestFuelRateControlEx_IN_Four;
      } else {
        if (localDW->sfEvent == sltestFuelRateControl_event_DEC) {
          /* Transition: '<S2>:50' */
          localDW->bitsForTID0.is_Multi = sltestFuelRateControlExa_IN_Two;
        }
      }
      break;

     case sltestFuelRateControlExa_IN_Two:
      /* During 'Two': '<S2>:18' */
      /* Two of the engine sensors have failed. */
      if (localDW->sfEvent == sltestFuelRateControl_event_DEC) {
        /* Transition: '<S2>:51' */
        localDW->bitsForTID0.is_Multi = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        if (localDW->bitsForTID0.is_Fail == sltestFuelRateControlE_IN_Multi) {
          localDW->bitsForTID0.is_Fail = sltestFuelRa_IN_NO_ACTIVE_CHILD;
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateC_exit_from_Multi;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fueling_Mode != 0U) {
            /* Chart: '<Root>/control_logic'
             *
             * Block description for '<Root>/control_logic':
             *  Stateflow diagram to determine control system operating mode
             */
            sltestFuelRateCont_Fueling_Mode(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
        }

        localDW->bitsForTID0.is_Fail = sltestFuelRateControlExa_IN_One;
      } else {
        if (localDW->sfEvent == sltestFuelRateControl_event_INC) {
          /* Transition: '<S2>:47' */
          localDW->bitsForTID0.is_Multi = sltestFuelRateControlE_IN_Three;
        }
      }
      break;

     default:
      /* Unreachable state, for coverage only */
      localDW->bitsForTID0.is_Multi = sltestFuelRa_IN_NO_ACTIVE_CHILD;
      break;
    }
    break;

   case sltestFuelRateControlEx_IN_None:
    /* During 'None': '<S2>:20' */
    /* Zero failures; all sensors are operational. */
    if (localDW->sfEvent == sltestFuelRateControl_event_INC) {
      /* Transition: '<S2>:46' */
      localDW->bitsForTID0.is_Fail = sltestFuelRateControlExa_IN_One;
    }
    break;

   case sltestFuelRateControlExa_IN_One:
    /* During 'One': '<S2>:19' */
    /* One of the engine sensors has failed. */
    if (localDW->sfEvent == sltestFuelRateControl_event_INC) {
      /* Transition: '<S2>:48' */
      localDW->bitsForTID0.is_Fail = sltestFuelRateControlE_IN_Multi;
      b_previousEvent = localDW->sfEvent;
      localDW->sfEvent = sltestFuelRateCo_entry_to_Multi;
      if ((uint32_T)localDW->bitsForTID0.is_active_Fueling_Mode != 0U) {
        /* Chart: '<Root>/control_logic'
         *
         * Block description for '<Root>/control_logic':
         *  Stateflow diagram to determine control system operating mode
         */
        sltestFuelRateCont_Fueling_Mode(rtu_sensors, rty_Fueling_Mode, localDW);
      }

      localDW->sfEvent = b_previousEvent;
      localDW->bitsForTID0.is_Multi = sltestFuelRateControlExa_IN_Two;
    } else {
      if (localDW->sfEvent == sltestFuelRateControl_event_DEC) {
        /* Transition: '<S2>:52' */
        localDW->bitsForTID0.is_Fail = sltestFuelRateControlEx_IN_None;
      }
    }
    break;

   default:
    /* Unreachable state, for coverage only */
    localDW->bitsForTID0.is_Fail = sltestFuelRa_IN_NO_ACTIVE_CHILD;
    break;
  }
}

/* System initialize for referenced model: 'sltestFuelRateControlExample' */
void sltestFuelRateControlExamp_Init(Fueling_ModeType *rty_Fueling_Mode,
  sltestFuelRateControlExamp_rtDW *localDW)
{
  /* SystemInitialize for Chart: '<Root>/control_logic'
   *
   * Block description for '<Root>/control_logic':
   *  Stateflow diagram to determine control system operating mode
   */
  localDW->sfEvent = sltestFuelRateContro_CALL_EVENT;
  localDW->es_o.throttle = 0.0F;
  localDW->es_o.speed = 0.0F;
  localDW->es_o.ego = 0.0F;
  localDW->es_o.map = 0.0F;
  localDW->fuel_mode = LOW;
  *rty_Fueling_Mode = Fueling_ModeType_None;
}

/* Start for referenced model: 'sltestFuelRateControlExample' */
void sltestFuelRateControlExam_Start(sltestFuelRateControlExamp_rtDW *localDW)
{
  /* Start for SwitchCase: '<S9>/Switch Case' */
  localDW->SwitchCase_ActiveSubsystem = -1;
}

/* Outputs for referenced model: 'sltestFuelRateControlExample' */
void sltestFuelRateControlExample(const EngSensors *rtu_sensors, real32_T
  *rty_fuel_rate, Fueling_ModeType *rty_Fueling_Mode,
  sltestFuelRateControlExamp_rtDW *localDW)
{
  int32_T b_previousEvent;
  real32_T rtb_MultiportSwitch;
  real32_T PressureEstimation;

  /* Chart: '<Root>/control_logic'
   *
   * Block description for '<Root>/control_logic':
   *  Stateflow diagram to determine control system operating mode
   */
  /* Gateway: control_logic */
  localDW->sfEvent = sltestFuelRateContro_CALL_EVENT;
  if ((uint32_T)localDW->temporalCounter_i1 < 511U) {
    localDW->temporalCounter_i1 = (uint16_T)(int32_T)((int32_T)
      localDW->temporalCounter_i1 + 1);
  }

  /* During: control_logic */
  if ((uint32_T)localDW->bitsForTID0.is_active_c1_sltestFuelRateCont == 0U) {
    /* Entry: control_logic */
    localDW->bitsForTID0.is_active_c1_sltestFuelRateCont = 1U;

    /* Entry Internal: control_logic */
    localDW->bitsForTID0.is_active_O2 = 1U;

    /* Entry Internal 'O2': '<S2>:1' */
    /* Transition: '<S2>:180' */
    localDW->bitsForTID0.is_O2 = sltestFuelRateControlExamp_IN_A;

    /* Entry Internal 'A': '<S2>:171' */
    /* Transition: '<S2>:35' */
    if (localDW->bitsForTID0.is_A != sltestFuelRateCont_IN_O2_warmup) {
      localDW->bitsForTID0.is_A = sltestFuelRateCont_IN_O2_warmup;
      localDW->temporalCounter_i1 = 0U;
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Pressure != 1U) {
      localDW->bitsForTID0.is_active_Pressure = 1U;

      /* Entry 'Pressure': '<S2>:2' */
    }

    /* Entry Internal 'Pressure': '<S2>:2' */
    /* Transition: '<S2>:34' */
    localDW->bitsForTID0.is_Pressure = sltestFuelRateControl_IN_normal;
    if ((uint32_T)localDW->bitsForTID0.is_active_Throttle != 1U) {
      localDW->bitsForTID0.is_active_Throttle = 1U;

      /* Entry 'Throttle': '<S2>:8' */
    }

    /* Entry Internal 'Throttle': '<S2>:8' */
    /* Transition: '<S2>:39' */
    localDW->bitsForTID0.is_Throttle = sltestFuelRateControl_IN_normal;
    if ((uint32_T)localDW->bitsForTID0.is_active_Speed != 1U) {
      localDW->bitsForTID0.is_active_Speed = 1U;

      /* Entry 'Speed': '<S2>:9' */
    }

    /* Entry Internal 'Speed': '<S2>:9' */
    /* Transition: '<S2>:41' */
    localDW->bitsForTID0.is_Speed = sltestFuelRateControl_IN_normal;
    localDW->bitsForTID0.is_active_Fail = 1U;

    /* Entry Internal 'Fail': '<S2>:14' */
    /* Transition: '<S2>:44' */
    localDW->bitsForTID0.is_Fail = sltestFuelRateControlEx_IN_None;
    localDW->bitsForTID0.is_active_Fueling_Mode = 1U;

    /* Entry Internal 'Fueling_Mode': '<S2>:21' */
    /* Transition: '<S2>:64' */
    localDW->es_o = *rtu_sensors;

    /* Need to copy the sensors to the output on entry since the individual elements of the bus signal are only updated in the during function. */
    localDW->bitsForTID0.is_Fueling_Mode = sltestFuelRateContro_IN_Running;
    if (localDW->bitsForTID0.is_Running != sltestFuelRate_IN_Low_Emissions) {
      localDW->bitsForTID0.is_Running = sltestFuelRate_IN_Low_Emissions;
      localDW->bitsForTID0.was_Running = sltestFuelRate_IN_Low_Emissions;

      /* Entry 'Low_Emissions': '<S2>:25' */
      localDW->fuel_mode = LOW;
    }

    localDW->bitsForTID0.is_Low_Emissions = sltestFuelRateControl_IN_Warmup;
    localDW->bitsForTID0.was_Low_Emissions = sltestFuelRateControl_IN_Warmup;
    *rty_Fueling_Mode = Fueling_ModeType_Warmup;
  } else {
    if (!(((uint32_T)localDW->bitsForTID0.is_active_O2 == 0U) ||
          (localDW->bitsForTID0.is_O2 != sltestFuelRateControlExamp_IN_A))) {
      /* During 'O2': '<S2>:1' */
      /* This state determines the validity of the exhaust gas oxygen sensor (EGO) data. */
      /* During 'A': '<S2>:171' */
      localDW->es_o.ego = rtu_sensors->ego;
      switch (localDW->bitsForTID0.is_A) {
       case sltestFuelRateCon_IN_O2_failure:
        /* During 'O2_failure': '<S2>:3' */
        /* The EGO sensor has failed. */
        if (rtu_sensors->ego < 1.2F) {
          /* Transition: '<S2>:32' */
          localDW->bitsForTID0.is_A = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:91' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_DEC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_A = sltestFuelRateCont_IN_O2_normal;
          localDW->bitsForTID0.O2_normal = true;
        }
        break;

       case sltestFuelRateCont_IN_O2_normal:
        /* During 'O2_normal': '<S2>:7' */
        /* Normal EGO sensor operation gives a reliable indication of excess oxygen in the exhaust gas, from which air/fuel mixture can be inferred. */
        if (rtu_sensors->ego > 1.2F) {
          /* Transition: '<S2>:33' */
          /* The failure condition is indicated by excessive output voltage. */
          localDW->bitsForTID0.O2_normal = false;
          localDW->bitsForTID0.is_A = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:92' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_INC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_A = sltestFuelRateCon_IN_O2_failure;
        }
        break;

       case sltestFuelRateCont_IN_O2_warmup:
        /* During 'O2_warmup': '<S2>:4' */
        /* The EGO sensor must come up to temperature before its data is reliable. */
        if ((int32_T)localDW->temporalCounter_i1 >= 480) {
          /* Transition: '<S2>:36' */
          /* The value for sufficient warm up to operational temperature (nominally 4.8 seconds). */
          localDW->bitsForTID0.is_A = sltestFuelRateCont_IN_O2_normal;
          localDW->bitsForTID0.O2_normal = true;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        localDW->bitsForTID0.is_A = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        break;
      }
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Pressure != 0U) {
      /* During 'Pressure': '<S2>:2' */
      /* This state assesses the validity of the manifold absolute pressure (MAP) sensor. */
      switch (localDW->bitsForTID0.is_Pressure) {
       case sltestFuelRateControlEx_IN_fail:
        /* During 'fail': '<S2>:6' */
        /* The pressure sensor (manifold, or MAP) no longer produces reliable data. */
        if ((rtu_sensors->map > 0.05F) && (rtu_sensors->map < 0.95F)) {
          /* Transition: '<S2>:37' */
          localDW->bitsForTID0.is_Pressure = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:91' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_DEC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Pressure = sltestFuelRateControl_IN_normal;
        } else {
          /* Outputs for Function Call SubSystem: '<S2>/Pressure.map_estimate' */
          /* Lookup_n-D: '<S5>/Pressure Estimation' */
          /* Simulink Function 'map_estimate': '<S2>:112' */
          PressureEstimation = look2_iflf_linlca(rtu_sensors->speed,
            rtu_sensors->throttle, rtCP_PressureEstimation_bp01Dat,
            rtCP_PressureEstimation_bp02Dat, rtCP_PressureEstimation_tableDa,
            rtCP_PressureEstimation_maxInde, 18U);

          /* End of Outputs for SubSystem: '<S2>/Pressure.map_estimate' */
          localDW->es_o.map = PressureEstimation;
        }
        break;

       case sltestFuelRateControl_IN_normal:
        /* During 'normal': '<S2>:5' */
        /* The manifold pressure sensor gives a reliable indication of absolute pressure (MAP). */
        if ((rtu_sensors->map > 0.95F) || (rtu_sensors->map < 0.05F)) {
          /* Transition: '<S2>:31' */
          localDW->bitsForTID0.is_Pressure = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:92' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_INC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Pressure = sltestFuelRateControlEx_IN_fail;
        } else {
          localDW->es_o.map = rtu_sensors->map;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        localDW->bitsForTID0.is_Pressure = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        break;
      }
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Throttle != 0U) {
      /* During 'Throttle': '<S2>:8' */
      /* This state determines the validity of the throttle sensor signal. */
      switch (localDW->bitsForTID0.is_Throttle) {
       case sltestFuelRateControlEx_IN_fail:
        /* During 'fail': '<S2>:11' */
        /* Signal levels indicate that the throttle sensor data is no longer valid. */
        if ((rtu_sensors->throttle > 3.0F) && (rtu_sensors->throttle < 90.0F)) {
          /* Transition: '<S2>:42' */
          localDW->bitsForTID0.is_Throttle = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:91' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_DEC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Throttle = sltestFuelRateControl_IN_normal;
        } else {
          /* Outputs for Function Call SubSystem: '<S2>/Throttle.throttle_estimate' */
          /* Lookup_n-D: '<S7>/Throttle Estimation' */
          /* Simulink Function 'throttle_estimate': '<S2>:107' */
          PressureEstimation = look2_iflf_linlca(rtu_sensors->speed,
            rtu_sensors->map, rtCP_ThrottleEstimation_bp01Dat,
            rtCP_ThrottleEstimation_bp02Dat, rtCP_ThrottleEstimation_tableDa,
            rtCP_ThrottleEstimation_maxInde, 18U);

          /* End of Outputs for SubSystem: '<S2>/Throttle.throttle_estimate' */
          localDW->es_o.throttle = PressureEstimation;
        }
        break;

       case sltestFuelRateControl_IN_normal:
        /* During 'normal': '<S2>:10' */
        /* The throttle sensor gives a reliable indication of the angle of the throttle plate. */
        if ((rtu_sensors->throttle > 90.0F) || (rtu_sensors->throttle < 3.0F)) {
          /* Transition: '<S2>:38' */
          /* A failure is indicated by data which is outside the expected range, typically due to an open or short circuit. */
          localDW->bitsForTID0.is_Throttle = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:92' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_INC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Throttle = sltestFuelRateControlEx_IN_fail;
        } else {
          localDW->es_o.throttle = rtu_sensors->throttle;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        localDW->bitsForTID0.is_Throttle = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        break;
      }
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Speed != 0U) {
      /* During 'Speed': '<S2>:9' */
      /* This state infers the validity of the speed sensor data.  A failure is indicated by the presence of manifold vacuum at zero speed. */
      switch (localDW->bitsForTID0.is_Speed) {
       case sltestFuelRateControlEx_IN_fail:
        /* During 'fail': '<S2>:13' */
        /* The engine speed data is no longer available. */
        if (rtu_sensors->speed > 0.0F) {
          /* Transition: '<S2>:43' */
          localDW->bitsForTID0.is_Speed = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:91' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_DEC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Speed = sltestFuelRateControl_IN_normal;
        } else {
          /* Outputs for Function Call SubSystem: '<S2>/Speed.speed_estimate' */
          /* Lookup_n-D: '<S6>/Speed Estimation' */
          /* Simulink Function 'speed_estimate': '<S2>:119' */
          PressureEstimation = look2_iflf_linlca(rtu_sensors->throttle,
            rtu_sensors->map, rtCP_SpeedEstimation_bp01Data,
            rtCP_SpeedEstimation_bp02Data, rtCP_SpeedEstimation_tableData,
            rtCP_SpeedEstimation_maxIndex, 17U);

          /* Saturate: '<S6>/Saturation' */
          if (PressureEstimation > 628.0F) {
            localDW->es_o.speed = 628.0F;
          } else if (PressureEstimation < 0.0F) {
            localDW->es_o.speed = 0.0F;
          } else {
            localDW->es_o.speed = PressureEstimation;
          }

          /* End of Saturate: '<S6>/Saturation' */
          /* End of Outputs for SubSystem: '<S2>/Speed.speed_estimate' */
        }
        break;

       case sltestFuelRateControl_IN_normal:
        /* During 'normal': '<S2>:12' */
        /* The speed sensor data accurately represents the engine speed. */
        if ((rtu_sensors->speed == 0.0F) && (rtu_sensors->map < 250.0F)) {
          /* Transition: '<S2>:40' */
          /* Loss of a reliable speed sensor signal will indicate zero speed.  This is deemed invalid when the manifold vacuum indicates otherwise. */
          localDW->bitsForTID0.is_Speed = sltestFuelRa_IN_NO_ACTIVE_CHILD;

          /* Event: '<S2>:92' */
          b_previousEvent = localDW->sfEvent;
          localDW->sfEvent = sltestFuelRateControl_event_INC;
          if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
            sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode,
              localDW);
          }

          localDW->sfEvent = b_previousEvent;
          localDW->bitsForTID0.is_Speed = sltestFuelRateControlEx_IN_fail;
        } else {
          localDW->es_o.speed = rtu_sensors->speed;
        }
        break;

       default:
        /* Unreachable state, for coverage only */
        localDW->bitsForTID0.is_Speed = sltestFuelRa_IN_NO_ACTIVE_CHILD;
        break;
      }
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Fail != 0U) {
      sltestFuelRateControlExamp_Fail(rtu_sensors, rty_Fueling_Mode, localDW);
    }

    if ((uint32_T)localDW->bitsForTID0.is_active_Fueling_Mode != 0U) {
      sltestFuelRateCont_Fueling_Mode(rtu_sensors, rty_Fueling_Mode, localDW);
    }
  }

  /* End of Chart: '<Root>/control_logic' */

  /* Lookup_n-D: '<S1>/Pumping Constant' */
  rtb_MultiportSwitch = look2_iflf_linlca(localDW->es_o.speed, localDW->es_o.map,
    rtCP_PumpingConstant_bp01Data, rtCP_PumpingConstant_bp02Data,
    rtCP_PumpingConstant_tableData, rtCP_PumpingConstant_maxIndex, 18U);

  /* Product: '<S1>/Product' */
  PressureEstimation = localDW->es_o.speed * rtb_MultiportSwitch;

  /* DiscreteFilter: '<S1>/Throttle Transient' */
  localDW->ThrottleTransient_tmp = localDW->es_o.throttle - -0.8F *
    localDW->ThrottleTransient_states;

  /* Switch: '<S1>/hold integrator' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant2'
   *  Constant: '<S1>/Oxygen Sensor Switching Threshold'
   *  Constant: '<S4>/Constant'
   *  DataTypeConversion: '<S1>/Data Type  Conversion'
   *  Logic: '<S1>/Logic1'
   *  Product: '<S1>/Product1'
   *  RelationalOperator: '<S1>/Relational Operator1'
   *  RelationalOperator: '<S1>/Relational Operator3'
   *  Sum: '<S1>/Sum1'
   */
  if (localDW->bitsForTID0.O2_normal && (localDW->fuel_mode == LOW)) {
    /* Lookup_n-D: '<S1>/Ramp Rate Ki' */
    rtb_MultiportSwitch = look2_iflf_linlca(localDW->es_o.speed,
      localDW->es_o.map, rtCP_RampRateKi_bp01Data, rtCP_RampRateKi_bp02Data,
      rtCP_RampRateKi_tableData, rtCP_RampRateKi_maxIndex, 6U);
    localDW->holdintegrator = ((real32_T)(localDW->es_o.ego <= 0.5F) - 0.5F) *
      rtb_MultiportSwitch;
  } else {
    localDW->holdintegrator = 0.0F;
  }

  /* End of Switch: '<S1>/hold integrator' */

  /* MultiPortSwitch: '<S8>/Multiport Switch' incorporates:
   *  Constant: '<S8>/normal'
   *  Constant: '<S8>/rich'
   *  Constant: '<S8>/shutdown'
   */
  switch (localDW->fuel_mode) {
   case LOW:
    rtb_MultiportSwitch = 0.0684931502F;
    break;

   case RICH:
    rtb_MultiportSwitch = 0.0856164396F;
    break;

   default:
    rtb_MultiportSwitch = 0.0F;
    break;
  }

  /* End of MultiPortSwitch: '<S8>/Multiport Switch' */

  /* Product: '<S8>/Product' incorporates:
   *  DiscreteFilter: '<S1>/Throttle Transient'
   *  Product: '<S1>/Product2'
   *  Sum: '<S1>/Sum'
   */
  PressureEstimation = ((0.01F * localDW->ThrottleTransient_tmp + -0.01F *
    localDW->ThrottleTransient_states) + PressureEstimation * localDW->es_o.map)
    * rtb_MultiportSwitch;

  /* SwitchCase: '<S9>/Switch Case' incorporates:
   *  Constant: '<S10>/shutoff'
   */
  switch (localDW->fuel_mode) {
   case LOW:
    localDW->SwitchCase_ActiveSubsystem = 0;
    break;

   case RICH:
    localDW->SwitchCase_ActiveSubsystem = 1;
    break;

   default:
    localDW->SwitchCase_ActiveSubsystem = 2;
    break;
  }

  switch (localDW->SwitchCase_ActiveSubsystem) {
   case 0:
    /* Outputs for IfAction SubSystem: '<S9>/low_mode' incorporates:
     *  ActionPort: '<S11>/Action Port'
     */
    /* DiscreteFilter: '<S11>/Discrete Filter' incorporates:
     *  DiscreteIntegrator: '<S1>/Discrete Integrator'
     */
    localDW->DiscreteFilter_tmp = localDW->DiscreteIntegrator_DSTATE - -0.7408F *
      localDW->DiscreteFilter_states_p;

    /* Sum: '<S11>/Sum3' incorporates:
     *  DiscreteFilter: '<S11>/Discrete Filter'
     */
    *rty_fuel_rate = (8.7696F * localDW->DiscreteFilter_tmp + -8.5104F *
                      localDW->DiscreteFilter_states_p) + PressureEstimation;

    /* End of Outputs for SubSystem: '<S9>/low_mode' */
    break;

   case 1:
    /* Outputs for IfAction SubSystem: '<S9>/rich_mode' incorporates:
     *  ActionPort: '<S12>/Action Port'
     */
    /* DiscreteFilter: '<S12>/Discrete Filter' */
    *rty_fuel_rate = 0.2592F * localDW->DiscreteFilter_states;

    /* Sum: '<S12>/Sum2' incorporates:
     *  DiscreteIntegrator: '<S1>/Discrete Integrator'
     */
    localDW->Sum2 = PressureEstimation + localDW->DiscreteIntegrator_DSTATE;

    /* End of Outputs for SubSystem: '<S9>/rich_mode' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<S9>/disabled_mode' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    *rty_fuel_rate = 0.0F;

    /* End of Outputs for SubSystem: '<S9>/disabled_mode' */
    break;
  }

  /* End of SwitchCase: '<S9>/Switch Case' */
}

/* Update for referenced model: 'sltestFuelRateControlExample' */
void sltestFuelRateControlExa_Update(sltestFuelRateControlExamp_rtDW *localDW)
{
  /* Update for DiscreteIntegrator: '<S1>/Discrete Integrator' */
  localDW->DiscreteIntegrator_DSTATE += 0.01F * localDW->holdintegrator;

  /* Update for DiscreteFilter: '<S1>/Throttle Transient' */
  localDW->ThrottleTransient_states = localDW->ThrottleTransient_tmp;

  /* Update for SwitchCase: '<S9>/Switch Case' */
  switch (localDW->SwitchCase_ActiveSubsystem) {
   case 0:
    /* Update for IfAction SubSystem: '<S9>/low_mode' incorporates:
     *  Update for ActionPort: '<S11>/Action Port'
     */
    /* Update for DiscreteFilter: '<S11>/Discrete Filter' */
    localDW->DiscreteFilter_states_p = localDW->DiscreteFilter_tmp;

    /* End of Update for SubSystem: '<S9>/low_mode' */
    break;

   case 1:
    /* Update for IfAction SubSystem: '<S9>/rich_mode' incorporates:
     *  Update for ActionPort: '<S12>/Action Port'
     */
    /* Update for DiscreteFilter: '<S12>/Discrete Filter' */
    localDW->DiscreteFilter_states = localDW->Sum2 - -0.7408F *
      localDW->DiscreteFilter_states;

    /* End of Update for SubSystem: '<S9>/rich_mode' */
    break;

   case 2:
    break;
  }

  /* End of Update for SwitchCase: '<S9>/Switch Case' */
}

/* Model initialize function */
void sltestFuelRateContro_initialize(const char_T **rt_errorStatus,
  sltestFuelRateControlE_RT_MODEL *const sltestFuelRateControlExamplrtM,
  sltestFuelRateControlExamp_rtDW *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(sltestFuelRateControlExamplrtM, rt_errorStatus);

  /* states (dwork) */
  {
    localDW->fuel_mode = LOW;
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
