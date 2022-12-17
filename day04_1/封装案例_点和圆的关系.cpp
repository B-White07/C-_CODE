
#include "circle.h"
#include "point.h"

//判断点和圆的关系
void Guanxi(Circle c, Point p) {
    int dis = (c.getCtr().getX() - p.getX()) * (c.getCtr().getX() - p.getX()) +
              (c.getCtr().getY() - p.getY()) * (c.getCtr().getY() - p.getY());
    int rdis = c.getR() * c.getR();

    if(dis < rdis){
        cout<<"点在圆内"<<endl;
    }else if(dis > rdis){
        cout<<"点在圆外"<<endl;
    }else{
        cout<<"点在圆上"<<endl;
    }
}

int main() {
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCtr(center);

    Point p1;
    p1.setX(10);
    p1.setY(8);

    Point p2;
    p2.setX(10);
    p2.setY(10);

    Point p3;
    p3.setX(10);
    p3.setY(11);

    Guanxi(c,p1);
    Guanxi(c,p2);
    Guanxi(c,p3);

    return 0;
}
