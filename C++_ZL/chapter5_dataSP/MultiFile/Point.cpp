// class Point Class File

#include"point.h"
#include<iostream>
using namespace std;

int Point::count = 0;   //Using class-name to init static data member

Point::Point(const Point &p) : x(p.x), y(p.y)   //cp constr.
{
    count ++;
}

void Point::showCount()
{
    cout << " Object count = " << count << endl;
}