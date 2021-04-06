int red = 9;
int green = 10;
int blue = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
  delay(500);
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  delay(500);
  digitalWrite(blue, HIGH);
  delay(500);
  digitalWrite(blue, LOW);
  delay(500);
}
