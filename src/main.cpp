extern "C"{
#include "PCMS.h"
#include "PercCalculateFunc.h"
}
#include <Arduino.h>




void setup() {
  // put your setup code here, to run once:
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,INPUT);
  
  
}

void loop() {
  PCMS_U.PercRawVal_u16 = analogRead(A0);
  PCMS_U.motorDirectionControlSW_B = digitalRead(8);
  // put your main code here, to run repeatedly:
  PCMS_PercCalculateFunc(PCMS_U.PercRawVal_u16, PCMS_U.motorDirectionControlSW_B,
    &PCMS_Y.IndicatorLamp_B, &PCMS_Y.motorTerminalA_B, &PCMS_Y.motorTerminalB_B,
    &PCMS_DW.PercCalculateFunc, &PCMS_PrevZCX.PercCalculateFunc);
  digitalWrite(8,PCMS_Y.IndicatorLamp_B);
  digitalWrite(9,PCMS_Y.motorTerminalA_B);
  digitalWrite(10,PCMS_Y.motorTerminalB_B);  
}

