#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <sstream>
#include <string>

class Point {
private:
    float _x;
    float _y;
public:
    Point();
    void input();
    std::string toString();
};

#endif
