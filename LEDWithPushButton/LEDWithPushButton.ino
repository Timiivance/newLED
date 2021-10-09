int ledPin = 7;      // pin for the LED on Arduino
int switchPin = 13;  // pin for the button on Arduino
int switchPin1 = 0;  //to initialze start state of the button

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
  pinMode(switchPin,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
  switchPin1 = digitalRead(switchPin); // button can either be on(HIGH) or off(LOW)
  if (switchPin1 == HIGH){
  digitalWrite(ledPin,HIGH);
  delay(100);
  digitalWrite(ledPin,LOW);
  delay(100);
  }
  else {
  digitalWrite(ledPin,LOW);
    }
  
}
  
