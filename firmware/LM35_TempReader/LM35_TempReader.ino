const int numSensors = 2;
const int sensorPins[numSensors] = {A0, A1};
int adcValues[numSensors];
float temperatures[numSensors];

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Đọc dữ liệu và tính toán nhiệt độ cho từng kênh
  for (int i = 0; i < numSensors; i++) {
    adcValues[i] = analogRead(sensorPins[i]);
    temperatures[i] = (adcValues[i] * 500.0) / 1023.0;
  }

  // Xuất dữ liệu qua Serial theo định dạng CSV (Comma-Separated Values)
  Serial.print(temperatures[0]);
  Serial.print(",");
  Serial.println(temperatures[1]);

  delay(1000);
}