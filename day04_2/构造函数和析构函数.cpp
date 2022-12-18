/*
#include <iostream>

using namespace std;

//对象的初始化和清理
class Person {
public:
    */
/*      构造函数：
     *          1没有返回值，不用写void                  2函数名与类名相同
     *          3构造函数可以有参数，可以发生重载          4创建对象时自动调用，且只调用一次
     *//*

    Person() {
        cout << "Person的构造函数" << endl;//自己写了就自动调用自己写的。否则就调用系统默认的空的构造函数
    }

    */
/*      析构函数：
     *          1没有返回值，不写void                   2函数名和类名相同，前加～
     *          3析构函数不可以有参数，不能重载            4对象销毁前自动调用，只会调用一次
     *//*

    ~Person() {
        cout << "Person的析构函数" << endl;
    }
};

//构造和析构函数都必须实现，自己不提供编译器会提供一个空的构造和析构函数
void test01(){
    Person p;
}


int main() {

    test01();
    return 0;
}
*/
