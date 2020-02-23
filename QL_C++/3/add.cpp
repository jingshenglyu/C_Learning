/*
function declaration and call
E.g.
1. int Add(int x, int y);
2. void Swap(int x, int y);
3. void Compute();

Predicate Function: return bool DateType
E.g.
bool IsLeep(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

Function overload
E.g.

int Max(int x, int y);
char Max(char x, char y);
bool Max(bool x, bool y)

*/



#include<iostream>
using namespace std;

int Add(int x, int y);

int main()
{
    int a, b, sum;

    cout << "a: ";
    cin  >> a;
    cout << "b:" ;
    cin  >> b;
    sum = Add(a, b);
    cout << a << " + " << b << " = " << sum << endl;
    return 0;

}

int Add(int x, int y)
{
    int t;
    t = x + y;
    return t;
}


