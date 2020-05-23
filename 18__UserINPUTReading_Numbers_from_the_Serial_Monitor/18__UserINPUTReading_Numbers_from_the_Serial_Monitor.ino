int UserNumber;
int redpin= 8;
int x= 13;
String msg="Please enter your number:";
String msg2= "Your number is:";
void setup() {
  // put your setup code here, to run once:
  pinMode(redpin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
   while (Serial.available()== 0){ // this will wait till a command is given
    
  }
  
  UserNumber=Serial.parseInt(); // this works like cin like cin>>UserNumber
  Serial.print(msg2);
Serial.println(UserNumber);

//Turning on the led with an if and else statement 
/*if (x==UserNumber){
  digitalWrite(redpin, HIGH);
}
else{                               // remember for the else there is no parathesis ()
  digitalWrite (redpin, LOW);
}*/
 // Using while loop to turn on ther led 
 /* while(x==UserNumber) {
    digitalWrite(redpin, HIGH);
  }
  digitalWrite(redpin, LOW);
  */
  for(x=13; x==UserNumber;){          // if the statement inside the curly braces is true than do the command below
    digitalWrite(redpin, HIGH);
  }
  digitalWrite(redpin, LOW);  // outside of the curly braces will act as else 
  
}
