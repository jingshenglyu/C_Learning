/* Calculate the budget for swimming pool
1. Two circle
    Big circle(Fence): $35/m
    r(big - small): 3m
    Ring(Concrete): $20/m**2
    Small circle(swimming pool): Input a radius
Ref: [C++ Programming, ZL, P114, example 4.3] */

#include<iostream>
using namespace std;

const float PI = 3.141593;  //define PI
const float FENCE_PRICE = 35;
const float CONCRETE_PRICE = 20;

class Circle
{
private:
    float radius;   //circle radius for swimming pool
public:
    Circle(float r); //constructor
    float circumference();  //func for circum 
    float area();   //calculate the area for circle
};

// constructor
Circle::Circle(float r)
{
    radius = r; //r for swimming pool
}

// func for circum
float Circle::circumference()
{
    return 2 * PI * radius;
}

// func for area
float Circle::area()
{
    return PI * radius * radius;
}

// main func
int main()
{
    float radius;
    cout << "Input a radius of swimming pool:" << endl;
    cin  >> radius;
    Circle pool(radius);    //define the small circle edge(swimmingpool)
    Circle poolRim(radius + 3); // define the big circle edge(fence)

    // calculate the price of the fence, then output
    float fenceCost = poolRim.circumference() * FENCE_PRICE;
    cout << "Fencing Cost is $" << fenceCost << endl;

    // calculate the price of the ring, then output
    float concreteCost = (poolRim.area() - pool.area()) * CONCRETE_PRICE;
    cout << "Concrete Cost is $" << concreteCost << endl;

    return 0; 

}