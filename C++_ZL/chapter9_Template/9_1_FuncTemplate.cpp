/*
 * @Author: Jingsheng Lyu
 * @Date: 2020-05-19 21:43:19
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-21 08:35:54
 * @FilePath: /C_Learning/C++_ZL/chapter9_Template/9_1_FuncTemplate.cpp
 */ 
// 9.1 function template

#include<iostream>

using namespace std;

template<class T>   //define the function template

void outputArray(const T*array, int count)  
{
    for (int i=0; i < count; i++)
        cout << array[i] << " ";
    cout << endl;
}

int main()
{
    const int A_COUNT=8, B_COUNT=8, C_COUNT=20;
    int a [A_COUNT]={1, 2, 3, 4, 5, 6, 7, 8};                       //define int array
    double b [B_COUNT]={1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8};    //define double array
    char c[C_COUNT]="Welcome to see you!";                  //define char array

    cout << "a array contains: " << endl;                   //call the func. template
    outputArray(a, A_COUNT);

    cout << "b array contains: " << endl;                   //call the func. template
    outputArray(b, B_COUNT);

    cout << "c array contains: " << endl;                   //call the func. template
    outputArray(c, C_COUNT);

    return 0;
}
