//
// Created by B_White on 2022/12/14.
//
#include "utils.h"


Contact contactor[MAX];
int len = 0;
int *plen = &len;

void menu() {
    cout << "***********************" << endl;
    cout << "****  1.添加联系人  ****" << endl;
    cout << "****  2.显示联系人  ****" << endl;
    cout << "****  3.删除联系人  ****" << endl;
    cout << "****  4.查找联系人  ****" << endl;
    cout << "****  5.修改联系人  ****" << endl;
    cout << "****  6.清空联系人  ****" << endl;
    cout << "****  0.退出通讯录  ****" << endl;
    cout << "***********************" << endl;
}

void add(int *plen, string name, string sex, int age, string num, string address) {
    if (*plen == MAX) {
        cout << "通讯录已满,添加失败!" << endl;
        return;
    }
    Contact con = {name, sex, age, num, address};
    contactor[(*plen)++] = con;
}

void showAll() {
    for (int i = 0; i < len; i++) {
        cout << "姓名：" << contactor[i].name << "\t" << "性别：" << contactor[i].sex << "\t" << "年龄：" << contactor[i].age
             << "\t"
             << "联系电话：" << contactor[i].num << "\t" << "家庭住址：" << contactor[i].address << endl;
    }
}

int searchByName(string name) {
    for (int i = 0; i < len; i++) {
        if (name == contactor[i].name) {
            return i;
        }
    }
    return -1;
}

void delByName(string name) {
    int index = searchByName(name);
    if (-1 == index) {
        cout << "查无此人！" << endl;
    } else {
        for (int i = index; i < len - 1; i++) {
            contactor[i] = contactor[i + 1];
        }
    }
    (*plen)--;
}


void modByName(string name, string mName, string mSex, int mAge, string mNum, string mAddress) {
    int index = searchByName(name);
    if (-1 == index) {
        cout << "查无此人！" << endl;
    } else {
        contactor[index].name = mName;
        contactor[index].sex = mSex;
        contactor[index].age = mAge;
        contactor[index].num = mNum;
        contactor[index].address = mAddress;
    }
}

void clear() {
    len = 0;
}
