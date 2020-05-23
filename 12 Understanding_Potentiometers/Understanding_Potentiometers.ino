
int readpin=A3;
float readvalue;
float voltage;
int delaytime=250;
int redpin=9;
int bluepin=10;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (readpin, INPUT);
  pinMode (redpin, OUTPUT);
  pinMode (bluepin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
readvalue=analogRead(readpin);   //this will give the scale value 0-1024 not to realtive with the 5v we're using from the arduino 
voltage=(5.0/1024.0)*readvalue;
Serial.print("an the potentiometer value is :");
Serial.println(voltage);
if(voltage > 4.0){
  digitalWrite(redpin, HIGH);
  digitalWrite (bluepin,LOW);
}
else if ( voltage < 4.0){
  digitalWrite (redpin,LOW);
  digitalWrite (bluepin,HIGH);
  
}
 //else{
 // Serial. println("it looks good");
// }
delay (delaytime);

}
