const int analogInPin1 = A1;
const int analogInPin2 = A2;
const int analogInPin3 = A3;
const int analogInPin4 = A4;
int sensorValue1 = 0;
int sensorValue2 = 0;
int sensorValue3 = 0;
int sensorValue4 = 0;
int baseline1 = 0;
int baseline2 = 100;
int baseline3 = 200;
int baseline4 = 300;
double gain = 1.0;

void setup() {
  Serial.begin(9600);
  Serial.println("Sensor1,Sensor2,Sensor3,Sensor4,ref,ref");
}

void loop() {
  sensorValue1 = analogRead(analogInPin1)*gain+baseline1;
  sensorValue2 = analogRead(analogInPin2)*gain+baseline2;
  sensorValue3 = analogRead(analogInPin3)*gain+baseline3;
  sensorValue4 = analogRead(analogInPin4)*gain+baseline4;
  Serial.print(sensorValue1);
  Serial.print(",");
  Serial.print(sensorValue2);
  Serial.print(",");
  Serial.print(sensorValue3);
  Serial.print(",");
  Serial.print(sensorValue4);
  Serial.print(",1000");
  Serial.println(",0");
  delay(10);
}
