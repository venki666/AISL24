#include <FastLED.h>
#define NUM_LEDS 1     //Number of RGB LED beads
#define DATA_PIN D8    //The pin for controlling RGB LED
#define LED_TYPE NEOPIXEL    //RGB LED strip type
CRGB leds[NUM_LEDS];    //Instantiate RGB LED

void setup() { 
    FastLED.addLeds<LED_TYPE, DATA_PIN>(leds, NUM_LEDS);     //Initialize RGB LED
}

void loop() { 
  leds[0] = CRGB::Red;     //LED shows red light
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Green;    //LED shows green light
  FastLED.show();
  delay(1000);
  leds[0] = CRGB::Blue;     // LED shows blue light
  FastLED.show();
  delay(1000);
  leds[0] = CRGB(random(0,255),random(0,255),random(0,255));    // LED shows a randomly mixed color
  FastLED.show();
  delay(1000);
}