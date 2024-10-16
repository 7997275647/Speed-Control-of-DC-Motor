/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PercCalculateFunc.c
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

#include "rtwtypes.h"
#include "PercCalculateFunc.h"
#include "zero_crossing_types.h"

/* Output and update for atomic system: '<Root>/PercCalculateFunc' */
void PCMS_PercCalculateFunc(uint16_T rtu_PercRawVal_u16, boolean_T
  rtu_motorDirectionControlSW_B, boolean_T *rty_IndicatorLamp_B, boolean_T
  *rty_motorTerminalA_B, boolean_T *rty_motorTerminalB_B,
  DW_PercCalculateFunc_PCMS_T *localDW, ZCE_PercCalculateFunc_PCMS_T *localZCE)
{
  real_T rtb_Product;

  /* Product: '<S1>/Product' incorporates:
   *  Constant: '<S1>/Constant'
   *  Constant: '<S1>/Constant1'
   *  DataTypeConversion: '<S1>/Data Type Conversion'
   *  Product: '<S1>/Divide'
   */
  rtb_Product = (real32_T)rtu_PercRawVal_u16 / 1023.0F * 100.0;

  /* RelationalOperator: '<S1>/GreaterThan' incorporates:
   *  Constant: '<S1>/Constant2'
   */
  *rty_IndicatorLamp_B = (rtb_Product > 50.0);

  /* Delay: '<S1>/Delay' incorporates:
   *  Delay: '<S1>/Delay1'
   */
  if (localDW->Delay1_DSTATE && (localZCE->Delay_Reset_ZCE != POS_ZCSIG)) {
    localDW->Delay_DSTATE = 0;
  }

  localZCE->Delay_Reset_ZCE = localDW->Delay1_DSTATE;

  /* Sum: '<S1>/Add' incorporates:
   *  Constant: '<S1>/Constant5'
   *  Delay: '<S1>/Delay'
   */
  localDW->Delay_DSTATE++;

  /* RelationalOperator: '<S1>/LessThanOrEqual' incorporates:
   *  Delay: '<S1>/Delay'
   */
  *rty_motorTerminalB_B = (rtb_Product <= localDW->Delay_DSTATE);

  /* Switch: '<S1>/Switch' */
  *rty_motorTerminalA_B = (rtu_motorDirectionControlSW_B &&
    (*rty_motorTerminalB_B));

  /* Switch: '<S1>/Switch1' */
  *rty_motorTerminalB_B = ((!rtu_motorDirectionControlSW_B) &&
    (*rty_motorTerminalB_B));

  /* RelationalOperator: '<S1>/GreaterThan1' incorporates:
   *  Constant: '<S1>/Constant6'
   *  Delay: '<S1>/Delay'
   *  Delay: '<S1>/Delay1'
   */
  localDW->Delay1_DSTATE = (localDW->Delay_DSTATE > 100);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
