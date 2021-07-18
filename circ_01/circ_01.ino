int delayTime = 2000;

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(9, 255);
  delay(delayTime);
  analogWrite(9, 200);
  delay(delayTime);
  analogWrite(9, 150);
  delay(delayTime);
}
