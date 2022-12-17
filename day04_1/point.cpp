//
// Created by B_White on 2022/12/17.
//
#include "point.h"

void Point::setX(int x) {// Point::setX 表明了setX是Point类作用域下的成员函数
    mX = x;
}

int Point::getX() {
    return mX;
}

void Point::setY(int y) {
    mY = y;
}

int Point::getY() {
    return mY;
}

