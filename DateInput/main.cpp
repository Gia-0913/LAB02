#include <iostream>
#include "Date.h"

int main() {
    std::cout << "Date Input Program\n";
    Date date;
    date.input();
    std::cout << "Ngay vua nhap: " << date.toString() << std::endl;
    return 0;
}
