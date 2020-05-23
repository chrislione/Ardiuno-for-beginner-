int potvalue;
int potpin=A5;
int redpin=8;
int whitepin=10;
int delaytime=500;

void setup() {
  // put your setup code here, to run once:
pinMode(potpin, INPUT);
pinMode(redpin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potvalue= analogRead(potpin); // potentiometer value (potvalue)
Serial.println(potvalue );
delay(delaytime);

 while(potvalue>1000){
  digitalWrite(redpin,HIGH);
  potvalue= analogRead(potpin); // this like our j++ incremnet 
   Serial.print("TOO HIGH:");
  Serial.println(potvalue);
  delay(delaytime);
 
  

 }
 digitalWrite(redpin,LOW);
 
 Serial.print("At a good range:");
 
}
