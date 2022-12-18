/*
#include <iostream>

using namespace std;

*/
/*      默认情况下，c++编译器至少给一个类添加3个函数
            1．默认构造函数(无参，函数体为空)
            2．默认析构函数(无参，函数体为空)
            3．默认拷贝构造函数，对属性进行值拷贝

        构造函数调用规则如下：
            * 如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
            * 如果用户定义拷贝构造函数，c++不会再提供其他构造函数
*//*


class Person {
public:
    int age;

    //无参（默认）构造函数
*/
/*    Person() {
        cout << "无参构造函数!" << endl;
    }*//*


    //有参构造函数
*/
/*    Person(int a) {
        age = a;
        cout << "有参构造函数!" << endl;
    }*//*


    //拷贝构造函数
    Person(const Person &p) {
        age = p.age;
        cout << "拷贝构造函数!" << endl;
    }

    //析构函数
    ~Person() {
        cout << "析构函数!" << endl;
    }
};

*/
/*void test01() {
    Person p;
    p.age = 18;

    Person p2(p);
    cout << "p2的年龄：" << p2.age << endl;
}*//*


//如果用户定义有参构造函数，c++不在提供默认无参构造，但是会提供默认拷贝构造
*/
/*void test02(){
//    Person p;//若只写有参，不写无参，此处会报错。因为此行代码会调用无参，但是我们写了有参，编译器就不会提供无参
    Person p(28);
    Person p2(p);
    cout << "p2的年龄：" << p2.age << endl;
}*//*


//如果用户定义拷贝构造函数，c++不会再提供其他构造函数
void test03(){
    Person p;//err
}



int main() {
//    test01();
//    test02();

    return 0;
}*/
