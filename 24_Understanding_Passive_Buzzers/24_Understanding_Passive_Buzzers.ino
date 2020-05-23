
// in duzzer passive you change the note the sound plays base on the number entered on delay.
int buzzerpin=11;
int delaytime=1; // change the delay time will make different sounds 
int delaytimex=800;// change delay tim,e will make different sounds or noise
void setup() {
  // put your setup code here, to run once:
pinMode(buzzerpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerpin,HIGH);
  delay(delaytime);
  digitalWrite(buzzerpin, LOW);
  delay(delaytimex);
}
