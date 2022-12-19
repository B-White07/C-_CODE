/*
#include <iostream>
using namespace std;

//  前置递增返回引用，后置递增返回值
//自定义整型
class MyInteger {
    friend ostream& operator<<(ostream& out, MyInteger myint);

private:
    int m_Num;

public:
    MyInteger() {
        m_Num = 0;
    }
    //重载前置++
    MyInteger& operator++() {//返回值是引用保证了一直对一个对象递增，否则多次++时，只有第一次是目标对象的操作，后续的每次++都是对新的复制品的操作
        //先++
        m_Num++;
        //再返回
        return *this;
    }

    //重载后置++：返回值不能是引用，因为返回局部变量的引用是非法的
    MyInteger operator++(int) {//int代表占位参数，可以用于区分前置和后置递增，只能用int
        //先返回
        MyInteger temp = *this; //记录当前本身的值，然后让本身的值加1，但是返回的是以前的值，达到先返回后++；
        m_Num++;
        return temp;//返回之前记录过的值
    }
};

ostream& operator<<(ostream& out, MyInteger myint) {
    out << myint.m_Num;
    return out;
}


//前置++ 先++ 再返回
void test01() {
    MyInteger myInt;
    cout << ++myInt << endl;
    cout << myInt << endl;
}

//后置++ 先返回 再++
void test02() {
    MyInteger myInt;
    cout << myInt++ << endl;
    cout << myInt << endl;
}


int main(){

    return 0;
}
*/
