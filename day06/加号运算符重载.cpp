/*
#include <iostream>

using namespace std;

*/
/*
 * 对于内置的数据类型，编译器知道如何进行运算，但是不知道自定义数据类型如何运算。
 * 运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型。
        总结1：对于内置的数据类型的表达式的的运算符是不可能改变的
        总结2：不要滥用运算符重载
 *//*


class Person {
public:
    int m_A;
    int m_B;

public:
    Person() {};

    Person(int a, int b) {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数实现 + 号运算符重载
    Person operator+(const Person &p) {
        Person temp;
        temp.m_A = this->m_A + p.m_A;
        temp.m_B = this->m_B + p.m_B;
        return temp;
    }
};

//全局函数实现 + 号运算符重载
Person operator+(const Person &p1, const Person &p2) {
    Person temp(0, 0);
    temp.m_A = p1.m_A + p2.m_A;
    temp.m_B = p1.m_B + p2.m_B;
    return temp;
}

//运算符重载 可以发生函数重载
Person operator+(const Person &p2, int val) {
    Person temp;
    temp.m_A = p2.m_A + val;
    temp.m_B = p2.m_B + val;
    return temp;
}

void test() {

    Person p1(10, 10);
    Person p2(20, 20);

    //成员函数方式
//    Person p3 = p2 + p1;  //右边本质是 p2.operaor+(p1);    也就是p2+p1相当于p2调用+函数，p1是参数
//    cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;

    //全局函数方式
    Person p3 = p1 + p2;//本质是 p3 = operator+(p1,p2);
    cout << "mA:" << p3.m_A << " mB:" << p3.m_B << endl;

    //函数重载
    Person p4 = p3 + 10; //相当于 operator+(p3,10)
    cout << "mA:" << p4.m_A << " mB:" << p4.m_B << endl;

}

int main() {
    test();
    return 0;
}*/
