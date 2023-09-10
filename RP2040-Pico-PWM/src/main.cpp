#include <Arduino.h>
#include <math.h>
#include "RP2040_PWM.h"

RP2040_PWM *PWM_Instance;

float frequency = 20000;

#define pinToUse LED_BUILTIN

void setup() { PWM_Instance = new RP2040_PWM(pinToUse, frequency, 0); }

void loop() {
  for(int i = 0; i < 80; i++){
    PWM_Instance->setPWM(pinToUse, frequency, abs(40 - i));
    delay(50);
  }
}