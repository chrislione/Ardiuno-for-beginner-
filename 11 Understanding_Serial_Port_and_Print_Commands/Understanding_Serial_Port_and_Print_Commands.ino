//int x=1;
int x=0;
//int y=7;
//int z;
//String num="=";
int pause=500;
String myString="The number is ";
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(myString);
  while (x<10);
  {
 //x++;
  delay(pause);
  Serial.println(x);
  x++;
  }
 
  
}
