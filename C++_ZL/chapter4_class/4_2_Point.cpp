/* 4_2 Copy Constructor*/
#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int xx = 0, int yy =0)  //constructor
    {
        x = xx; // xx and yy are parameter
        y = yy;
    }
    Point(const Point &p);    //copy constructor
    /*复制构造函数declaration
    用 类名(const 类名 &对象名) 方式，来声明copy constructor 
    使用const,表示&p引用时，不希望更改形参对象 */

    int getX()      
    {
        return x;
    }

    int getY()
    {
        return y;
    }

    // ~Point();   //desstructor
};

// function member(复制构造函数的实现)
Point::Point(const Point &p)    /* 用类名::类(const 类名 &对象名) 
                                   来表示复制构造函数的实现 */
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

// the function, which parameters are the object of the class 
// 形参为Point类对象的函数
void fun1(Point p)
{
    cout << p.getX() << endl;
}

// 返回值为Point类对象的函数
Point fun2()
{
    Point a(1, 2);
    return a;
}

int main()
{
    Point a(4,5);   //定义第一个对象a
    Point b(a);    //情况一：用a初始化b。第一次调用复制构造函数
    cout << b.getX() << endl;

    fun1(b);        //情况二：对象b作为fun1的实参。第二次调用构造函数
    b = fun2();     //情况三：函数的返回值是类的对象，函数返回时，调用复制构造函数
    cout << b.getX() << endl;
    return 0;

}