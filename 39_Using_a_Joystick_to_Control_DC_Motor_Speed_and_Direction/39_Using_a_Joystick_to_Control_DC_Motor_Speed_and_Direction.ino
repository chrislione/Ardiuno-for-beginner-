
int speedpin=5; // control the speed and is EN1 from chip L293D
int directionpin1=6; 
int directionpin2=7;
int motorspeed  ; 
int joystickpin=A1;
float readjval;

void setup() {
  // put your setup code here, to run once:
  pinMode(speedpin,OUTPUT);
  pinMode(directionpin1,OUTPUT);
  pinMode (directionpin2,OUTPUT);
  pinMode(joystickpin, INPUT);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  readjval=analogRead(joystickpin);
  Serial.println(readjval);
  if (readjval <510){
    digitalWrite( directionpin1,HIGH);
    digitalWrite(directionpin2 ,LOW);
    motorspeed=-255.0/512.0*readjval+255.0;
    analogWrite( speedpin, motorspeed);
  }
  if (readjval>=512){
    digitalWrite( directionpin1,LOW);
    digitalWrite(directionpin2 ,HIGH);
    motorspeed=-255.0/512.0*readjval-255.0;
    analogWrite( speedpin, motorspeed);
    
  }

}
