
int speedpin=5; // control the speed and is EN1 from chip L293D
int directionpin1=6;
int directionpin2=7;
int motorspeed =100 ; 

void setup() {
  // put your setup code here, to run once:
  pinMode(speedpin,OUTPUT);
  pinMode(directionpin1,OUTPUT);
  pinMode (directionpin2,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite( directionpin1,HIGH);
digitalWrite(directionpin2 ,LOW);
analogWrite( speedpin, motorspeed);
}
