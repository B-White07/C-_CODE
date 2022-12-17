//
// Created by B_White on 2022/12/17.
//
#include <iostream>
using namespace std;
#include "point.h"

#ifndef DAY04_1_CIRCLE_H
#define DAY04_1_CIRCLE_H


class Circle {
private:
    int mR;//半径
    //类可以作为另一个类的成员
    Point mCenter;//圆心
public:
    void setR(int r);
    int getR();
    void setCtr(Point point);
    Point getCtr();
};


#endif //DAY04_1_CIRCLE_H
