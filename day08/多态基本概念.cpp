/*
#include <iostream>

using namespace std;

*/
/*
  多态是C++面向对象三大特性之一
        多态分为两类
            静态多态: 函数重载 和 运算符重载属于静态多态，复用函数名
            动态多态: 派生类和虚函数实现运行时多态

        静态多态和动态多态区别：
            静态多态的函数地址早绑定  -  编译阶段确定函数地址
            动态多态的函数地址晚绑定  -  运行阶段确定函数地址
*//*




class Animal {
public:
    //Speak函数就是虚函数
    //函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了。
    //加上virtual之后，这个类的大小变成了4个字节，这4个字节是一个指针vfptr(virtual function pointer)虚函数（表）指针，指向一个虚函数表vftable,表中记录了成员函数的地址
     virtual void speak() {
        cout << "动物在说话" << endl;
    }
};

class Cat : public Animal {
public:
    //重写而不是重载，virtual可加可不加
    //若不重写，会完全继承父类，那么子类的vftable中记录的地址也会是 &Anima::speak；
    //重写以后，子类的vftable中的记录会用重写的函数地址覆盖原地址，也就变成了   &Cat::speak;    此时调用他就发生了多态
    void speak() {
        cout << "小猫在说话" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() {
        cout << "小狗在说话" << endl;
    }

};

//我们希望传入什么对象，那么就调用什么对象的函数，此时需要晚绑定
//如果函数地址在编译阶段就能确定，那么静态联编，是早绑定
//如果函数地址在运行阶段才能确定，就是动态联编，是晚绑定
void DoSpeak(Animal &animal) {//Animal& animal = cat;   父类引用可以指向子类
    animal.speak();
}

//动态多态满足条件：
//1、有继承关系
//2、子类重写父类中的虚函数     重写和重载不一样：重写要求   函数返回值类型、函数名、参数列表    完全相同
//多态使用：父类指针或引用指向子类对象

void test01() {
    Cat cat;
    DoSpeak(cat);

    Dog dog;
    DoSpeak(dog);
}

int main() {
    test01();
    return 0;
}
*/
