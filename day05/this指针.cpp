/*
#include <iostream>
using namespace std;
*/
/*      由于C++中成员变量和成员函数是分开存储的，每一个非静态成员函数只会诞生一份函数实例，
   也就是说多个同类型的对象会共用一块代码，那么这一块代码是如何区分哪个对象调用自己的呢？c++通过提供特殊的对象指针，this指针，解决此问题。
        this指针指向当前调用此函数的对象
        this指针是隐含每一个非静态成员函数内的一种指针
        this指针不需要定义，直接使用即可

    this指针的用途：
        1当形参和成员变量同名时，可用this指针来区分
        2在类的非静态成员函数中返回对象本身，可使用return *this
*//*


class Person
{
public:
    int age;

    Person(int age)
    {
        //1、当形参和成员变量同名时，可用this指针来区分
//        age = age;//这两个age都是形参的age，并没有改变成员变量的age。 两种解决方法：1利用this  2改名成员变量，防止冲突
        this->age = age;//this指针指向当前调用此函数的对象
    }

    Person& PersonAddPerson(const Person &p)//若返回值为Person，经过p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
                                            // 后p2.age的值还是20，因为值传递会临时开辟空间而不是一直操作p2，上述操作只有第一次调用是在操作p2，
                                            // 后边两次调用age确实增加了，但这不是p2的age，而是临时对象的
    {
        this->age += p.age;
        //返回对象本身用*this，this指向对象，*this就是该对象
        return *this;
    }
};

void test01()
{
    Person p1(10);
    cout << "p1.age = " << p1.age << endl;

    Person p2(10);
    p2.PersonAddPerson(p1).PersonAddPerson(p1).PersonAddPerson(p1);
    cout << "p2.age = " << p2.age << endl;
}

int main(){
    test01();

    return 0;
}*/
