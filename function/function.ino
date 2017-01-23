//example of how to write Arduino functions()
void setup()  {           //set pins as outputs

  for (int led = 5; led <= 12; led++) {
    pinMode(led, OUTPUT);
  }
}
void loop() {             //main loop
  fade();                 //call function
  flash();                //call function
}                         //end main loop

void fade() {                                  //fade function starts here
  //------fade in loop--------------
  for (int brightness = 0; brightness <= 254; brightness++) {
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness);
    analogWrite(6, brightness);
    analogWrite(9, brightness);
    analogWrite(10, brightness);
    analogWrite(11, brightness);
    // wait for 2 milliseconds to see the effect
    delay(2);
  }
  //-----end of fade in loop---------

  //------fade out loop--------------
  for (int brightness = 254; brightness >= 0; brightness--) {
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness);
    analogWrite(6, brightness);
    analogWrite(9, brightness);
    analogWrite(10, brightness);
    analogWrite(11, brightness);
    // wait for 2 milliseconds to see the effect
    delay(2);
  }
  //-----end of fade out loop---------
}                                              //fade function ends here, return where main code left off

void flash() {                                 //flash function starts here
  for (int i = 0; i <= 20; i++) {
    digitalWrite(7, HIGH);         //read the value of a pin an invert it
    digitalWrite(8, HIGH);
    digitalWrite(12, HIGH);
    delay(20);
    digitalWrite(7, LOW);         //read the value of a pin an invert it
    digitalWrite(8, LOW);
    digitalWrite(12, LOW);
    delay(20);
  }
}

