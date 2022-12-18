/*
#include <iostream>

using namespace std;
*/
/*  C++中拷贝构造函数调用时机通常有三种情况
 *  1使用一个已经创建完毕的对象来初始化一个新对象
 *  2值传递的方式给函数参数传值
 *  3以值方式返回局部对象
 *//*

class Person {
public:
    int mAge;

    Person() {
        cout << "Person的默认构造函数" << endl;
    };

    Person(int age) {
        mAge = age;
        cout << "Person的有参构造函数" << endl;
    };

    Person(const Person &p) {
        mAge = p.mAge;
        cout << "Person的拷贝构造函数" << endl;
    };

    ~Person() {
        cout << "Person的析构函数" << endl;
    };
};

//1使用一个已经创建完毕的对象来初始化一个新对象
void test01() {
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄：" << p1.mAge << endl;
}

//2值传递的方式给函数参数传值
void doWork1(Person p) {}

void test02() {
    Person p;//调用默认构造函数
    doWork1(p);//其实是值传递，doWork函数会用拷贝构造的方法给形参临时开辟空间。因此调用的是拷贝构造函数
}

//3以值方式返回局部对象
Person doWork2() {
    Person p;
    cout << &p << endl;
    return p;//返回的不是上边的p，因为已经被释放掉了。这里返回的是另一个创建的对象，这个对象是用拷贝构造函数创建的。
    //返回值优化RVO：现在大多数编译器会对返回值为对象的函数进行返回值优化，删除临时对象，这就导致了无法调用析构函数
}

void test03() {
    Person p = doWork2();//CLion测试下不会调用析构函数，这是因为返回值优化技术。
    cout << &p << endl;
}

int main() {
//    test01();
//    test02();
    test03();
    return 0;


}

*/
