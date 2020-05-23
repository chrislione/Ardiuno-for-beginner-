
// analogRead is a number between 0-1023
int VRxpin=A0;   //voltage pin x
int VRypin=A1;
int switchpin=2;
int readXvalue;
int readYvalue;
int readswitchvalue;
int delaytime=550;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(VRxpin, INPUT);
  pinMode(VRypin, INPUT);
  pinMode (switchpin,INPUT);
  digitalWrite(switchpin, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  readXvalue= analogRead(VRxpin);
  readYvalue=analogRead(VRypin);
  readswitchvalue= digitalRead(switchpin);
  delay(delaytime);
  
  Serial.print ("X value=");
  Serial.print(readXvalue);
  Serial.print ("  Y value=");
  Serial.print (readYvalue);
  Serial.print("       Switch State is=");
  Serial.println(readswitchvalue);
  
  
  

}
