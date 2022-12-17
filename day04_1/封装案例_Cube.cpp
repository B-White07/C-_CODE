/*
#include <iostream>

using namespace std;

//设计立方体类，求出立方体的面积和体积，分别用全局函数和成员函数判断两个立方体是否相等
class Cube {
private:
    int mLength;
    int mWidth;
    int mHigh;
public:
    void setLength(int length) {
        mLength = length;
    }

    int getLength() {
        return mLength;
    }

    void setWidth(int width) {
        mWidth = width;
    }

    int getWidth() {
        return mWidth;
    }

    void setHigh(int high) {
        mHigh = high;
    }

    int getHigh() {
        return mHigh;
    }

    int getArea() {
        return 2 * (mHigh * mWidth + mHigh * mLength + mWidth * mLength);
    }

    int getVol() {
        return mLength * mWidth * mHigh;
    }

    bool isEqualByClass(Cube &cube){//需要对象调用这个函数，因此传递一个参数即可
        if (mHigh == cube.getHigh() && mLength == cube.getLength() && mWidth == cube.getWidth())
            return 1;
        return 0;
    }

};

bool isEqual(Cube &c1, Cube &c2) {//用引用是为了不产生临时的数据
    if (c1.getHigh() == c2.getHigh() && c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth())
        return 1;
    return 0;
}

int main() {

    Cube cube;
    cube.setHigh(10);
    cube.setWidth(10);
    cube.setLength(10);

    cout << "面积是：" << cube.getArea() << endl;
    cout << "体积是：" << cube.getVol() << endl;

    Cube cube1;
    cube1.setLength(10);
    cube1.setWidth(10);
    cube1.setHigh(10);

    //通过全局函数判断是否相等
    if(isEqual(cube,cube1))
        cout<<"全局函数判断：相同的立方体"<<endl;
    else
        cout<<"全局函数判断：不同的立方体"<<endl;

    //通过成员函数判断是否相等
    if(cube.isEqualByClass(cube1))
        cout<<"成员函数判断：相同的立方体"<<endl;
    else
        cout<<"成员函数判断：不同的立方体"<<endl;


    return 0;
}
*/
