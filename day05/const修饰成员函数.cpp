/*
#include <iostream>

using namespace std;

*/
/*
    常函数：
    * 成员函数后加const后我们称为这个函数为常函数
    * 常函数内不可以修改成员属性
    * 成员属性声明时加关键字mutable后，在常函数中依然可以修改

    常对象：
    * 声明对象前加const称该对象为常对象
    * 常对象只能调用常函数
 *//*


class Person {
public:
    int m_A;
    mutable int m_B; //即使在常函数中也可修改，常对象也可以修改

    Person() {
        m_A = 0;
        m_B = 0;
    }

    //this指针的本质是一个指针常量，指针的指向不可修改
    void ShowPerson() const {//此处的const修饰的是this指针，让其内容也不可以修改，这就是常函数
        //const Type* const pointer;
        //this = NULL; //不能修改指针的指向 Person* const this;但是this指针指向的对象的数据是可以修改的
        //this->mA = 100; //err，若没有const修饰，则ok

        //const修饰成员函数，表示指针指向的内存空间的数据不能修改，除了mutable修饰的变量
        this->m_B = 100;
    }

    void MyFunc()  {
        //m_A = 10000;
    }
};


//const修饰对象  常对象
void test01() {

    const Person person; //常量对象
    cout << person.m_A << endl;
//    person.m_A = 100; //常对象不能修改成员变量的值,但是可以访问
    person.m_B = 100; //但是常对象可以修改mutable修饰成员变量

    //常对象只能访问常函数
    person.ShowPerson();//常对象只能调用const的函数
//    person.MyFunc(); //err，常对象不能调用普通成员函数，因为普通成员函数可以修改属性，与常对象冲突

}

int main() {
    test01();
    return 0;
}
*/
