void setup() {
  Serial.begin(9600);
}

void loop() {
  analogRead(A0);          // lectura de descarte
  delay(2);
  int lectura = analogRead(A0);
  float voltaje = lectura * 5.0 / 1023.0 * 2.0;  // x2 por el divisor
  Serial.println(voltaje);
  delay(50);
}
