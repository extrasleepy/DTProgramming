#include <Adafruit_NeoPixel.h>   //include library

#define PIN            6  // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      5  // How many NeoPixels are attached to the Arduino?

// When we setup the NeoPixel library object, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();                       // This initializes the NeoPixel library.
}

void loop() { 
  
    pixels.setPixelColor(0, 0, 0, 255); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();                      // This sends the updated pixel color to the hardware.
    delay(1000);                        // Delay for one second

    pixels.setPixelColor(0, 0, 255, 0); 
    pixels.show(); 
    delay(1000); 

    pixels.setPixelColor(0, 0, 0, 0);   
    pixels.show(); 
    delay(1000); 
    
}
