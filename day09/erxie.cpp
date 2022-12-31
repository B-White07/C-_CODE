#include <iostream>
#include <fstream>

using namespace std;

/*
 * 二进制方式读文件主要利用流对象调用成员函数read
    函数原型：istream& read(char *buffer,int len);
    参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
 */

class Person {
public:
    char m_Name[64];
    int m_Age;
};

void test() {
    //2创建流对象
    ifstream ifs;

    //3打开文件，并判断文件是否打开成功
    ifs.open("/Users/b_white/CODE/Own/day09/person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "打开文件失败" << endl;
        return;
    }

    Person p;
    //4读文件
    ifs.read((char *) &p, sizeof(p));
    cout << p.m_Name << endl;
    cout << p.m_Age << endl;

//    5关闭文件
    ifs.close();

}

int main() {
    test();

    return 0;
}