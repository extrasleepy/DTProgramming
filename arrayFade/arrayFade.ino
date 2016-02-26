// Array Fade Example  http://arduino.cc/en/Reference/Array
int myArray[] = { 5, 6, 9, 10, 11};     // an array of pin numbers to which LEDs are attached (indices 0-4)
int numPins = 5;                        // the number of pins in the array

void setup()  { 
  for (int i = 0; i < numPins; i++)  {                       //use an array to set all pins as outputs
    pinMode(myArray[i], OUTPUT);      
  }
} 

void loop()  {                                               //fade LEDs in one at a time
  for (int i = 0; i < numPins; i++) {                        //fade for each pin starting with array value 0, end with 4
    for (int brightness=0;brightness<254;brightness++){      //set the brightness with this nested loop
      analogWrite(myArray[i],brightness);
      delay(10);  
    }      
  }                                                          //fade LEDs out one at a time
  for (int i = numPins-1; i > 0; i--) {                      //start with array value 4, end with 0
    for (int brightness=254;brightness>0;brightness--){
      analogWrite(myArray[i],brightness);
      delay(10);  
    }                                                         //end brightness for loop 
  }                                                           //end numPins for loop
}                                                             //end main loop




