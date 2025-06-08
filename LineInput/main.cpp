#include <iostream>
#include "Line.h"

int main() {
    std::cout << "Nhap du lieu cho doan thang:\n";
    Line line;
    line.input();

    std::cout << "=> Du lieu vua nhap: " << line.toString() << std::endl;
    return 0;
}
