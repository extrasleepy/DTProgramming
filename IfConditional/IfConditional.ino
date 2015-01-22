//Conditionals - If statement
//Explanation: http://arduino.cc/en/Reference/If
//Explanation: http://arduino.cc/en/Reference/Random

byte randNumber;                 //variable for random seed

void setup() {                   //set up outputs
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);           //set up serial communication
  randomSeed(analogRead(0));    //this will make psudo random numbers seem more random
}

void loop() {
  randNumber= random(9);         //pick a random number between 0 and 8
  Serial.println(randNumber);    //prints the random number to the serial window

  if (randNumber==0){          //if conditional statement compares randnumber to 0. 
    digitalWrite(8, HIGH);   
    delay(200);               
    digitalWrite(8, LOW);   
    delay(200);             // wait for a second
  }                            //end of conditional statement
  if (randNumber==1){
    digitalWrite(9, HIGH);   
    delay(200);               
    digitalWrite(9, LOW);   
    delay(200);     
  }
  if (randNumber==2){
    digitalWrite(10, HIGH);   
    delay(200);               
    digitalWrite(10, LOW);    
    delay(200);    
  }
  if (randNumber!=0 && randNumber!=1 && randNumber!=2){  //use "&&" to test multiple conditions, use != for NOT equal to
    digitalWrite(8, HIGH);   
    digitalWrite(9, HIGH);   
    digitalWrite(10, HIGH);   
    delay(100);               
    digitalWrite(8, LOW);    
    digitalWrite(9, LOW);    
    digitalWrite(10, LOW);    
    delay(100);               
  }
}                                                      //end of main loop




