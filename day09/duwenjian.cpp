/*
#include <iostream>
#include <fstream>

using namespace std;

*/
/*
 * 读文件步骤如下：

 *//*

void test() {
    //1. 包含头文件

//    2. 创建流对象
    ifstream ifs;

//    3. 打开文件并判断文件是否打开成功
    ifs.open("test.txt", ios::in);
    //is_open()打开成功返回1
    if (!ifs.is_open()) {
        cout << "打开文件失败！" << endl;
        return;
    }

//    4. 读数据：四种方式读取
//  第一种
*/
/*    char buf[1024] = {0};
    while (ifs >> buf)
        cout << buf << endl;*//*


//第二种
*/
/*    char buf[1024] = {0};
    while (ifs.getline(buf,sizeof(buf)))
        cout << buf << endl;*//*


//第三种
*/
/*    string buf;
    while(getline(ifs,buf))
        cout << buf << endl;*//*


//第四种
    char c;
    while ((c = ifs.get()) != EOF)//end od file
        cout << c;

//    5. 关闭文件
    ifs.close();

}

int main() {
    test();
    return 0;
}
*/
