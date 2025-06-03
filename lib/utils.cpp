#include "utils.h"
#include <iostream>

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}

int requestIntUntilValidUseCase(const std::string& prompt, int min, int max) {
    int value;
    do {
        std::cout << prompt;
        std::cin >> value;
        if (std::cin.fail() || value < min || value > max) {
            std::cout << "Invalid input. Please enter a number between " << min << " and " << max << ".\n";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        } else {
            return value;
        }
    } while (true);
}

int requestPrimeUntilValidUseCase(const std::string& prompt, int min, int max) {
    int value;
    do {
        value = requestIntUntilValidUseCase(prompt, min, max);
        if (!isPrime(value)) {
            std::cout << "The number is not a prime. Try again.\n";
        } else {
            return value;
        }
    } while (true);
}
