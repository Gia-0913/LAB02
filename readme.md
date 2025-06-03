# LAB02 – Cải tiến và kiểm thử chương trình C++ bằng AI và Doxygen

## 🛠️ Các cải tiến đã thực hiện từ mã nguồn ban đầu

1. **Tách mã nguồn theo chuẩn**:
   - Tách logic kiểm tra số nguyên tố sang thư viện `utils.h` và `utils.cpp` để tái sử dụng và kiểm thử dễ dàng hơn.

2. **Ghi chú hàm bằng AI (ChatGPT)**:
   - Toàn bộ các hàm (trừ `main`) được ghi chú chi tiết theo chuẩn Doxygen về:
     - Mục đích hàm
     - Tham số đầu vào
     - Giá trị trả về

3. **Sinh tài liệu bằng Doxygen**:
   - Sử dụng công cụ Doxygen để sinh tài liệu từ ghi chú, nằm trong thư mục `docs/html`.

4. **Viết test bằng Google Test**:
   - Viết các test đơn giản trong `main_tests.cpp` để kiểm tra hàm `isPrime`.
   - Chạy test và xác nhận các kết quả đúng như mong đợi.

5. **Quản lý bằng Git & GitHub**:
   - Toàn bộ mã nguồn được push lên repo private:  
     👉 https://github.com/Gia-0913/LAB02


---

## ▶️ Hướng dẫn chạy chương trình

> **Yêu cầu**: Cài sẵn g++ và Google Test (`gtest`) trên máy

### 1. Biên dịch chương trình chính:

```bash
g++ main.cpp lib/utils.cpp -o out/program

./out/program

g++ main_tests.cpp lib/utils.cpp -lgtest -lgtest_main -pthread -o out/tests

./out/tests
