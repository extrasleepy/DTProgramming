//Example of For Loop Iteration
//http://arduino.cc/en/Reference/For

int timer = 200;          // Variable: The higher the number, the slower the timing.
int led = 13;

void setup() {
  pinMode(13, OUTPUT);   //sets pins as outputs    
}                        //setup ends here
         
void loop() {
  for (int times=0; times<= 5; times= times + 1) {   //a for loop that will flash LED 6 times
    digitalWrite(led, HIGH);                           // turn the pin on:
    delay(timer);                                     //light stays on for value: "timer"
    digitalWrite(led, LOW);                            // turn the pin off:
    delay(timer);
  }                                                   //end of nested for loop
  for (int i=0; i<= 10; i++) {   //a for loop that will flash LED 11 times
    digitalWrite(led, HIGH);    
    delay(timer-100);                  
    digitalWrite(led, LOW);   
    delay(timer-100);
  }                                                  //end of nested for loop
  for (int i=30; i> 0; i--) {  //a for loop that will flash LED 30 times
    digitalWrite(led, HIGH);                                                   
    delay(timer-150);                  
    digitalWrite(led, LOW);                                                     
    delay(timer-150);
  }                                                 //end of nested for loop
}                                                   //end of main loop


