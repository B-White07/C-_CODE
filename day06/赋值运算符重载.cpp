/*
#include <iostream>

using namespace std;

*/
/*  c++编译器至少给一个类添加4个函数：
        1. 默认构造函数(无参，函数体为空)
        2. 默认析构函数(无参，函数体为空)
        3. 默认拷贝构造函数，对属性进行值拷贝
        4. 赋值运算符 operator=, 对属性进行值拷贝，是浅拷贝
                如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
*//*


class Person {
public:
    //年龄的指针
    int *m_Age;

    Person(int age) {
        //将年龄数据开辟到堆区
        m_Age = new int(age);
    }

    //重载赋值运算符
    Person& operator=(Person &p) {//注意返回值类型
        //如果自身已经有数据，先释放掉
        if (m_Age != NULL) {
            delete m_Age;
            m_Age = NULL;
        }
        //编译器提供的代码是浅拷贝
        //m_Age = p.m_Age;

        //提供深拷贝 解决浅拷贝的问题
        m_Age = new int(*p.m_Age);

        //返回自身
        return *this;
    }

    ~Person() {
        if (m_Age != NULL) {
            delete m_Age;//释放堆区数据
            m_Age = NULL;
        }
    }
};


void test01() {
    Person p1(18);

    Person p2(20);

    Person p3(30);

    p3 = p2 = p1; //赋值操作，返回值是Person&才可以这样操作，若返回值为void则不能连等

    cout << "p1的年龄为：" << *p1.m_Age << endl;

    cout << "p2的年龄为：" << *p2.m_Age << endl;

    cout << "p3的年龄为：" << *p3.m_Age << endl;
}

int main() {
    test01();
    return 0;
}
*/
