// Array Fade Example  http://arduino.cc/en/Reference/Array
int myArray[] = { 5, 6, 7, 8 ,9, 10, 11, 12};     // an array of pin numbers to which LEDs are attached (indices 0-7)
int numPins = 8;                                  // the number of pins in the array
int randomLed;

void setup()  { 
  for (int i = 0; i < numPins; i++)  {   //use an array to set all pins as outputs
    pinMode(myArray[i], OUTPUT);      
  }
  Serial.begin(9600);                   //set up serial communication
  randomSeed(analogRead(0));            //this will make psudo random numbers seem more random
} 

void loop()  {
  randomLed = random(8);
  Serial.println(randomLed);
  
  digitalWrite(myArray[randomLed], HIGH);
  delay(100);
  digitalWrite(myArray[randomLed], LOW); 
  delay(100);                                                 
}                                                     




