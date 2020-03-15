// Point.h
#ifndef _POINT_H
#define _POINT_H

class Point
{
private:
    int x, y;
public:
    Point();                              // Constructor
    Point(int x, int y);                          // Copy Constructor
    ~Point();                             // Destructor

    void move(int newX, int newY);
    int getX() const {return x;}
    int getY() const {return y;}
    static void showCount();              // Static Function Member

};

#endif      // _POINT_H
