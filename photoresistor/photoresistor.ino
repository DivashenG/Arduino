#define PHOTORESISTOR_PIN A0

void setup() {
  Serial.begin(9600);

}

void loop() {
  // int number 0.. 1023 --> 0V .. 5V
  int luminosity = analogRead(PHOTORESISTOR_PIN);
  Serial.println(luminosity);
  delay(100);
}
