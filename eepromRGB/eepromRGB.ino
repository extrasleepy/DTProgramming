#include <EEPROM.h>                           //include library
#include <Adafruit_NeoPixel.h>   //include library

#define PIN            6  // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      5  // How many NeoPixels are attached to the Arduino?

byte stored;                                   //data stored in EEPROM
int address = 0;                              //location in EEPROM

// When we setup the NeoPixel library object, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(9600);                         // sets up serial communication at 9600 bitss per second
  pixels.begin();                             // This initializes the NeoPixel library.

  stored = EEPROM.read(address);              // reads the data stored in address 0 and assigns to variable
  stored++;                                   //increment value
  Serial.println(stored);                     // Serial print the value

  if (stored > 2) {                           //set this number based on how many different functions you want
    stored = 0;
  }
  EEPROM.write(address, stored);              //write the incremented value to EEPROM for next Arduino startup
}

void loop() {                                 //one of 3 functions runs based on stored EEPROM value
  switch (stored) {
    case 0:
      cyan();
      break;
    case 1:
      magenta();
      break;
    case 2:
      yellow();
      break;
  }
}

void cyan() {
  for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
    pixels.setPixelColor(pixel, 255, 255, 0); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();
  }
  delay(1000);
}

void magenta() {
  for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
    pixels.setPixelColor(pixel, 255, 0, 255); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();
  }
  delay(1000);
}

void yellow() {
  for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
    pixels.setPixelColor(pixel, 0, 255, 255); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
    pixels.show();
  }
  delay(1000);
}
