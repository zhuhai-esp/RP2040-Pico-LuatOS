#include <Arduino.h>
#include "RP2040_PWM.h"

RP2040_PWM *PWM_Instance;

float frequency;
float dutyCycle;

#define pinToUse LED_BUILTIN

void setup() { PWM_Instance = new RP2040_PWM(pinToUse, 20000, 0); }

void loop() {
  delay(1000);
  frequency = 20000;
  dutyCycle = 90;
  PWM_Instance->setPWM(pinToUse, frequency, dutyCycle);
  delay(1000);
  dutyCycle = 10;
  PWM_Instance->setPWM(pinToUse, frequency, dutyCycle);
}