#include "Line.h"
#include <iostream>
#include <sstream>

Line::Line() {
    _x1 = _y1 = _x2 = _y2 = 0.0;
}

void Line::input() {
    std::cout << "Nhap toa do diem dau (x1, y1):\n";
    std::cout << "x1 = "; std::cin >> _x1;
    std::cout << "y1 = "; std::cin >> _y1;

    std::cout << "Nhap toa do diem cuoi (x2, y2):\n";
    std::cout << "x2 = "; std::cin >> _x2;
    std::cout << "y2 = "; std::cin >> _y2;
}

std::string Line::toString() {
    std::stringstream ss;
    ss << "Doan thang tu (" << _x1 << ", " << _y1 << ") den ("
       << _x2 << ", " << _y2 << ")";
    return ss.str();
}
