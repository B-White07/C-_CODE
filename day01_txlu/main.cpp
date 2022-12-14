#include "utils.h"


int main() {
    int order = -1;
    do {
        menu();
        cout << "请选择：" << endl;
        cin >> order;
        switch (order) {
            case 1: {
                string name;
                string sex;
                int age;
                string num;
                string address;
                cout << "姓名：" << endl;
                cin >> name;
                cout << "性别：" << endl;
                cin >> sex;
                cout << "年龄：" << endl;
                cin >> age;
                cout << "联系电话：" << endl;
                cin >> num;
                cout << "家庭住址：" << endl;
                cin >> address;

                add(plen, name, sex, age, num, address);
                cout << "添加成功！" << endl;
                break;
            }

            case 2:
//                system("clear");
                if ((*plen) == 0) {
                    cout << "通讯录是空的！" << endl;
                } else {
                    showAll();
                }

                break;

            case 3: {
                string name;
                cout << "想删谁？" << endl;
                cin >> name;
                if (-1 == searchByName(name))
                    cout << "查无此人！" << endl;
                else{
                    delByName(name);
                    cout << "删除成功！" << endl;
                }
                break;
            }

            case 4: {
                string name;
                cout << "想找谁？" << endl;
                cin >> name;
                if (-1 == searchByName(name))
                    cout << "查无此人！" << endl;
                else {
                    cout << "姓名：" << contactor[searchByName(name)].name << "\t"
                         << "性别：" << contactor[searchByName(name)].sex << "\t"
                         << "年龄：" << contactor[searchByName(name)].age << "\t"
                         << "联系电话：" << contactor[searchByName(name)].num << "\t"
                         << "家庭住址：" << contactor[searchByName(name)].address << endl;
                }
                break;
            }

            case 5:
            {
                string name,mName,mSex,mNum,mAddress;
                int mAge;
                cout << "想改谁？" << endl;
                cin >> name;
                cout << "姓名：" << endl;
                cin >> mName;
                cout << "性别：" << endl;
                cin >> mSex;
                cout << "年龄：" << endl;
                cin >> mAge;
                cout << "联系电话：" << endl;
                cin >> mNum;
                cout << "家庭住址：" << endl;
                cin >> mAddress;
                if (-1 == searchByName(name))
                    cout << "查无此人！" << endl;
                else{
                    modByName(name,mName,mSex,mAge,mNum,mAddress);
                    cout << "修改成功！" << endl;
                }
                break;
            }

            case 6:
                clear();
                cout << "已清空联系人！" << endl;
                break;

            default :
                cout << "下次再来" << endl;
                break;
        }
    } while (order);
    return 0;
}
