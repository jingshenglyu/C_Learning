// Main File

#include"point.h"
#include<iostream>
using namespace std;

int main()
{
    Point a(4, 5);  // define an obj. a, which constr. will add 1 on count
    cout << "Point A: " << a.getX() << ", " << a.getY() << endl;
    Point::showCount(); //output the number of obj.

    Point b(a); // define an obj. b, which constr. will add 1 on count
    cout << "Point B: " << a.getX() << ", " << a.getY() << endl;
    Point::showCount(); //output the number of obj.

    return 0;
}