void setup() {
  pinMode(0, OUTPUT); // a
  pinMode(2, OUTPUT); // b
  pinMode(4, OUTPUT); // c
  pinMode(6, OUTPUT); // d
  pinMode(8, OUTPUT); // e
  pinMode(10, OUTPUT); // f
  pinMode(12, OUTPUT); // g
  pinMode(13, OUTPUT);
}

void loop() { //active low
  
  digitalWrite(13, HIGH);

  // 9
  digitalWrite(0, LOW);
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, HIGH);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(1500);

  // 8
  digitalWrite(8, LOW);
  delay(1500);

  // 7
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(1500);

  // 6
  digitalWrite(0, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(12, LOW);
  delay(1500);

  // 5
  digitalWrite(8, HIGH);
  delay(1500);

  // 4
  digitalWrite(0, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(6, HIGH);
  delay(1500);

  // 3
  digitalWrite(0, LOW);
  digitalWrite(6, LOW);
  digitalWrite(10, HIGH);
  delay(1500);

  // 2
  digitalWrite(4, HIGH);
  digitalWrite(8, LOW);
  delay(1500);

  // 1
  digitalWrite(0, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(12, HIGH);
  delay(1500);

  // 0
  digitalWrite(0, LOW);
  digitalWrite(6, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  delay(1500);

}
