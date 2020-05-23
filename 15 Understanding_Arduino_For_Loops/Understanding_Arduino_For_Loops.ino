int yellowpin=6;
int whitepin=9;
int bluepin=10;
int yellowblink=3;
int x;
int k;
int delaytime=200;


void setup() {
  // put your setup code here, to run once:
  pinMode(yellowpin, OUTPUT);
  pinMode (whitepin, OUTPUT);
  pinMode (bluepin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
    for (x=1; x<=yellowblink;x++){
      
    
    digitalWrite(yellowpin,HIGH);
    delay(delaytime);
    digitalWrite(yellowpin, LOW);
    delay(delaytime);
    Serial.println(x);
  
    }
 for (x=1; x<=5;x++){
  digitalWrite(whitepin, HIGH);
  delay(delaytime);
  digitalWrite(whitepin, LOW);
  delay(delaytime);
  Serial.println(x);
  
 }
 

 
}
