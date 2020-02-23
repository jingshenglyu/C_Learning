/*
Please make a getPower function(x^y).And you should make 
a overloading funciton for data-type int and double.

1. int getPower(int x, int y);  //The data-type is int.
   If y is smaller als 0, it should return 0.

2. double getPower(double x, int y);    //The data-type is
   double.
*/

#include<iostream>
using namespace std;

int getPower(int x, int y);
double getPower(double x, double y);

int main()
{
    int iNumber, ipower;
    double dNumber, dpower;
    int iAnswer;
    double dAnswer;

    cout << "Please input an int base number: ";
    cin  >> iNumber;

    cout << "Please input a double base number: ";
    cin  >> dNumber;

    cout << "To what power?";
    cin  >> ipower;

    iAnswer = getPower(iNumber, ipower);
    dAnswer = getPower((double)iNumber, (double)ipower);

    cout << iNumber << " to the " << ipower <<"th power is " 
         << iAnswer << endl;
    cout << dNumber << " to the " << ipower <<"th power is " 
         << dAnswer << endl; 
    
    return 0;
}

int getPower(int x, int y)
{
    if(y == 1)
    {
        return x;
    }
    else if(y == 0)
    {
        return 1;
    }
    else if(y < 0)
    {
        return 0;
    }
    else
    {
        return(x * getPower(x, y - 1));
    }
    
}

double getPower(double x, double y)
{
    if(y == 1)
    {
        return x;
    }
    else if(y == 0)
    {
        return 1;
    }
    else if(y < 0)
    {
        return 1 / getPower(x, -y);
    }
    else
    {
        return(x * getPower(x, y-1));
    }
    
}