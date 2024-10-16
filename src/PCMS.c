/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PCMS.c
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

#include "PCMS.h"
#include "PercCalculateFunc.h"

/* Block states (default storage) */
DW_PCMS_T PCMS_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_PCMS_T PCMS_PrevZCX;

/* External inputs (root inport signals with default storage) */
ExtU_PCMS_T PCMS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PCMS_T PCMS_Y;

/* Real-time model */
static RT_MODEL_PCMS_T PCMS_M_;
RT_MODEL_PCMS_T *const PCMS_M = &PCMS_M_;

/* Model step function */
void PCMS_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/PercCalculateFunc' */

  /* Inport: '<Root>/PercRawVal_u16' incorporates:
   *  Inport: '<Root>/motorDirectionControlSW_B'
   *  Outport: '<Root>/IndicatorLamp_B'
   *  Outport: '<Root>/motorTerminalA_B'
   *  Outport: '<Root>/motorTerminalB_B'
   */
  PCMS_PercCalculateFunc(PCMS_U.PercRawVal_u16, PCMS_U.motorDirectionControlSW_B,
    &PCMS_Y.IndicatorLamp_B, &PCMS_Y.motorTerminalA_B, &PCMS_Y.motorTerminalB_B,
    &PCMS_DW.PercCalculateFunc, &PCMS_PrevZCX.PercCalculateFunc);

  /* End of Outputs for SubSystem: '<Root>/PercCalculateFunc' */
}

/* Model initialize function */
void PCMS_initialize(void)
{
  PCMS_PrevZCX.PercCalculateFunc.Delay_Reset_ZCE = POS_ZCSIG;
}

/* Model terminate function */
void PCMS_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
