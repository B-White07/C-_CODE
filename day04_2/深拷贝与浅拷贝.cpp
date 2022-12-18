/*
#include <iostream>

using namespace std;

*/
/*      浅拷贝：简单的赋值拷贝操作
        深拷贝：在堆区重新申请空间，进行拷贝操作
        ⚠️如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题！
*//*


class Person {
public:
    int m_age;
    int *m_height;

public:
    //无参（默认）构造函数
    Person() {
        cout << "无参构造函数!" << endl;
    }

    //有参构造函数
    Person(int age, int height) {
        cout << "有参构造函数!" << endl;
        m_age = age;
        m_height = new int(height);//用new创建在堆区
    }

    //拷贝构造函数
    Person(const Person &p) {
        cout << "拷贝构造函数!" << endl;
        //如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题。若不自己重写拷贝构造函数，拷贝构造出来的对象和被拷贝的对象指向同一块儿空间。
        m_age = p.m_age;
//        m_height = p.m_height;//默认的浅拷贝，有问题
        m_height = new int(*p.m_height);//重新申请一块堆区，属于深拷贝
    }

    //析构函数
    ~Person() {
        cout << "析构函数!" << endl;
        //堆区开辟的数据在此时可以释放了，此时若采用浅拷贝，则堆区内存会重复释放，这个操作是非法的
        if (m_height != NULL) {
            delete m_height;
            m_height = NULL;
        }
    }
};

void test01() {
    Person p1(18, 180);
    Person p2(p1);

    cout << "p1的年龄： " << p1.m_age << " 身高： " << *p1.m_height << endl;
    cout << "p2的年龄： " << p2.m_age << " 身高： " << *p2.m_height << endl;
}


int main() {
    test01();
    return 0;
}*/
