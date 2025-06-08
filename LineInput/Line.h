#ifndef LINE_H
#define LINE_H

#include <string>

class Line {
private:
    float _x1, _y1;
    float _x2, _y2;
public:
    Line();
    void input();
    std::string toString();
};

#endif
