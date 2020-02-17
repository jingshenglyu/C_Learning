/*
求圆形，长方形，正方形面积，先输入类型
圆形：输入半径，
长方形： 输入长和宽
正方形：输入边长
输出：面积
*/

#include<iostream>
using namespace std;

int main()
{
    double pi = 3.14, r, a, b, l;
    //enum Type {CIR, REC, SQU};
    int Type;

    cout << "Please input a number(0=CIR, 1=REC, 2=SQU): ";
    cin  >> Type; 

    switch (Type)
    {
    case 0: 
    cout << "This is a circle." << endl; 
    cout << "Please input the radius[cm]:";
    cin  >> r;
    cout << "The area is " << 0.5 * pi * r * r << " cm^2.";
    break;

    case 1: 
    cout << "This is a rectangle." << endl; 
    cout << "Please input the length and the width[cm]:";
    cin  >> a >> b;
    cout << "The area is " << a * b << " cm^2.";
    break;

    case 2:  
    cout << "This is a square." << endl; 
    cout << "Please input the length[cm]: ";
    cin  >> l;
    cout << "The area is " << l * l << " cm^2.";    
    break;
    default:cout << "Input error"; break;
    }
    cout << endl;

    return 0;
    
}