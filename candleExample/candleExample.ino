/*
 Make it look like a candle
 */
 float candle = 0.0;
 byte led = 12;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  candle = random(0,20);
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(candle); 
  candle = random(0,20);  // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(candle);              // wait for a second
}
