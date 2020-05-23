int redLed=9; // DEclear variable
int brightness=100;

void setup() {
  // put your setup code here, to run once:
 pinMode(redLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redLed, 255); // this wiill give us the regular the digitalWrite HIgh, also remember for it be high it need to be 255 gotten from 8 bit 
delay (1000);
analogWrite (redLed,brightness);   // this will equvalent to the digitalWrite Low, mean the number is zero
delay (1000);
analogWrite (redLed , brightness); // this the benefit of analogWrite you dont have to be always High or Low you have been in between or any number.
delay (1000);

}
