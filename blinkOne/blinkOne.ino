/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
// set a pin to be a variable:
int led = 2;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT); 
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level 5v)
  delay(500);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(500);               // wait for a second
}
