const int analogInPin = A0;
int sensorValue = 0;
int baseline = 0;
double gain = 1.0;

void setup() {
  Serial.begin(9600);
  Serial.println("Sensor,ref,ref");
  pinMode(13, OUTPUT);
}

void loop() {
  sensorValue = analogRead(analogInPin)*gain+baseline;
  Serial.print(sensorValue);
  Serial.print(",1000");
  Serial.println(",0");
  if (sensorValue > 100) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10);
}
