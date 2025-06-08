#include <iostream>
#include "Point.h"

int main() {
    std::cout << "Point in 2D space\n";
    Point p;
    p.input();
    std::cout << "Diem vua nhap la: " << p.toString() << std::endl;
    return 0;
}
