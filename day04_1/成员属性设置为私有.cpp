/*
#include <iostream>

using namespace std;

*/
/*      成员属性设置为私有优点：
 *          1可以自己控制读写权限
 *          2对于写可以检测数据的有效性
 *//*

class Person {
private:
    string mName;//可读可写
    int mAge;//只读
public:
    //给类外提供写姓名的接口
    void setName(string name) {
        mName = name;
    }

    //给类外提供读姓名的接口
    string getName() {
        return mName;
    }

    //给类外提供写年龄的接口
    void setAge(int age) {
        if(age<0 || age>200)//可以检测数据的有效性
            return ;
        else
            mAge = age;
    }

    //给类外提供读年龄的接口
    int getAge(){
        return mAge;
    }

};

int main() {
    Person p;
    p.setName("zhangsan");
    cout << "name= " << p.getName() << endl;

    p.setAge(10);
    cout << "age= " << p.getAge() << endl;


    return 0;
}
*/
