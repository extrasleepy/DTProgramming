// LED Fadeing Example (PWM) with fading staggered  http://arduino.cc/en/Reference/AnalogWrite
int time=3;

void setup()  { 
  pinMode(5, OUTPUT);  
  pinMode(6, OUTPUT);  
  pinMode(7, OUTPUT); //NO PWM
  pinMode(8, OUTPUT); //NO PWM
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT); //NO PWM

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness);   // half on
    analogWrite(6, 0);            // off
    analogWrite(9, 0);            // off
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness+127);   //full on
    analogWrite(6, brightness);       //half on
    analogWrite(9, 0);                //off
    delay(time); 
  }

} 

void loop()  { 


  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, 254-brightness);         //half off
    analogWrite(6, brightness+127);         //full on
    analogWrite(9, brightness);             //half on
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, 127-brightness);           //off
    analogWrite(6, 254-brightness);           //half off
    analogWrite(9, 127+brightness);           //full on
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness);               //half on
    analogWrite(6, 127-brightness);           //off
    analogWrite(9, 254-brightness);           //half off
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness+127);   //full on
    analogWrite(6, brightness);       //half on
    analogWrite(9, 127-brightness);    //off
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, 254-brightness);   //half off
    analogWrite(6, 127+brightness);    //full on
    analogWrite(9, brightness);    //half on
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, 127-brightness);   //off
    analogWrite(6, 254-brightness);    //half off
    analogWrite(9, 127+brightness);     //full on
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, brightness);       //half on
    analogWrite(6, 127-brightness);    //off
    analogWrite(9, 254-brightness);    //half off
    delay(time); 
  }

  for (int brightness=0;brightness<=127;brightness++){
    // set the brightness for the LEDs that support PWM
    analogWrite(5, 127+brightness);    //full on
    analogWrite(6, brightness);       //half on
    analogWrite(9, 127-brightness);    //off
    delay(time); 
  }




}








