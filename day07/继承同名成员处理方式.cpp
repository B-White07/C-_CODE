/*
#include <iostream>

using namespace std;

//当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？
//      访问子类同名成员   直接访问即可
//      访问父类同名成员   需要加作用域

*/
/*  总结：
        1. 子类对象可以直接访问到子类中同名成员
        2. 子类对象加作用域可以访问到父类同名成员
        3. 当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
*//*


class Base {
public:
    int m_A;

public:
    Base() {
        m_A = 100;
    }

    void func() {
        cout << "Base - func()调用" << endl;
    }

    void func(int a) {
        cout << "Base - func(int a)调用" << endl;
    }
};


class Son : public Base {
public:
    int m_A;

public:
    Son() {
        m_A = 200;
    }

    //当子类与父类拥有同名的成员函数，子类会隐藏父类中所有版本的同名成员函数
    //如果想访问父类中被隐藏的同名成员函数，需要加父类的作用域
    void func() {
        cout << "Son - func()调用" << endl;
    }
};

void test01() {
    Son s;
    cout << "Son下的m_A = " << s.m_A << endl;
    cout << "Base下的m_A = " << s.Base::m_A << endl;//加个作用域就可以访问父类的

    s.func();
    s.Base::func();
    //子类中的同名成员函数会隐藏掉父类有所有同名成员函数，包括重载的，要想访问父类中被隐藏的同名成员函数的需要加作用域
//    s.func(10);//err
    s.Base::func(10);

}

int main() {
    test01();
    return 0;
}*/
