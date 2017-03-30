// NeoPixel Ring simple sketch (c) 2013 Shae Erisson
// released under the GPLv3 license to match the rest of the AdaFruit NeoPixel library
// adapted to LWHS Design and Technology class fall 2017 by akleindolph

#include <Adafruit_NeoPixel.h>

int colorShiftR = 0;
int colorShiftG = 0;
int colorShiftB = 0;

// Which pin on the Arduino is connected to the NeoPixels?
#define PIN            6

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS      5

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  pinMode(13, OUTPUT); //test LED

  for (int i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
    delay(50);
  }

  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() { 
  // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.
  for (int i = 0; i < NUMPIXELS; i++) {
    pixels.setPixelColor(i, pixels.Color(colorShiftR, colorShiftG, colorShiftB));
    //pixels.setPixelColor(i, pixels.Color(255, 255, 255));  white

    pixels.show(); // This sends the updated pixel color to the hardware.

    delay(100); // Delay for a period of time (in milliseconds).

  }

//  for (int i = 0; i < NUMPIXELS; i++) {
//    for (int j = 254; j > 0; j--) {
//      pixels.setBrightness(j);
//      pixels.show(); // This sends the updated pixel color to the hardware.
//      delay(2); // Delay for a period of time (in milliseconds).
//    }
//  }

  colorShiftR = random(255);
  colorShiftG = random(255);
  colorShiftB = random(255);

}
