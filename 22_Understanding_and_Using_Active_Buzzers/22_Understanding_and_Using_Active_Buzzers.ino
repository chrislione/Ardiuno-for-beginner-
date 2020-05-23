// Read the potentiometer than sound the buzzer if the potentiometer excesses a 1000
int buzzerpin =8;
int ledpin= 9;
int readpotval=A5;
int readval;
int delaytime=500;
int delaytimebuzz=100;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerpin,OUTPUT);
  pinMode(ledpin ,  OUTPUT);
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  readval= analogRead(readpotval);
  Serial.println(readval);
  
  if (readval < 900){
    Serial.println("your potentiometer value is:");
     readval=analogRead(readpotval);
    delay(delaytime);
    
  }
  else if (readval>900){
    Serial.println("Warning");
    digitalWrite (buzzerpin, HIGH);
 digitalWrite (ledpin   , HIGH);
 delay(delaytimebuzz);
 digitalWrite (buzzerpin, LOW);
 digitalWrite (ledpin,    LOW);
  }
 
 //delay(delaytime);
}
