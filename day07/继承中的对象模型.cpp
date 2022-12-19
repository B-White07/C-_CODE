/*
#include <iostream>

using namespace std;

//父类中所有非静态成员属性都会被继承下去，私有成员属性只是访问不到，因为被编译器隐藏了，但是也被继承下去了。
class Base {
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C; //私有成员只是被隐藏了，但是还是会继承下去
};

//公共继承
class Son : public Base {
public:
    int m_D;
};

void test01() {
    cout << "sizeof Son = " << sizeof(Son) << endl;//16，说明private也被继承了
}

int main() {
    test01();
    return 0;
}
*/
