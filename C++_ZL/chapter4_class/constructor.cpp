// Clcok -- Constructor for init
#include<iostream>
using namespace std;

class Clock
{

private:
    int hour, minute, second;
public:
    Clock(int newH, int newM, int newS); //自定义构造函数
    Clock();    //默认构造函数，自定义构造函数的overloading func
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();

};

//时钟类成员函数的具体实现
Clock::Clock(): hour(0), minute(0), second(0) {} //默认构造函数

Clock::Clock(int newH, int newM, int newS): 
            hour(newH), minute(newM), second(newS){} //自定义构造函数

void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime()
{
    cout << hour << " : " << minute << " : " << second << endl;
}

int main()
{
    Clock c(8, 10, 0); //自动调用自定义构造函数
    Clock c2;          //调用默认构造函数
    c.showTime();
    c2.showTime();
    return 0;
}
