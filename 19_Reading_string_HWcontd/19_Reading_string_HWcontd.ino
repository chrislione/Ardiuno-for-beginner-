// Homework is  write a program to ask the user what color of the led 
// the would like to light up. for example the user ask let the blue led on

int bluepin=8;
int whitepin=9;
int redpin=10;
String Userschoice;
String x= "blue";
String x2="Blue";
String y="White";
String y2="white";
String z="Red";
String z2="red";
String message1="Enter a color to be displayed (blue, white, or red)";

void setup() {
  // put your setup code here, to run once:
  pinMode(bluepin,  OUTPUT);
  pinMode(whitepin, OUTPUT);
  pinMode(redpin,  OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message1);
  while(Serial.available()==0){
    
  }
  
  Userschoice=Serial.readString();
  Serial.println(Userschoice + "\t" );
  
 
  if (Userschoice==x|| Userschoice==x2){     //  OR operator  1  0 will make it high. in this case 1 1 will make it high
     Serial.println("is Active");
    digitalWrite(bluepin, HIGH);
    digitalWrite(whitepin, LOW);
      digitalWrite(redpin, LOW);

    }
    
 /* else if (Userschoice!=x|| Userschoice !=x2){
   // Serial.println("Error");
    //Serial.print("Please enter all in lower or Uppercase");
  }*/
  
  
    if (Userschoice==y|| Userschoice==y2){
      Serial.println("is Active");
     digitalWrite(whitepin, HIGH);
      digitalWrite(bluepin, LOW);
      digitalWrite(redpin, LOW);

}
 /*else if (Userschoice!=y|| Userschoice !=y2){
   // Serial.println("Error");
    //Serial.print("Please enter all in lower or Uppercase");
  }*/







 if (Userschoice==z|| Userschoice==z2){
  Serial.println("is Active");
  
   digitalWrite(redpin, HIGH);
   digitalWrite(whitepin, LOW);
    digitalWrite(bluepin, LOW);
 }
 /* else {
    (Userschoice!=x|| Userschoice !=x2 &&Userschoice!=z|| Userschoice !=z2 && Userschoice!=y|| Userschoice !=y2);
    Serial.println("Error");
    Serial.print("Please enter all in lower or Uppercase");
  } */
}
