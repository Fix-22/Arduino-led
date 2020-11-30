
const int led1 = 12;
const int led2 = 10;
const int led3 = 8;
const int led4 = 2;
const int led5 = 0;

void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

}

void loop() {
  digitalWrite(led1, HIGH);
  delay(250);
  digitalWrite(led1, LOW);
  delay(250);
  digitalWrite(led2, HIGH);
  delay(250);
  digitalWrite(led2, LOW);
  delay(250);

}
