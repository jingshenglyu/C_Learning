//Line Class for Combination

#include<iostream>
#include<cmath>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int xx = 0, int yy = 0)   //constructor
    {
        x = xx;
        y = yy;
    }
    Point(Point &p);    //copy constructor
    int getX() {return x;}   //member func
    int getY() {return y;}
};

Point::Point(Point &p)  //define copy constructor
{
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor of Point" << endl;
}

//class combination
class Line
{
private:
    Point p1, p2;   //p1,p2: the object from class Point
    double len;
public:
    Line(Point xp1, Point xp2); //constructor
    Line(Line &l);      //copy constructor
    double getLen(){return len;}
};

//constructor of combination
Line::Line(Point xp1, Point xp2):p1(xp1), p2(xp2)
{
    cout << "Calling constructor of Line" << endl;
    double x = static_cast<double>(p1.getX() - p2.getX()); 
    /*forcing type conversion*/
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x * x + y * y);
}

//copy constructor of combination
Line::Line(Line &l):p1(l.p1), p2(l.p2)
{
    cout << "Calling the copy constructor of Line" << endl;
    len = l.len;
}

// main
int main()
{
    Point myp1(1,1), myp2(4,5);     //define a object of class Point
    Line line(myp1, myp2);          //define a object of class Line
    Line line2(line);               //create a new obj using cp constr
    cout << "The length of the line is:";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is:";
    cout << line2.getLen() << endl;

    return 0;
}