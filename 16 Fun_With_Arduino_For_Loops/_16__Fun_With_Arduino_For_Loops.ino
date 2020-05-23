int x; // counter variable
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 for (x=10; x>=0; x--){
  Serial.print("Your value is:");
  delay(500);
  Serial.println(x);
  //delay(200);
  
 }
}
