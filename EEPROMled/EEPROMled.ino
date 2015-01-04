#include <EEPROM.h>                           //include library

byte led = 12;
byte stored;                                   //data stored in EEPROM
int address = 0;                              //location in EEPROM

void setup() {
  Serial.begin(9600);                         // sets up serial communication at 9600 bitss per second
  pinMode(led, OUTPUT);
 
  stored = EEPROM.read(address);              // reads the data stored in address 0 and assigns to variable
  Serial.println(stored);                     // Serial print the value
  stored++;                                   //increment value
  
  if (stored > 2) {                           //set this number based on how many different functions you want
    stored = 0;                              
  }
  EEPROM.write(address, stored);              //write the incremented value to EEPROM for next Arduino startup
}

void loop() {                                 //one of 3 functions runs based on stored EEPROM value
  switch (stored){
  case 0:
    fast();
    break;
  case 1:
    slow();
    break;
  case 2:
    seizure();
    break;
  }

}

void fast() {                                          
  digitalWrite(led, !digitalRead(led));  //set light to opposite of current state
  delay(100);
  fast();
}

void slow() {
  digitalWrite(led, !digitalRead(led));
  delay(1000);
  slow();
}

void seizure() {
  digitalWrite(led, !digitalRead(led));
  delay(15);
  seizure();
}




