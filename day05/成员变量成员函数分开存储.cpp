/*
#include <iostream>

using namespace std;

//成员变量和成员函数分开存储:在C++中，类内的成员变量和成员函数分开存储,只有非静态成员变量才属于类的对象上

class Person {
    int mA;//非静态成员变量，属于类的对象上
    static int mB;//静态成员变量，不属于类的对象上
    void func(){}//非静态成员函数，不属于类的对象上
    void func2(){}//静态成员函数，不属于类的对象上

};
int Person::mB = 10;

void test01() {
    Person p;
    //空对象占用内存空间是1：给空对象分配一个字节的空间是为了区别空对象，每个空对象有独一无二的地址。
    cout << "sizeof p = " << sizeof(p) << endl;//1
}

void test02() {
    Person p;
    //非空时，只计算非静态成员变量的大小，不计算静态成员变量和任何成员函数，因为成员变量和成员函数是分开存储的。
    cout << "sizeof p = " << sizeof(p) << endl;//4
}

int main() {
//    test01();
    test02();
    return 0;
}*/
