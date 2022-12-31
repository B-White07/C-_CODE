/*
#include <iostream>
#include <fstream>

using namespace std;
*/
/*
 * 文件类型分为两种：
        1. 文本文件          文件以文本的ASCII码形式存储在计算机中
        2. 二进制文件        文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们


   操作文件的三大类:
        1. ofstream： 写操作
        2. ifstream： 读操作
        3. fstream ： 读写操作

 *//*


*/
/*
 * 5.1.1写文件
    写文件步骤如下：
        1. 包含头文件
             \#include <fstream\>
        2. 创建流对象
           ofstream ofs;
        3. 打开文件
           ofs.open("文件路径",打开方式);
        4. 写数据
           ofs << "写入的数据";
        5. 关闭文件
           ofs.close();

    文件打开方式：
        | 打开方式     | 解释                       |
        | ios::in     | 为读文件而打开文件           |
        | ios::out    | 为写文件而打开文件           |
        | ios::ate    | 初始位置：文件尾             |
        | ios::app    | 追加方式写文件               |
        | ios::trunc  | 如果文件存在先删除，再创建     |
        | ios::binary | 二进制方式                  |

    注意：文件打开方式可以配合使用，利用|操作符
        例如：用二进制方式写文件 ios::binary | ios:: out


        总结：
        * 文件操作必须包含头文件 fstream
        * 写文件可以利用 ofstream  ，或者fstream类
        * 打开文件时候需要指定操作文件的路径，以及打开方式
        * 利用<<可以向文件中写数据
        * 操作完毕，要关闭文件

 *//*

void test01() {
    //1. 包含头文件
    //2. 创建流对象
    ofstream ofs;
    //3. 打开文件
    ofs.open("/Users/b_white/CODE/Own/day09/test.txt", ios::out);
    //4. 写数据
    ofs << "zhangsan" << endl;
    ofs << "nan" << endl;
    ofs << "18" << endl;
    //5. 关闭文件
    ofs.close();
}


int main() {
    test01();
    return 0;
}*/
