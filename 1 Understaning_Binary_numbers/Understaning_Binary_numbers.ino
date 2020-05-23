//0000
//0001
//till you get to 15

//objective is to make an LED counter that will count from 0-15


int pinW=9; //  name of the variable is pinW and the location is at 10 of the arduino 
int pinX=10; // name of the variable is pinX and the location is at 10 of the arduino 
int pinY=11; //  name of the variable is pinY and the location is at 10 of the arduino 
int pinZ=12; // name of the variable is pinZ and the location is at 10 of the arduino 
int delaypin=200;
void setup() {
  // put your setup code here, to run once:
  pinMode (pinW, OUTPUT);
  pinMode (pinX, OUTPUT);
  pinMode (pinY, OUTPUT);
  pinMode (pinZ, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:



   // Binary number 0000 which is decimal for 0
digitalWrite (pinW,LOW);
digitalWrite (pinX, LOW);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, LOW);
delay (delaypin);   
  

// Binary number 0001 which is decimal for 1
digitalWrite (pinW,LOW);
digitalWrite (pinX, LOW);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, HIGH);
delay (delaypin);   
 

// Binary number 0010 which is decimal for 2
digitalWrite (pinW,LOW);
digitalWrite (pinX, LOW);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ, LOW);
delay  (delaypin); 
// Binary number 0011 which is decimal for 3
digitalWrite (pinW,LOW);
digitalWrite (pinX, LOW);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ, HIGH);
delay  (delaypin); 
  

// Binary number 0100 which is decimal for 4
digitalWrite (pinW,LOW);
digitalWrite (pinX, HIGH);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, LOW);
delay  (delaypin); 


// Binary number 0101 which is decimal for 5
digitalWrite (pinW,LOW);
digitalWrite (pinX, HIGH);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, HIGH);
delay  (delaypin);  

// Binary number 0110 which is decimal for 6
digitalWrite (pinW,LOW);
digitalWrite (pinX, HIGH);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ, LOW);
delay  (delaypin);  


 // Binary number 0111 which is the decimal number 7
digitalWrite (pinW, LOW);
digitalWrite (pinX, HIGH);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ, HIGH);
delay (delaypin); 


   // Binary number 1000 which is decimal for 8
digitalWrite (pinW,HIGH);
digitalWrite (pinX, LOW);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, LOW);
delay (5000);   


   // Binary number 1001 which is decimal for 9
digitalWrite (pinW,HIGH);
digitalWrite (pinX, LOW);
digitalWrite (pinY, LOW);
digitalWrite (pinZ, HIGH);
delay (delaypin); 

 // Binary number 1010 which is decimal for 10
digitalWrite (pinW,HIGH);
digitalWrite (pinX, LOW);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ,HIGH);
delay (5000);   
 


 // Binary number 1011 which is decimal for 11
digitalWrite (pinW,HIGH);
digitalWrite (pinX, LOW);
digitalWrite (pinY,HIGH);
digitalWrite (pinZ, HIGH);
delay (5000);   
 



 // Binary number 1100 which is decimal for 12
digitalWrite (pinW,HIGH);
digitalWrite (pinX, HIGH);
digitalWrite (pinY,LOW);
digitalWrite (pinZ,LOW);
delay (5000);   



 // Binary number 1101 which is decimal for 13
digitalWrite (pinW,HIGH);
digitalWrite (pinX, HIGH);
digitalWrite (pinY,LOW);
digitalWrite (pinZ,HIGH);
delay (5000);   




 // Binary number 1101 which is decimal for 14
digitalWrite (pinW,HIGH);
digitalWrite (pinX, HIGH);
digitalWrite (pinY,HIGH);
digitalWrite (pinZ,LOW);
delay (5000);   



// Binary number 1111 which is the decimal number 15
digitalWrite (pinW, HIGH);
digitalWrite (pinX, HIGH);
digitalWrite (pinY, HIGH);
digitalWrite (pinZ, HIGH);
delay (5000);   
           
}
