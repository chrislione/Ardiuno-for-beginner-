 
 int LEDpin=11;
 int pushbuttonPin=9;
 float readval;
 int delaytime=100;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDpin, OUTPUT);
  pinMode (pushbuttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  readval=digitalRead(pushbuttonPin);
  Serial.println(readval);
  delay(delaytime);
  
  if (readval==1){
    digitalWrite(LEDpin, LOW);
    
  }
  else if (readval==0) {
    
    digitalWrite(LEDpin, HIGH);
    
    
  }

}
