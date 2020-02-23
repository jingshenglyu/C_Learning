// Input 2 number and calculate the quadratic sum.

#include<iostream>
using namespace std;

int fun2(int m)
{
    return m * m;   // calculate the square of a number
}

int fun1(int x, int y)
{
    return fun2(x) + fun2(y);
    /*This fun1 call the fun2. So the fun2 must be declared before this fun1.*/
}

int main()
{
    int a, b;
    cout << "Please enter two integers(a and b): ";
    cin  >> a >> b;
    cout << "The sum of square of a and b: " << fun1(a,b) << endl;

    return 0;
}