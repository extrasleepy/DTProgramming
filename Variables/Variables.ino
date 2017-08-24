/*
Uses a variable to slow down blinking
http://arduino.cc/en/Tutorial/Variables
 */
 
// set a pin to be a variable:
int led = 13;                    //int allows variables up from -32,768 to 32,767
float currentTime = 5.0;         //allows floating point variables 
float moreTime = 2.2;            //allows floating point variables
String message = "time=";        //use for representing a literal array of characters

void setup() {   
               
  pinMode(led, OUTPUT);      // initialize the digital pin as an output.
  Serial.begin(9600);        // initialize serial communication at 9600 bits per second: 

}

void loop() {
  
  digitalWrite(led, HIGH);       // turn the LED on (HIGH is the voltage level 5v)
  delay(currentTime);            // wait for "currentTime"
  digitalWrite(led, LOW);        // turn the LED off by making the voltage LOW
  delay(currentTime);                   
  currentTime = currentTime + moreTime;      //increase interval by adding the value of "moreTime"
  Serial.print(message);                     //prints the word "time=" on the screen
  Serial.println (currentTime);              //prints the VALUE of time and makes a new line

}
