#include <iostream>

using namespace std;

//    一、函数的默认参数     语法： 返回值类型 函数名(形参=默认值){}
/*int func1(int a, int b, int c) {
    return a + b + c;
}

int func2(int a, int b = 20, int c = 30) {
    return a + b + c;
}*/
//  注意事项：1如果某个位置已经有了默认参数，那么从这个位置往后都必须有默认值
/*int func3(int a, int b = 20, int c) {//err
    return a + b + c;
}*/
//  2如果函数声明有默认参数，函数实现就不能有默认参数，声明和实现只能一个有默认参数
/*int func4(int a, int b);//函数声明
int func4(int a, int b) {//函数实现
    return a + b;
}

int func5(int a = 10, int = 10);//函数声明时有默认参数
int func5(int a = 10, int b = 10) {//err，函数实现若还有默认参数会出错：重定义默认参数
    return a + b;
}*/


//  二、函数占位参数        语法： 返回值类型 函数名(数据类型){}
/*
void func1(int a,int){
    cout<<"just a test"<<endl;
}

void func2(int a,int = 10){//可以有默认参数
    cout<<"just a test"<<endl;
}
*/


//  三、函数重载：函数名可以相同，提高复用性
//  函数重载需要满足条件：1同一个作用域下(目前都是全局作用域)     2函数名相同      3函数参数类型不同或个数不同或顺序不同     ⚠️函数的返回值不作为函数重载的条件
/*
void func() {
    cout << "func()函数调用" << endl;
}

void func(char ch) {
    cout << "func(char)函数调用!" << endl;
}

void func(int a) {
    cout << "func(int)函数调用!" << endl;
}

void func(int a, char ch) {
    cout << "func(int,char)函数调用!" << endl;
}

void func(char ch, int a) {
    cout << "func(char,int)函数调用!" << endl;
}

//int func(char ch, int a) {//err,Functions that differ only in their return type cannot be overloaded.
//    cout << "func(char,int)函数调用!" << endl;
//    return 0;
//}
*/


//  四、函数重载的注意事项
//1引用作为函数重载的条件
/*void func(int& a){//int& a = 10;不合法
    cout<<"func(int&)重载！"<<endl;
}

void func(const int& a){//const int& a = 10;合法
    cout<<"func(const int&)重载！"<<endl;
}*/

//2函数重载遇到默认参数
/*void func(int a, int b = 10) {
    cout << "func(int,int)重载!" << endl;
}

void func(int a) {
    cout << "func(int)重载!" << endl;
}*/

int main() {
/*    cout << func1(10, 20, 30) << endl;//没有默认值，参数一个不能少
    //有默认值，参数可以少
    cout << func2(10) << endl;//没传就用默认值
    cout << func2(10, 30) << endl;//传了就覆盖默认值*/


//    func1(10,10);//占的位置也需要传递参数。当然了，若有默认参数可以不传


/*    func();
    func(10);
    func('a');
    func(10, 'a');
    func('a', 10);*/


//函数重载注意事项
/*    int a = 10;
    func(a);//func(int&)重载！     因为a是个变量，内容可以修改，可以和引用对应
    func(10);//func(const int&)重载！      10是字面值常量，不能修改，和常量引用对应*/

//    func(10);//err，Call to 'func' is ambiguous. 由于默认参数的存在，不知道调用哪个，存在二义性


    return 0;
}
