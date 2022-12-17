//
// Created by B_White on 2022/12/17.
//
#pragma once
#include <iostream>
using namespace std;

#ifndef DAY04_1_POINT_H
#define DAY04_1_POINT_H


class Point {
private:
    int mX;
    int mY;
public:
    void setX(int x);
    int getX();
    void setY(int y);
    int getY();
};


#endif //DAY04_1_POINT_H
