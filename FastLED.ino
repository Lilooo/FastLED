#include "FastLED.h"

#define NUM_LEDS 30
#define DATA_PIN 6

int fadeAmount = 5;
int brightness = 0;

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  for(int i = 0; i < NUM_LEDS; i++ ) {
   leds[i].setRGB(0,255,0);
   leds[i].fadeToBlackBy(brightness);
  }
  FastLED.show();
  brightness = brightness + fadeAmount;
  if(brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }
  
  delay(30); 

}  
