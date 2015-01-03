//Example of For Loop Iteration
//http://arduino.cc/en/Reference/For

int timer = 200;          // Variable: The higher the number, the slower the timing.

void setup() {
  pinMode(10, OUTPUT);   //sets pins as outputs
  pinMode(11, OUTPUT); 
  pinMode(12, OUTPUT);     
}                        //setup ends here
         
void loop() {
  for (int i=0; i<= 5; i++) {   //starts a for loop that will flash LED 6 times
    digitalWrite(10, HIGH);                           // turn the pin on:
    delay(timer);                                     //light stays on for value: "timer"
    digitalWrite(10, LOW);                            // turn the pin off:
    delay(timer);
  }                                                   //end of nested for loop
  for (int i=0; i<= 6; i++) {   //starts a for loop that will alternate between LEDs 7 times
    digitalWrite(11, HIGH); 
    digitalWrite(10, LOW);     
    delay(timer);                  
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);     
    delay(timer);
  }                                                  //end of nested for loop
  for (int i=4; i>= 0; i--) {  //starts a for loop that will flash all LED 5 times
    digitalWrite(12, HIGH);                          
    digitalWrite(11, HIGH);                          
    digitalWrite(10, HIGH);                          
    delay(timer);                  
    digitalWrite(12, LOW);                           
    digitalWrite(11, LOW);                           
    digitalWrite(10, LOW);                           
    delay(timer);
  }                                                 //end of nested for loop
}                                                   //end of main loop


