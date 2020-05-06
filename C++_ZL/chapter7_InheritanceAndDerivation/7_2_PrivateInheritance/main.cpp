// 7.2 private inheritance

#include <iostream>
#include <cmath>
using namespace std;
#include "Rectangle.h"

int main() {
    Rectangle rect; //定义Rectangle类的对象
    rect.initRectangle(2, 3, 20, 10);   //设置矩形的数据
    rect.move(3,2); //移动矩形位置
    cout << "The data of rect(x,y,w,h): " << endl;
    cout << rect.getX() <<", "  //输出矩形的特征参数
        << rect.getY() << ", "
        << rect.getW() << ", "
        << rect.getH() << endl;
    return 0;
}