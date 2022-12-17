//
// Created by B_White on 2022/12/17.
//

#include "circle.h"

void Circle::setR(int r) {
    mR = r;
}

int Circle::getR() {
    return mR;
}

void Circle::setCtr(Point point) {
    mCenter = point;
}

Point Circle::getCtr() {
    return mCenter;
}
