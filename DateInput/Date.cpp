#include "Date.h"
#include <iostream>
#include <sstream>

Date::Date() {
    _day = 1;
    _month = 1;
    _year = 2000;
}

void Date::input() {
    std::cout << "Nhap ngay: ";
    std::cin >> _day;

    std::cout << "Nhap thang: ";
    std::cin >> _month;

    std::cout << "Nhap nam: ";
    std::cin >> _year;
}

std::string Date::toString() {
    std::stringstream ss;
    ss << _day << "/" << _month << "/" << _year;
    return ss.str();
}
