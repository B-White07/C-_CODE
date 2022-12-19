/*
#include <iostream>
using namespace std;

//  作用：可以输出自定义数据类型

//      总结：重载左移运算符配合友元可以实现输出自定义数据类型
class Person {
    friend ostream& operator<<(ostream& out, Person& p);

private:
    int m_A;
    int m_B;

public:
    Person(int a, int b)
    {
        this->m_A = a;
        this->m_B = b;
    }

    //成员函数实现不了:若参数为Person& p,则调用的时候是p.operator<<(p)，这不符合逻辑
    //              若参数为cout，则调用的时候是p.operator<<(cout)，简化为p << cout;我们需要cout << p;显然这不是我们想要的效果
//    void operator<<(Person& p){//因此不用成员函数来实现重载<<
//    }
};

//全局函数实现左移重载
//ostream对象只能有一个，因此传引用
ostream& operator<<(ostream& out, Person& p) {//返回值不是void
    out << "a:" << p.m_A << " b:" << p.m_B;
    return out;
}

void test() {
    Person p1(10, 20);
    cout << p1 << "hello world" << endl; //若返回类型为void，此处报错，因为只有ostream对象才能继续使用这个重载
}

int main(){
    test();
    return 0;
}
*/
