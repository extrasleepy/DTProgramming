// LED Fadeing Example (PWM)   http://arduino.cc/en/Reference/AnalogWrite

byte brightness = 0;     // LED brightness

void setup()  { 
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT); //NO PWM
  pinMode(8, OUTPUT); //NO PWM
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT); //NO PWM
} 

void loop()  { 
  //------fade in loop--------------
  for (int brightness=0;brightness<=254;brightness++){
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
   for (int brightness=254;brightness>=0;brightness--){
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

  brightness=0;   //make sure brightness is set at before loop restarts
}



