// 6_5 

#include<iostream>
using namespace std;

int main()
{
    int i;
    int *ptr = &i;  //取出i的地址付给ptr

    i = 10;
    cout << "i = " << i << endl;    //输出int型的值
    cout << "*ptr = " << *ptr << endl;  //输出int型指针所指的地址
    
    return 0;

}