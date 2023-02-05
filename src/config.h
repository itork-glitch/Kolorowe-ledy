#include <Adafruit_NeoPixel.h>

int PIN = 6;
int NUM_LEDS = 60;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUM_LEDS, PIN, NEO_GRB + NEO_KHZ800);