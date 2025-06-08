#ifndef DATE_H
#define DATE_H

#include <string>

class Date {
private:
    int _day;
    int _month;
    int _year;
public:
    Date();
    void input();
    std::string toString();
};

#endif
