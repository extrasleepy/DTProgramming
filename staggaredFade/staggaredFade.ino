int brightness5 = 0;     // how bright the LED is
int fadeAmount5 = 1;     // how many points to fade the LED by
int brightness6 = 50;     // how bright the LED is
int fadeAmount6 = 1;     // how many points to fade the LED by
int brightness9 = 100;     // how bright the LED is
int fadeAmount9 = 1;     // how many points to fade the LED by
int brightness10 = 150;    // how bright the LED is
int fadeAmount10 = 1;    // how many points to fade the LED by
int brightness11 = 200;    // how bright the LED is
int fadeAmount11 = 1;    // how many points to fade the LED by


void setup()  { 
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pins 5,6,9,10,11:
  analogWrite(5, brightness5);
  analogWrite(6, brightness6); 
  analogWrite(9, brightness9); 
  analogWrite(10, brightness10); 
  analogWrite(11, brightness11); 

  // change the brightness for next time through the loop:
  brightness5 = brightness5 + fadeAmount5;
  brightness6 = brightness6 + fadeAmount6;
  brightness9 = brightness9 + fadeAmount9;
  brightness10 = brightness10 + fadeAmount10;
  brightness11 = brightness11 + fadeAmount11;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness5 == 0 || brightness5 == 255) {
    fadeAmount5 = -fadeAmount5 ; 
  } 
  if (brightness6 == 0 || brightness6 == 255) {
    fadeAmount6 = -fadeAmount6 ; 
  }
  if (brightness9 == 0 || brightness9 == 255) {
    fadeAmount9 = -fadeAmount9 ; 
  }
  if (brightness10 == 0 || brightness10 == 255) {
    fadeAmount10 = -fadeAmount10 ; 
  }
  if (brightness11 == 0 || brightness11 == 255) {
    fadeAmount11 = -fadeAmount11 ; 
  }  
  // wait for x milliseconds to see the dimming effect    
  delay(2);                            
}



