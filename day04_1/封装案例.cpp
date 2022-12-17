/*
#include <iostream>

using namespace std;

//设计一个学生类，属性有姓名和学号，行为有给姓名和学号赋值和显示
class Student {
public:
    //类中的属性和行为统一称为成员：属性又称为成员属性或成员变量；行为又称为成员函数或成员方法
    //属性
    string mName;
    int mId;

    //行为
    void showStudent() {
        cout << "姓名：" << mName << "  学号：" << mId << endl;
    }

    //给属性赋值
    void setName(string name){
        mName = name;
    }

    void setId(int id){
        mId = id;
    }
};

int main() {
    Student s1;
    s1.mName = "zhangsan";
    s1.mId = 1;
    s1.showStudent();

    Student s2;
    s2.setName("lisi");
    s2.setId(2);
    s2.showStudent();

    return 0;
}
*/
