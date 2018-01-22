const int GREEN=9;
const int YELL=8;
const int RED=7;
void setup() {
  // put your setup code here, to run once:
pinMode (GREEN, OUTPUT);
pinMode (YELL, OUTPUT);
pinMode (RED, OUTPUT);
}
void loop() {
  digitalWrite(GREEN, HIGH);
  delay(6000);
  digitalWrite(GREEN, LOW);
  delay(600);
  digitalWrite(GREEN, HIGH);
  delay(600);
  digitalWrite(GREEN, LOW);
  delay(600);
  digitalWrite(GREEN, HIGH);
  delay(600);
  digitalWrite(GREEN, LOW);
  delay(600);
  digitalWrite(GREEN, HIGH);
  delay(600);
  digitalWrite(GREEN, LOW);
  //delay(900);
  digitalWrite(YELL, HIGH);
  delay(1500);
  digitalWrite(YELL, LOW);
  //delay(900);
  digitalWrite(RED, HIGH);
  delay(6000);
  digitalWrite(YELL, HIGH);
  delay(1900);
  digitalWrite(RED, LOW);
  digitalWrite(YELL, LOW);
 // delay(5000);
}
