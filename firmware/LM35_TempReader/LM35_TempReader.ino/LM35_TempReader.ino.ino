const int lm35Pin = A0; // Khai báo chân Analog A0 nối với LM35

void setup() {
  Serial.begin(9600);   // Khởi tạo giao tiếp Serial
}

void loop() {
  int adcValue = analogRead(lm35Pin); // Đọc giá trị ADC từ cảm biến
  
  // Tính toán nhiệt độ theo công thức
  float temperature = (adcValue * 500.0) / 1023.0; 

  Serial.print("Nhiet do: ");
  Serial.print(temperature);
  Serial.println(" *C");

  delay(1000); // Đợi 1 giây trước khi đọc lần tiếp theo
}