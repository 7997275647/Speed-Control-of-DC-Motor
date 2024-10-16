/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PercCalculateFunc.h
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

#ifndef PercCalculateFunc_h_
#define PercCalculateFunc_h_
#ifndef PCMS_COMMON_INCLUDES_
#define PCMS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "math.h"
#endif                                 /* PCMS_COMMON_INCLUDES_ */

#include "zero_crossing_types.h"

/* Block states (default storage) for system '<Root>/PercCalculateFunc' */
typedef struct {
  int8_T Delay_DSTATE;                 /* '<S1>/Delay' */
  boolean_T Delay1_DSTATE;             /* '<S1>/Delay1' */
} DW_PercCalculateFunc_PCMS_T;

/* Zero-crossing (trigger) state for system '<Root>/PercCalculateFunc' */
typedef struct {
  ZCSigState Delay_Reset_ZCE;          /* '<S1>/Delay' */
} ZCE_PercCalculateFunc_PCMS_T;

extern void PCMS_PercCalculateFunc(uint16_T rtu_PercRawVal_u16, boolean_T
  rtu_motorDirectionControlSW_B, boolean_T *rty_IndicatorLamp_B, boolean_T
  *rty_motorTerminalA_B, boolean_T *rty_motorTerminalB_B,
  DW_PercCalculateFunc_PCMS_T *localDW, ZCE_PercCalculateFunc_PCMS_T *localZCE);

#endif                                 /* PercCalculateFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
