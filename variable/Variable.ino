/*
Uses a variable to slow down blinking
http://arduino.cc/en/Tutorial/Variables
 */
 
// set a pin to be a variable:
byte led = 12;       //variables up to 255
int originalTime = 5;    //variables up from -32,768 to 32,767 
float moreTime = 2.2;   //allows floating point variables

void setup() {                
  
  pinMode(led, OUTPUT);      // initialize the digital pin as an output.
  Serial.begin(9600);        // initialize serial communication at 9600 bits per second: 
}

void loop() {
  digitalWrite(led, HIGH);       // turn the LED on (HIGH is the voltage level 5v)
  delay(originalTime);               // wait for "interval" time
  digitalWrite(led, LOW);        // turn the LED off by making the voltage LOW
  delay(originalTime);               // wait for "interval" time
  originalTime = originalTime + moreTime;   //increase interval by adding the value of "addtime"
  Serial.print("interval=");     //prints the word "interval" on the screen
  Serial.println (originalTime);     //prints the VALUE of "interval" and makes a new line
}
