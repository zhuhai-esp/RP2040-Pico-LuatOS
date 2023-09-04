#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

Adafruit_NeoPixel pixels(1, 23, NEO_BGR + NEO_KHZ800);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pixels.begin();
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  pixels.setPixelColor(0, pixels.Color(200, 100, 100));
  pixels.show();
  delay(300);
  digitalWrite(LED_BUILTIN, LOW);
  pixels.setPixelColor(0, pixels.Color(0, 10, 20));
  pixels.show();
  delay(2000);
}
