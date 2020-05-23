
String UserName;

String message="Please enter your name";
//String message2="Hello welcome to Ardunio lesson:");
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(message);
  while(Serial.available()==0){
    
  }
UserName=Serial.readString(); // user will input a string 
Serial.println("hello \t" + UserName + " welcome to Ardunio lesson");
//Serial.print(UserName);
}
   //OR
 /*  UserName=Serial.readString(); // user will input a string 
Serial.println("hello");
Serial.print (UserName);
Serial.print (" welcome to Ardunio lesson");
//Serial.print(UserName);   */
