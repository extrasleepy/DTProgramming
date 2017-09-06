#include <Adafruit_NeoPixel.h>   //include library

#define PIN            6  // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      5  // How many NeoPixels are attached to the Arduino?

int fadeSpeed = 5;

// When we setup the NeoPixel library object, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();                       // This initializes the NeoPixel library.
}

void loop() {

  for (int level = 0; level <= 255; level++) {
    pixels.setPixelColor(0, level, 0, 255-level); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.setPixelColor(4, 255-level, 0, level); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();
    delay(fadeSpeed);
  }
   for (int level = 0; level <= 255; level++) {
    pixels.setPixelColor(0, 255-level, 0, level); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.setPixelColor(4, level, 0, 255-level); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();
    delay(fadeSpeed);
  }
}
