// functions to turn all lights on and off
void setup()  {           //set pins as outputs
  for (int counter=5; counter<13;counter++){
    pinMode (counter, OUTPUT);
  } 
}

void loop() {              //main loop
  allon();                 //call function
  delay (1000);
  alloff();                //call function
  delay (1000);
}                          //end main loop

void allon(){                                   //function turns all lights on with for loop
  for (int counter=5; counter<13;counter++){
    digitalWrite (counter, HIGH);
  }  
}

void alloff(){                                  //function turns all lights off with for loop
  for (int counter=5; counter<13;counter++){
    digitalWrite (counter, LOW);
  }   
}


