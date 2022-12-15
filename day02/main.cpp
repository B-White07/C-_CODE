#include <iostream>

using namespace std;
//全局区
/*//全局变量
int g_a = 10;
int g_b = 10;

//全局常量
const int c_g_a = 10;
const int c_g_b = 10;*/

//堆区
/*int *func() {
    //new关键字可以将数据开辟到堆区
    //指针p仍然是局部变量，放在栈上。但是指针指向的数据在堆区。
    int *p = new int(10);
    return p;
}*/

//new
/*int *func() {
    //new返回的是该数据类型的指针
    int *p = new int(10);
    return p;
}

void test01() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    delete p;//释放new出来的空间
    cout << *p << endl;//非法
}

//在堆区开辟数组
void test02() {
    int *p = new int[10];//数组有10个元素，返回数组的首地址

    for (int i = 0; i < 10; i++) {
        p[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        cout << p[i] << endl;
    }

    //释放
    delete[] p;//释放数组加[]，否则只会释放一个数据
}*/

//引用：起别名
//交换函数： 1值传递    2地址传递   3引用传递
/*void mySwap(int &a, int &b) {//引用传参可以改变实参
    int temp = a;
    a = b;
    b = temp;
}*/

//引用做函数返回值：1不要返回局部变量的引用
/*int& test01() {
    int a = 10;
    return a;
}
//2函数的调用可以作为左值
int& test02() {
    static  int a = 10;//静态变量存放在全局区，程序结束后才释放
    return a;
}*/

//引用的本质：指针常量
//void func(int &ref) {
//    ref = 100;
//}

//常量引用：用来修饰形参，防止误操作
void showValue(const int &val) {
//    val = 1000;//err
    cout << "val= " << val << endl;
}


int main() {
//全局区
/*    //局部变量
    int a = 10;
    int b = 10;

    //局部常量
    const int c_l_a = 10;
    const int c_l_b = 10;

    //字符串常量
    "string";

    //静态变量
    static int s_a = 10;
    static int s_b = 10;

    //局部变量和局部常量（const修饰的局部变量）不在全局区中
    cout << "局部变量a的地址是：" << &a << endl;
    cout << "局部变量b的地址是：" << &b << endl;
    cout << "局部常量c_l_a的地址是：" << &c_l_a << endl;
    cout << "局部常量c_l_b的地址是：" << &c_l_b << endl;

    //全局变量、静态变量、字符串常量和全局常量（const修饰的全局变量）在全局区中
    cout << "全局变量g_a的地址是：" << &g_a << endl;
    cout << "全局变量g_b的地址是：" << &g_b << endl;
    cout << "全局常量c_g_a的地址是：" << &c_g_a << endl;
    cout << "全局常量c_g_b的地址是：" << &c_g_b << endl;
    cout << "字符串常量：" << &"string" << endl;
    cout << "静态变量s_a的地址是：" << &s_a << endl;
    cout << "静态变量s_b的地址是：" << &s_b << endl;*/

//堆区
/*    int *p = func();
    cout << *p << endl;
    cout << *p << endl;*/

//new
/*    test01();
    test02();*/

//引用
/*    //引用基本语法：   数据类型 &别名 = 原名;
    int a = 10;
    int &b = a;
    cout << a << endl;
    cout << b << endl;

    b = 20;
    cout << a << endl;
    cout << b << endl;*/

/*    //引用注意事项：引用必须初始化，初始化后不可以改变
    int a = 10;
//    int &b;//err，未初始化
    int &b = a;

    int c = 20;
//    int &b = c;//err，初始化后不允许改变
    b = c;//ok,这是赋值操作而不是更改引用
    */

//引用做函数参数：可以通过引用让形参修饰实参
/*    int a = 10;
    int b = 20;
    mySwap(a, b);//引用传参，不需要加&
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;*/

    //引用做函数返回值：1不要返回局部变量的引用
/*    int &ref = test01();
    cout << "ref= " << ref << endl;//虽然可以正常运行（编译器的功劳），但其实是非法的操作，因为局部变量已经被释放了*/

    //2函数的调用可以作为左值
/*    int &ref = test02();//ref是a的别名
    cout << "ref= " << ref << endl;

    test02() = 1000;//test02()的返回值是引用，可以作为左值。这里其实相当于操作a
    cout << "ref= " << ref << endl;*/

//引用本质
/*    int a = 10;
    int &ref = a;//自动转换为 int* const ref = &a;   可以看出引用是指针常量，不能修改指向，因此引用不可更改
    ref = 20;//发现ref是引用，自动转换为*ref = 20;
    cout << "a= " << a << endl;
    cout << "ref= " << ref << endl;
    func(a);*/

//常量引用
/*
//    int a = 10;
////    int& ref = 10;//err，引用必须因一块合法的内从空间，不能直接引字面常量
//    const int& ref = 10;//ok，自动转换为  int temp = 10;  const int& ref = temp;
//    ref = 20;//err,此时相当于const int* const ref,指向和内容都不能修改了

//    int a = 100;
//    showValue(a);
*/

    return 0;
}
