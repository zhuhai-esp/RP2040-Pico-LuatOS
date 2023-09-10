#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

Adafruit_NeoPixel pixels(1, 16, NEO_BGR + NEO_KHZ800);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  pixels.setBrightness(10);
  pixels.begin();
}

void loop() {
  for (int i = 0; i < 65536; i += 10) {
    pixels.rainbow(i);
    pixels.show();
  }
}
