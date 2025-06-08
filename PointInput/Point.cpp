#include "Point.h"
#include <iostream>

Point::Point() {
    _x = 0.0;
    _y = 0.0;
}

void Point::input() {
    float temp;

    while (true) {
        std::cout << "Nhap hoanh do (X): ";
        std::cin >> temp;

        if (std::cin.fail()) {
            std::cout << "Loi: Vui long nhap mot **so**!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        } else {
            _x = temp;
            break;
        }
    }

    while (true) {
        std::cout << "Nhap tung do (Y): ";
        std::cin >> temp;

        if (std::cin.fail()) {
            std::cout << "Loi: Vui long nhap mot **so**!\n";
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        } else {
            _y = temp;
            break;
        }
    }
}

std::string Point::toString() {
    std::stringstream builder;
    builder << "(" << _x << ", " << _y << ")";
    return builder.str();
}
