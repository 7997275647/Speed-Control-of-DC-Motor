extern "C"{
#include "PCMS.h"
#include "PercCalculateFunc.h"
}
#include <Arduino.h>

#define MOTOR_DIRECTION_CONTROLLSW 8
#define INDICATOR_LAMP 9
#define MOTOR_TERMINAL_A 10
#define MOTOR_TERMINAL_B 11

void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR_DIRECTION_CONTROLLSW,INPUT);
  pinMode(INDICATOR_LAMP,OUTPUT);
  pinMode(MOTOR_TERMINAL_A,OUTPUT);
  pinMode(MOTOR_TERMINAL_B,OUTPUT);
  
  
}

void loop() {
  PCMS_U.PercRawVal_u16 = analogRead(A0);
  PCMS_U.motorDirectionControlSW_B = digitalRead(MOTOR_DIRECTION_CONTROLLSW);
  // put your main code here, to run repeatedly:
  PCMS_PercCalculateFunc(PCMS_U.PercRawVal_u16, PCMS_U.motorDirectionControlSW_B,
    &PCMS_Y.IndicatorLamp_B, &PCMS_Y.motorTerminalA_B, &PCMS_Y.motorTerminalB_B,
    &PCMS_DW.PercCalculateFunc, &PCMS_PrevZCX.PercCalculateFunc);
  digitalWrite(INDICATOR_LAMP,PCMS_Y.IndicatorLamp_B);
  digitalWrite(MOTOR_TERMINAL_A,PCMS_Y.motorTerminalA_B);
  digitalWrite(MOTOR_TERMINAL_B,PCMS_Y.motorTerminalB_B);  
}

