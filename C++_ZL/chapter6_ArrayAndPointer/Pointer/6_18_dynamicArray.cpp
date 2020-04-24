// 6_18.cpp class of dynamic array

#include<iostream>
#include<cassert>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point():x(0), y(0)
    {
        cout << "Default Constructor called." << endl;
    }
    Point(int x, int y):x(x),y(y)
    {
        cout << "Constructor called." << endl;
    }
    ~Point(){ cout << "Destructor called." << endl;}

    int getX() const {return x;}
    int getY() const {return y;}
    void move (int newX, int newY)
    {
        x = newX;
        y = newY;
    }
};

class ArrayOfPoints //class of dynamic array 
{
private:
    Point *points; // point to the first address of dynamic array
    int size;   // size of array
public:
    ArrayOfPoints(int size):size(size)
    {
        points = new Point[size];
    }
    ~ArrayOfPoints()
    {
        cout << "Deleting ... " << endl;
        delete[] points;
    }
    Point& element(int index)
    {
        assert(index >= 0 && index < size);
        return points[index];
    }
};

int main()
{
    int count;
    cout << "Please enter the count of points: ";
    cin >> count;
    ArrayOfPoints points(count); // create object of array
    points.element(0).move(5, 0); //访问数组元素成员
    points.element(1).move(15, 20); //访问数组元素成员

    return 0;
}
