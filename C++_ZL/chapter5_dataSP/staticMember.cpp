/*static member of class*/

#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
    static int count; //static member, for revording the number of points
public:
    Point(int x=0, int y=0): x(x), y(y) //constructor
    {
        //accumulation of count
        count++;
    }
    Point(Point &p) //copy constructor
    {
        x = p.x;
        y = p.y;
        count++;
    }

    ~Point()    //destructor
    {
        count--;
    }

    int getX() {return x;}
    int getY() {return y;}

    void showCount()
    {
        cout << "   Object count = " << count << endl;
    }
};

//define and init static member, restriction using the name of class
int Point::count = 0;  

int main()
{
    Point a(4, 5);  
    //define an obj a, the constructor of a will be added 1.

    cout << "Point A: " << a.getX() << ", " << a.getY();
    a.showCount();  //output the number of obj

    Point b(a);
    cout << "Point B: " << b.getX() << ", " << b.getY();
    b.showCount();  //output the number of obj

    return 0;
}
