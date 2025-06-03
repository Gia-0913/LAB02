#ifndef UTILS_H
#define UTILS_H

#include <string>

/**
 * @brief Kiểm tra xem một số nguyên có phải là số nguyên tố hay không.
 * 
 * @param n Số nguyên cần kiểm tra.
 * @return true Nếu là số nguyên tố.
 * @return false Nếu không phải số nguyên tố.
 */
bool isPrime(int n);

/**
 * @brief Yêu cầu người dùng nhập một số nguyên trong một khoảng, có kiểm tra hợp lệ.
 * 
 * @param prompt Chuỗi yêu cầu hiển thị cho người dùng.
 * @param min Giá trị nhỏ nhất hợp lệ.
 * @param max Giá trị lớn nhất hợp lệ.
 * @return int Số nguyên hợp lệ mà người dùng đã nhập.
 */
int requestIntUntilValidUseCase(const std::string& prompt, int min, int max);

/**
 * @brief Yêu cầu người dùng nhập một số nguyên tố trong một khoảng, có kiểm tra hợp lệ.
 * 
 * @param prompt Chuỗi yêu cầu hiển thị cho người dùng.
 * @param min Giá trị nhỏ nhất hợp lệ.
 * @param max Giá trị lớn nhất hợp lệ.
 * @return int Số nguyên tố hợp lệ mà người dùng đã nhập.
 */
int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max);

#endif
