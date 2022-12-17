/*
#include <iostream>

using namespace std;

*/
/*  访问权限：
 *      public              成员类内类外都可以访问
 *      protected           成员类内可以访问，类外不可以访问    儿子也可以访问父亲中保护的内容
 *      private             成员类内可以访问，类外不可以访问    儿子不可以访问父亲中保护的内容，具体区别在继承中展开
 *//*

class Person {
public://公共权限
    string mName;
protected://保护权限
    string mCar;
private://私有权限
    int mPassword;

public:
    void func1() {
        mName = "zhangsan";
        mCar = "lexus";
        mPassword = 1111;
    }

private:
    void func2() {
        mName = "zhangsan";
        mCar = "lexus";
        mPassword = 1111;
    }
};

int main() {
    Person p1;
    p1.mName = "lisi";//ok，public可以类外访问
//    p1.mCar = "aodi";//err，protected权限在类外不可以访问
//    p1.mPassword = 0000;//err，private权限在类外不可以访问
    p1.func1();//ok
//    p1.func2();//err

    return 0;
}
*/
