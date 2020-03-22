// 6.6 void pointer

#include<iostream>
using namespace std;

int main()
{
    // !void voidObj;   错误：不能声明void类型的变量
    void *pv;

    int i = 5;
    pv = &i;    //上面声明的void类型指针指向int变量
    int *pint = static_cast<int *>(pv); //强制类型转换：void指针 -> int指针

    cout << "*pint = " << *pint << endl;

    return 0;
}