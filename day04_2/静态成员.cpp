#include <iostream>

using namespace std;

/*      静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
            静态成员分为：
                1静态成员变量
                    11所有对象共享同一份数据，因此不属于某个对象
                    12在编译阶段分配内存，全局区
                    13类内声明，类外初始化
                2静态成员函数
                    21所有对象共享同一个函数
                    22静态成员函数只能访问静态成员变量
*/

/*      //静态成员变量
class Person {
public:
    static int m_A; //静态成员变量
private:
    static int m_B; //静态成员变量也是有访问权限的
};

//类外初始化，否则无法正常访问
int Person::m_A = 10;
int Person::m_B = 10;//private也需要类外初始化，这是可以的

void test01() {
    //静态成员变量两种访问方式，这是由于静态成员变量被所有对象共享
    //1、通过对象        非静态成员变量只能这么访问
    Person p1;
    p1.m_A = 100;
    cout << "p1.m_A = " << p1.m_A << endl;

    Person p2;
    p2.m_A = 200;
    cout << "p1.m_A = " << p1.m_A << endl; //共享同一份数据，不属于某个对象
    cout << "p2.m_A = " << p2.m_A << endl;

    //2、通过类名        非静态成员变量不能这么访问
    cout << "m_A = " << Person::m_A << endl;
    //cout << "m_B = " << Person::m_B << endl; //err，私有权限访问不到
}
*/

    //静态成员函数
class Person
{
public:
    static int m_A; //静态成员变量
    int m_B; //只属于对象本身，不能被对象共享

    //静态成员函数
    static void func()
    {
        cout << "func调用" << endl;
        m_A = 100;
//        m_B = 100; //err，不可以访问非静态成员变量，无法区分到底是哪个对象的属性
    }

private:
    //静态成员函数也是有访问权限的
    static void func2()
    {
        cout << "func2调用" << endl;
    }
};

int Person::m_A = 10;


void test01()
{
    //静态成员变量两种访问方式

    //1、通过对象
    Person p1;
    p1.func();

    //2、通过类名
    Person::func();
//    Person::func2(); //err，私有权限访问不到
}


int main() {
    test01();
    return 0;
}