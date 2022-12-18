/*
#include <iostream>

using namespace std;

class Building;

class goodGay {
private:
    Building *building;

public:
    goodGay();

    void visit();//访问Building的属性

};


class Building {
    //告诉编译器 goodGay类是本类的好朋友，可以访问到Building类中私有内容
    friend class goodGay;

public:
    string m_SittingRoom; //客厅
private:
    string m_BedRoom;//卧室

public:
    Building();
};

Building::Building() {//类外实现成员函数
    this->m_SittingRoom = "客厅";
    this->m_BedRoom = "卧室";
}

goodGay::goodGay() {
    building = new Building;
}

void goodGay::visit() {
    cout << "好基友正在访问" << building->m_SittingRoom << endl;
    cout << "好基友正在访问" << building->m_BedRoom << endl;
}

void test01() {
    goodGay gg;
    gg.visit();
}

int main() {
    test01();
    return 0;
}*/
