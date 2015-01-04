// Array Fade Example  http://arduino.cc/en/Reference/Array
int myArray[] = { 
  5, 6, 9, 10, 11};               // an array of pin numbers to which LEDs are attached
int pins = 5;           // the number of pins (i.e. the length of the array)

// the setup routine runs once when you press reset:
void setup()  { 
  for (int i = 0; i < pins; i++)  {     //use an array to set all pins as outputs
    pinMode(myArray[i], OUTPUT);      
  }
} 

void loop()  {                                                //fade LEDs in one at a time
  for (int i = 0; i < pins; i++) {      //do a fade for each pin
    for (int brightness=0;brightness<254;brightness++){       // set the brightness with this nested loop
      analogWrite(myArray[i],brightness);
      delay(10);  
    }      
  }                                                          //fade LEDs out one at a time
  for (int i = pins; i > 0; i--) {
    for (int brightness=254;brightness>0;brightness--){
      analogWrite(myArray[i],brightness);
      delay(10);  
    }                                                         //end brightness loop 
  }                                                           //end thisPin For loop
}                                                             //end main loop




