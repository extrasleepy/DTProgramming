//Modified from SoftPWM library example at: https://code.google.com/p/rogue-code/wiki/SoftPWMLibraryDocumentation#Usage_Example
//SoftPWM library must be installed
//NF for Design & Technology at LWHS Dec 2014 (modification: added all D&T "sleepyBoard" lamp board pins)

//Explanation: On the D&T lamp boards, only pins 5, 6, 9, 10, and 11 (not 7, 8, or 12) are "PWM enabled" and work with
//the analogWrite function. Built into the hardware on those pins is a way to toggle very quickly between on
//and off, leading to a dimmer or brighter LED, depending on the ratio of "on" times to "off" times.
//However, it's possible to replicate this effect in software, which is what the SoftPWM Arduino library does.

//Challenge 1: can you made the LEDs fade at different rates?
//Challenge 2: can you made the LEDs flicker like candles?

#include <SoftPWM.h>

int fadeInTime = 2500; //time in milliseconds that it will take the LED to fade in from 0 to 255.
int fadeOutTime = 2000; //time in milliseconds that it will take the LED to fade out from 255 to 0.

void setup()
{
  // Initialize
  SoftPWMBegin();

  for(int pin=5;pin<=12;pin++)
  {
    // Create and set pins 5-12 to off
    SoftPWMSet(pin, 0);
    // Set fade time for pins 5-12
    SoftPWMSetFadeTime(pin, fadeInTime, fadeOutTime);
  }
}

void loop()
{
  // Turn on the pins - set to 100%
  for(int pin=5;pin<=12;pin++)
  {
    SoftPWMSetPercent(pin, 100);
  }

  // Wait for LED to fade in
  delay(fadeInTime);

  // Turn off the pins - set to 0%
  for(int pin=5;pin<=12;pin++)
  {
    SoftPWMSetPercent(pin, 0);
  }

  // Wait for LED to fade out
  delay(fadeOutTime);
}
