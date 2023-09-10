#include <Adafruit_NeoPixel.h>
#include <Arduino.h>

Adafruit_NeoPixel pixels(1, 23, NEO_BGR + NEO_KHZ800);

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  pixels.setBrightness(20);
  pixels.begin();
}

void loop() {
  pixels.setPixelColor(0, pixels.Color(255, 0, 0));
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, pixels.Color(0, 255, 0));
  pixels.show();
  delay(500);
  pixels.setPixelColor(0, pixels.Color(0, 0, 255));
  pixels.show();
  delay(500);
  for (int i = 0; i < 65535; i += 10) {
    pixels.rainbow(i);
    pixels.show();
  }
}
