/*
#include <iostream>

using namespace std;

*/
/*
 *  问题：继承中同名的静态成员在子类对象上如何进行访问？
        静态成员和非静态成员出现同名，处理方式一致，只不过有两种访问的方式（通过对象 和 通过类名）
            - 访问子类同名成员   直接访问即可
            - 访问父类同名成员   需要加作用域
 *//*


class Base {
public:
    static int m_A;

    static void func() {
        cout << "Base - static void func()" << endl;
    }

    static void func(int a) {
        cout << "Base - static void func(int a)" << endl;
    }
};
int Base::m_A = 100;

class Son : public Base {
public:
    static int m_A;

    static void func() {
        cout << "Son - static void func()" << endl;
    }
};
int Son::m_A = 200;

//同名成员属性
void test01() {
    //通过对象访问
    cout << "通过对象访问： " << endl;
    Son s;
    cout << "Son  下 m_A = " << s.m_A << endl;
    cout << "Base 下 m_A = " << s.Base::m_A << endl;

    //通过类名访问
    cout << "通过类名访问： " << endl;
    cout << "Son  下 m_A = " << Son::m_A << endl;
    //第一个::代表通过类名访问，第二个::代表访问父类作用域下
    cout << "Base 下 m_A = " << Son::Base::m_A << endl;//这样通过子类
//    cout << "Base 下 m_A = " << Base::m_A << endl;//这是直接通过父类访问
}

//同名成员函数
void test02() {
    //通过对象访问
    cout << "通过对象访问： " << endl;
    Son s;
    s.func();
    s.Base::func();

    cout << "通过类名访问： " << endl;
    Son::func();
    Son::Base::func();
    //出现同名，子类会隐藏掉父类中所有同名成员函数，需要加作作用域访问
    Son::Base::func(100);
//    Son::func(100);//err，父类中的同名函数被隐藏了
}

int main() {
    test01();
    test02();
    return 0;
}*/
