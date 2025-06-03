#include <iostream>
#include <vector>
#include <string>
#include <regex>
#include <sstream>
#include <optional>

/**
 * @brief Chạy chương trình chính để nhập và hiển thị danh sách số nguyên tố
 */
void appRun();

/**
 * @brief Kiểm tra một số có phải là số nguyên tố không
 */
bool isPrime(int number);

/**
 * @brief Yêu cầu người dùng nhập một số nguyên hợp lệ trong khoảng [min, max]
 */
std::optional<int> requestIntUseCase(const std::string& prompt, int min, int max);

/**
 * @brief Lặp lại việc nhập số nguyên cho đến khi giá trị hợp lệ
 */
int requestIntUntilValidUseCase(const std::string& prompt, int min, int max);

/**
 * @brief Yêu cầu người dùng nhập một số nguyên tố hợp lệ trong khoảng [min, max]
 */
std::optional<int> requestPrimeUseCase(const std::string& prompt, int min, int max);

/**
 * @brief Lặp lại việc nhập số nguyên tố cho đến khi hợp lệ
 */
int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max);

/**
 * @brief Nhập n số nguyên tố hợp lệ
 */
std::vector<int> requestPrimesUseCase(int n, const std::string& prompt, int min, int max);

/**
 * @brief In ra danh sách số nguyên
 */
void print(const std::string& prompt, const std::vector<int>& a);

int main() {
    std::cout << "Chương trình thao tác với mảng số nguyên tố\n";
    appRun();
    return 0;
}

void appRun() {
    int n = requestIntUntilValidUseCase("Nhập số lượng số nguyên tố [2, 10]: ", 2, 10);
    std::vector<int> primes = requestPrimesUseCase(n, "Nhập các số nguyên tố [1, 100]:", 1, 100);
    print("Các số nguyên tố đã nhập: ", primes);
}

bool isPrime(int number) {
    if (number < 2) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;
    for (int i = 3; i * i <= number; i += 2)
        if (number % i == 0) return false;
    return true;
}

std::optional<int> requestIntUseCase(const std::string& prompt, int min, int max) {
    std::cout << prompt;
    std::string buffer;
    std::getline(std::cin, buffer);

    if (buffer.empty()) return std::nullopt;

    std::regex pattern("^\\d+$");
    if (!std::regex_match(buffer, pattern))
        return std::nullopt;

    int value = std::stoi(buffer);
    if (value < min || value > max)
        return std::nullopt;

    return value;
}

int requestIntUntilValidUseCase(const std::string& prompt, int min, int max) {
    std::optional<int> result;
    do {
        result = requestIntUseCase(prompt, min, max);
        if (!result)
            std::cout << "Lỗi: Dữ liệu không hợp lệ. Vui lòng nhập lại.\n";
    } while (!result);
    return result.value();
}

std::optional<int> requestPrimeUseCase(const std::string& prompt, int min, int max) {
    auto result = requestIntUseCase(prompt, min, max);
    if (!result) return std::nullopt;
    if (!isPrime(result.value()))
        return std::nullopt;
    return result;
}

int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max) {
    std::optional<int> result;
    do {
        result = requestPrimeUseCase(prompt, min, max);
        if (!result)
            std::cout << "Lỗi: Không phải số nguyên tố hợp lệ. Vui lòng nhập lại.\n";
    } while (!result);
    return result.value();
}

std::vector<int> requestPrimesUseCase(int n, const std::string& prompt, int min, int max) {
    std::cout << prompt << "\n";
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        std::ostringstream ss;
        ss << "Nhập số nguyên tố thứ " << i << ": ";
        int value = requestPrimeUntilValidUseCase(ss.str(), min, max);
        result.push_back(value);
    }
    return result;
}

void print(const std::string& prompt, const std::vector<int>& a) {
    std::cout << prompt;
    for (const int& x : a)
        std::cout << x << " ";
    std::cout << "\n";
}
