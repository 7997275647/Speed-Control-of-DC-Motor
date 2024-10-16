/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCMS.h
 *
 * Code generated for Simulink model 'PCMS'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 24.2 (R2024b) 21-Jun-2024
 * C/C++ source code generated on : Wed Oct 16 15:29:50 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef PCMS_h_
#define PCMS_h_
#ifndef PCMS_COMMON_INCLUDES_
#define PCMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PCMS_COMMON_INCLUDES_ */

#include "PCMS_types.h"
#include "PercCalculateFunc.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  DW_PercCalculateFunc_PCMS_T PercCalculateFunc;/* '<Root>/PercCalculateFunc' */
} DW_PCMS_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCE_PercCalculateFunc_PCMS_T PercCalculateFunc;/* '<Root>/PercCalculateFunc' */
} PrevZCX_PCMS_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint16_T PercRawVal_u16;             /* '<Root>/PercRawVal_u16' */
  boolean_T motorDirectionControlSW_B; /* '<Root>/motorDirectionControlSW_B' */
} ExtU_PCMS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T IndicatorLamp_B;           /* '<Root>/IndicatorLamp_B' */
  boolean_T motorTerminalA_B;          /* '<Root>/motorTerminalA_B' */
  boolean_T motorTerminalB_B;          /* '<Root>/motorTerminalB_B' */
} ExtY_PCMS_T;

/* Real-time Model Data Structure */
struct tag_RTM_PCMS_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_PCMS_T PCMS_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_PCMS_T PCMS_PrevZCX;

/* External inputs (root inport signals with default storage) */
extern ExtU_PCMS_T PCMS_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PCMS_T PCMS_Y;

/* Model entry point functions */
extern void PCMS_initialize(void);
extern void PCMS_step(void);
extern void PCMS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PCMS_T *const PCMS_M;

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
 * '<Root>' : 'PCMS'
 * '<S1>'   : 'PCMS/PercCalculateFunc'
 */
#endif                                 /* PCMS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
