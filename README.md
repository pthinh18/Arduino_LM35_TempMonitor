# Arduino\_LM35\_TempMonitor



## 1. Mô tả dự án (Description)

Hệ thống giám sát nhiệt độ sử dụng vi điều khiển Arduino và cảm biến nhiệt độ tương tự LM35. Dữ liệu được đọc qua các kênh Analog và gửi lên máy tính thông qua giao tiếp Serial dưới định dạng CSV để dễ dàng xử lý và vẽ đồ thị.



## 2. Tính năng (Features)

\- Đọc nhiệt độ độc lập từ 2 kênh cảm biến LM35 (chân A0 và A1).

\- Chuyển đổi dữ liệu ADC sang nhiệt độ (°C) với độ chính xác cao.

\- Xuất dữ liệu qua cổng Serial định dạng chuẩn CSV.



## 3. Phần cứng yêu cầu (Hardware)

| Linh kiện | Số lượng | Ghi chú |

| :--- | :---: | :--- |

| Mạch Arduino Uno / Nano | 1 | Vi điều khiển trung tâm |

| Cảm biến LM35 | 2 | Cảm biến nhiệt độ Analog |

| Breadboard \& Dây cắm | 1 set | Kết nối mạch |



## 4. Hướng dẫn sử dụng (Usage)

1\. Kết nối chân VCC và GND của 2 cảm biến LM35 vào nguồn 5V của Arduino.

2\. Kết nối chân tín hiệu (Vout) của cảm biến 1 vào chân \*\*A0\*\*, cảm biến 2 vào chân \*\*A1\*\*.

3\. Mở file `firmware/LM35\_TempReader/LM35\_TempReader.ino` bằng Arduino IDE.

4\. Biên dịch và nạp code xuống vi điều khiển.

5\. Mở Serial Monitor với baudrate `9600` để xem kết quả đầu ra.



## 5. Cấu trúc thư mục (Folder Structure)

```text

Arduino\_LM35\_TempMonitor/

├── firmware/              # Mã nguồn Arduino (C++)

├── docs/                  # Tài liệu sơ đồ mạch

├── pc\_app/                # Giao diện hiển thị trên máy tính

├── simulation/            # File mô phỏng mạch

├── .gitignore             # File cấu hình bỏ qua các file rác Git

└── README.md              # Tài liệu giới thiệu dự án

```
## 6. Thành viên thực hiện

* Trần Phúc Thịnh - Phát triển firmware \& quản lý Git

