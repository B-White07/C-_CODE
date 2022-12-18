/*
#include <iostream>

using namespace std;

*/
/*  初始化列表：用来初始化属性
 *      语法： 构造函数():属性1(值1),属性2(值2)... {}
 *//*


class Person {
public:
    int m_A;
    int m_B;
    int m_C;

public:
*/
/*    //传统方式初始化
    Person(int a, int b, int c) {
    	m_A = a;
    	m_B = b;
    	m_C = c;
    }*//*


    //初始化列表方式初始化
//    Person() : m_A(10), m_B(20), m_C(30) {}
    Person(int a, int b, int c) : m_A(a), m_B(b), m_C(c) {}
};

void test() {
//    Person p(10,20,30);
    Person p(20,30,10);
    cout << "mA:" << p.m_A << endl;
    cout << "mB:" << p.m_B << endl;
    cout << "mC:" << p.m_C << endl;
}

int main() {
    test();
    return 0;
}*/
