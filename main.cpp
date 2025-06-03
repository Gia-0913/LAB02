#include <iostream>
#include "lib/utils.h"

int main() {
    std::cout << "== PRIME VALIDATOR ==\n";

    int min = requestIntUntilValidUseCase("Enter minimum bound (>= 2): ", 2, 1000000);
    int max = requestIntUntilValidUseCase("Enter maximum bound (>= min): ", min, 1000000);
    int prime = requestPrimeUntilValidUseCase("Enter a prime number within range: ", min, max);

    std::cout << "You entered a valid prime number: " << prime << std::endl;
    return 0;
}
