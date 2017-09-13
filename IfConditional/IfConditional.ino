#include <Adafruit_NeoPixel.h>   //include library

#define PIN            6  // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS      5  // How many NeoPixels are attached to the Arduino?

int randNumber;                 //variable for random seed
int chaseTime = 30;

// When we setup the NeoPixel library object, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pixels.begin();               // This initializes the NeoPixel library.
  Serial.begin(9600);           //set up serial communication
  randomSeed(analogRead(0));    //this will make psudo random numbers seem more random
}

void loop() {
  randNumber = random(6);        //pick a random number between 0 and 6
  Serial.println(randNumber);    //prints the random number to the serial window

  if (randNumber == 0) {       //if conditional statement compares randnumber to 0.
    for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
      pixels.setPixelColor(pixel, 0, 0, 255); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
      pixels.show();
      delay(chaseTime);               
    }
  }//end of conditional statement

  if (randNumber == 1) {
    for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
      pixels.setPixelColor(pixel, 255, 0, 0); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
      pixels.show();
      delay(chaseTime);                
    }
  }

  if (randNumber == 2) {
    for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
      pixels.setPixelColor(pixel, 0, 255, 0); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
      pixels.show();
      delay(chaseTime);                
    }
  }
  if (randNumber >= 3) {
    for (int pixel = 0; pixel <= NUMPIXELS; pixel++) {
      pixels.setPixelColor(pixel, 255, 255, 255); //parameters are (LED number in chain, Red 0-255, Green 0-255, Blue 0-255)
      pixels.show();
      delay(chaseTime);              
    }
  }
  delay(500);    // wait for half second before running loop again
}                 //end of main loop




