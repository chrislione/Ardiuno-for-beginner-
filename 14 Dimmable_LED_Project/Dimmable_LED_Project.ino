// Dimmable project//
// The aim is use the potentiometer to increase the light as we prefer//
int potpin=A3;
int bluepin=10;
int redpin=9;
int potvalue;
float ledvalue;
int delaytime=500;
void setup() {
  // put your setup code here, to run once:
pinMode(potpin, INPUT);
pinMode (bluepin , OUTPUT);

Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
potvalue=analogRead(potpin); // potvalue is potentiometer value we can get the value from reading the value that comes from potpin//
ledvalue=(225.0/1023)*potvalue;
analogWrite(bluepin, ledvalue);
Serial.print("potentiometer value is:");
Serial.println(ledvalue);
delay (delaytime);
if(ledvalue > 200){
  digitalWrite(redpin, HIGH);
  
}

}
