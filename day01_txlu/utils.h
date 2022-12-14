//
// Created by B_White on 2022/12/14.
//
#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


#define MAX 1000

struct Contact {
    string name;
    string sex;
    int age;
    string num;
    string address;
};

extern int *plen;
extern struct Contact contactor[MAX];


void menu();
void add(int* plen, string name, string sex, int age, string num, string address);
void showAll();
void delByName(string name);
int searchByName(string name);
void modByName(string name,string mName,string mSex,int mAge,string mNum,string mAddress);
void clear();
