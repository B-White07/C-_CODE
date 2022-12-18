/*
#include <iostream>

using namespace std;

//构造函数的分类及调用
*/
/*      分类：
 *          1按参数分类：        无参构造（默认构造）  和  有参构造
 *          2按类型分类：        普通构造  和  拷贝构造
 *//*


class Person {
public://要加public作用域，否则默认是private，就无法调用构造析构函数，也就无法创建对象

    int age;

    Person() {
        cout << "Person的无参构造函数" << endl;
    }

    Person(int a) {
        age = a;
        cout << "Person的有参构造函数" << endl;
    }

    Person(const Person &p) {//拷贝构造函数，要用const和&的方式传参
        age = p.age;//将传入的人身上的所有属性，拷贝到自己身上
        cout << "Person的拷贝构造函数" << endl;
    }

    ~Person() {
        cout << "Person的析构函数" << endl;
    }

};

//调用
void test() {
    //括号法
*/
/*    Person p1;//默认构造函数调用
    Person p2(10);//有参构造函数调用
    Person p3(p2);//拷贝构造函数调用

    //⚠️括号法调用默认构造函数的时候不要加()，否则编译器会认为这是一个函数的声明
//    Person p1();//虽然不报错，但是逻辑错误，编译器会认为有一个返回值类型是Person，名为p1的函数

    cout<<"p2的年龄是："<<p2.age<<endl;
    cout<<"p3的年龄是："<<p3.age<<endl;*//*


    //显示法
    Person p1;
    Person p2 = Person(10);//有参构造
    Person p3 = Person(p2);//拷贝构造

//    Person(10);//   这是一个匿名对象：创建了一个对象，但没有办法使用        特点：当前行执行结束后，系统会立即回收掉匿名对象
//    cout<<"匿名对象已经没了"<<endl;

    //⚠️不要用拷贝构造函数初始化匿名对象，编译器会认为这是重定义。   Person(p3); 会被转换为 Person p3;
//    Person(p3);//err，Redefinition of 'p3'


    //隐式转换法
    Person p4 = 10;//相当于Person p4 = Person(10);     有参构造
    Person p5 = p4;//相当于Person P5 = Person(p4);     拷贝构造
}

int main() {
    test();
    return 0;
}*/
