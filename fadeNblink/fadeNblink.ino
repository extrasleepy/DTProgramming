/*
 DT Fadeing Example
 */

int led0 = 5;           // the pin that the LED is attached to
int led1 = 6;           // the pin that the LED is attached to
int led2 = 7;           // the pin that the LED is attached to NO PWM
int led3 = 8;           // the pin that the LED is attached to NO PWM
int led4 = 9;           // the pin that the LED is attached to
int led5 = 10;           // the pin that the LED is attached to
int led6 = 11;           // the pin that the LED is attached to
int led7 = 12;           // the pin that the LED is attached to NO PWM

int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness 
  analogWrite(led0, brightness);
  analogWrite(led1, brightness);
  //analogWrite(led2, brightness);
  //analogWrite(led3, brightness);  
  analogWrite(led4, brightness);
  analogWrite(led5, brightness);  
  analogWrite(led6, brightness);
  //analogWrite(led7, brightness);   

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
    blinky();
  }    
  // wait for 50 milliseconds to see the dimming effect    
  delay(50);    
}

void blinky(){
  for (int counter; counter<50;counter++){
    digitalWrite (led2, HIGH);
    digitalWrite (led3, HIGH);
    digitalWrite (led7, HIGH);
    delay(20);
    digitalWrite (led2, LOW);
    digitalWrite (led3, LOW);
    digitalWrite (led7, LOW);
    delay(20);
  }
}


