/*Input tht width and the length, then calculate the area.*/

#include<iostream>
using namespace std;

class Rectangle
{
private:
    float length, width;
public:
    Rectangle(float l, float w);    //constructor
    ~Rectangle(){};     //destructor

    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }

    float getArea()
    {
        return length * width;
    }
};

Rectangle::Rectangle(float l, float w)
{
    length = l;
    width = w;
}

int main()
{
    float length, width;
    cout << "Please input the length: " << endl;
    cin  >> length;

    cout << "Please input the width: " << endl;
    cin  >> width;

    Rectangle r(length, width);
    cout << "The length is " << length << ". And the width is "
         << width << ". " << "The area is " << r.getArea() << endl;

    return 0; 
}
