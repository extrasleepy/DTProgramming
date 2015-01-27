/*
 Make it look like a candle
 */
 float candle = 0.0;


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  candle = random(0,20);
  digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(candle); 
  candle = random(0,20);  // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(candle);              // wait for a second
}
