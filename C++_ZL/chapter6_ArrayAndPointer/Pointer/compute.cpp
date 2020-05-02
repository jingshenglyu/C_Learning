#include<iostream>
using namespace std;

int compute(int a, int b, int(*func)(int, int))
{
    return func(a,b);
}


int max(int a, int b) // find max
{ return ((a>b)?a:b);}

int min(int a, int b) // find min
{ return ((a<b)?a:b);}

int sum(int a, int b) // calculate sum
{ return(a+b);}

int main()
{
    int a, b, res;
    cout << "Please input an integer a: " ; cin >> a;
    cout << "Please input an integer b: " ; cin >> b;

    res = compute(a, b, &max);
    cout << "Max of " << a << "and " << b << "is " << res << endl;

    res = compute(a, b, &min);
    cout << "Min of " << a << "and " << b << "is " << res << endl;

    res = compute(a, b, &sum);
    cout << "Sum of " << a << "and " << b << "is " << res << endl;
}