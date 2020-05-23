// we are trying to read a voltage from the arduino 
int Pin=A3;  // analog read pin from the arduino is A3
float Voltage=0;   // this will be the place holder for the read value 
int delayTime=500;
int readVal;
void setup() {
  // put your setup code here, to run once:
  pinMode ( Pin, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogRead (Pin);
  readVal=analogRead(Pin); // The analogRead does not read the actual Voltage but the scale of it which is  from 0-1023
  Voltage=(5.0/1024.0)*readVal; // so it fix this we do the operation we have.Note that 5v is from the arduino and 1024 is range of the analoge read which is 2^10
  delay (delayTime);
  Serial.println(Voltage);

}
