
void setup()  {           //set pins as outputs
  for (int counter=5; counter<13;counter++){
    pinMode (counter, OUTPUT);
  } 
}

void loop() {             //main loop
  allon();                 //call function
  delay (1000);
  alloff();                //call function
  delay (1000);
}                         //end main loop

void allon(){                                   //fade function starts here
  for (int counter=5; counter<13;counter++){
    digitalWrite (counter, HIGH);
  }  
}//fade function ends here, return where main code left off

void alloff(){                                  //fade function starts here
  for (int counter=5; counter<13;counter++){
    digitalWrite (counter, LOW);
  }   
}//fade function ends here, return where main code left off


