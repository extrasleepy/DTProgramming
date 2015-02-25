// Fade One LED with (PWM)   http://arduino.cc/en/Reference/AnalogWrite


void setup()  { 
  pinMode(5, OUTPUT);  
} 

void loop()  { 
  for(int i=0;i<256;i++){   //fade in
    analogWrite(5, h);
    delay(1);
  }
  for(int i=255;i>0;i--){   //fade in
    analogWrite(5, h);
    delay(1);
  }

}





