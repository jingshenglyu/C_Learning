// simple destructor
#include<iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int xx, int yy);
    ~Point(); //默认destructor
};

Point::Point(int xx, int yy)
{
    x = xx;
    y = yy;
}

Point::~Point()
{
}

int main()
{
    return 0;
}
