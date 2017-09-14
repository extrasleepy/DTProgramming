//example of how to write Arduino functions()
#include <Adafruit_NeoPixel.h>   //include library

#define PIN            6  // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      5  // How many NeoPixels are attached to the Arduino?

// When we setup the NeoPixel library object, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup()  {           //set pins as outputs
  pixels.begin();                             // This initializes the NeoPixel library.
}

void loop() {             //main loop
  redFade();              //call function
  greenFlash();           //call function
  trueBlue();             //call function
}                         //end main loop

void redFade() {
  for (int level = 0; level <= 255; level++) {
    pixels.setPixelColor(0, level, 0, 0);
    pixels.setPixelColor(1, level, 0, 0);
    pixels.setPixelColor(2, level, 0, 0);
    pixels.setPixelColor(3, level, 0, 0);
    pixels.setPixelColor(4, level, 0, 0);
    pixels.show();
    delay(10);
  }
  for (int level = 0; level <= 255; level++) {
    pixels.setPixelColor(0, 255-level, 0, 0);
    pixels.setPixelColor(1, 255-level, 0, 0);
    pixels.setPixelColor(2, 255-level, 0, 0);
    pixels.setPixelColor(3, 255-level, 0, 0);
    pixels.setPixelColor(4, 255-level, 0, 0);
    pixels.show();
    delay(10);
  }
}                                              //function ends here, return where main code left off

void greenFlash() {
   for (int times = 0; times <= 30; times++) {
    pixels.setPixelColor(0, 0, 255, 0);
    pixels.setPixelColor(1, 0, 255, 0);
    pixels.setPixelColor(2, 0, 255, 0);
    pixels.setPixelColor(3, 0, 255, 0);
    pixels.setPixelColor(4, 0, 255, 0);
    pixels.show();
    delay(20);
    pixels.setPixelColor(0, 0, 0, 0);
    pixels.setPixelColor(1, 0, 0, 0);
    pixels.setPixelColor(2, 0, 0, 0);
    pixels.setPixelColor(3, 0, 0, 0);
    pixels.setPixelColor(4, 0, 0, 0);
    pixels.show();
    delay(20);
   }
}

void trueBlue() {
  for (int times = 0; times <= 10; times++) {
    pixels.setPixelColor(0, 0, 0, 255);
    pixels.setPixelColor(1, 0, 0, 255);
    pixels.setPixelColor(2, 0, 0, 255);
    pixels.setPixelColor(3, 0, 0, 255);
    pixels.setPixelColor(4, 0, 0, 255);
    pixels.show();
    delay(200);
    pixels.setPixelColor(0, 0, 0, 0);
    pixels.setPixelColor(1, 0, 0, 0);
    pixels.setPixelColor(2, 0, 0, 0);
    pixels.setPixelColor(3, 0, 0, 0);
    pixels.setPixelColor(4, 0, 0, 0);
    pixels.show();
    delay(200);
   }
}
