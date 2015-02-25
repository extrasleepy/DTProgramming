/*
Uses a variable to slow down blinking
http://arduino.cc/en/Tutorial/Variables
 */
 
// set a pin to be a variable:
int led = 12;           //int allows variables up from -32,768 to 32,767
float time = 5.0;         //allows floating point variables 
float moreTime = 2.2;   //allows floating point variables

void setup() {                
  
  pinMode(led, OUTPUT);      // initialize the digital pin as an output.
  Serial.begin(9600);        // initialize serial communication at 9600 bits per second: 
}

void loop() {
  digitalWrite(led, HIGH);       // turn the LED on (HIGH is the voltage level 5v)
  delay(time);                   // wait for "time"
  digitalWrite(led, LOW);        // turn the LED off by making the voltage LOW
  delay(time);                   // wait for "time"
  time = time + moreTime;        //increase interval by adding the value of "moreTime"
  Serial.print("time=");         //prints the word "time=" on the screen
  Serial.println (time);         //prints the VALUE of time and makes a new line
}
