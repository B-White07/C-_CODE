#include <iostream>

using namespace std;

/*
 *  菱形继承概念：两个派生类继承同一个基类，又有某个类同时继承者两个派生类，这种继承被称为菱形继承，或者钻石继承。
 *  菱形继承问题：
        1.羊继承了动物的数据，驼同样继承了动物的数据，当草泥马使用数据时，就会产生二义性。
        2.草泥马继承自动物的数据继承了两份，其实我们应该清楚，这份数据我们只需要一份就可以。
    总结：
        1.菱形继承带来的主要问题是子类继承两份相同的数据，导致资源浪费以及毫无意义
        2.利用虚继承可以解决菱形继承问题
 */

class Animal {
public:
    int m_Age;
};

//继承前加virtual关键字后，变为虚继承,此时公共的父类Animal称为虚基类
/*
 *   virtual关键字使得继承方式变成了虚继承，此时两个子类从同一父类那里继承来的是虚基类指针vbptr(virtual vase pointer)，这个指针指向了各自的vbtable(虚基类表)，
 *   这个表中记录了一个偏移量，通过这个偏移量就可以找到需要的数据，这个数据只有一份
 */
class Sheep : virtual public Animal {
};

class Tuo : virtual public Animal {
};

//羊驼类
class SheepTuo : public Sheep, public Tuo {
};

void test01() {
    SheepTuo st;
    //相同数据加作用域区分即可
    st.Sheep::m_Age = 100;
    st.Tuo::m_Age = 200;

    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;//由于virtual，这种访问方式可以了，否则是错误的
}


int main() {
    test01();
    return 0;
}