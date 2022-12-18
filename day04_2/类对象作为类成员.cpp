/*
#include <iostream>

using namespace std;

//B类中有对象A作为成员，A为对象成员，那么当创建B对象时，A与B的构造和析构的顺序是谁先谁后？
class Phone {
public:
    string m_PhoneName;

    Phone(string name) {
        m_PhoneName = name;
        cout << "Phone构造" << endl;
    }

    ~Phone() {
        cout << "Phone析构" << endl;
    }
};


class Person {
public:
    string m_Name;
    Phone m_Phone;
    //初始化列表可以告诉编译器调用哪一个构造函数             Phone m_Phone = pName;其实是隐式转换法
    Person(string name, string pName) : m_Name(name), m_Phone(pName) {
        cout << "Person构造" << endl;
    }

    ~Person() {
        cout << "Person析构" << endl;
    }

    void playGame() {
        cout << m_Name << " 使用" << m_Phone.m_PhoneName << " 手机! " << endl;
    }
};

void test01() {
    //当类中成员是其他类对象时，我们称该成员为对象成员
    //构造的顺序是 ：先调用对象成员的构造，再调用本类构造，析构顺序与构造相反
    Person p("张三", "苹果1024");//先构造phone
    p.playGame();

}


int main() {
    test01();
    return 0;
}*/
