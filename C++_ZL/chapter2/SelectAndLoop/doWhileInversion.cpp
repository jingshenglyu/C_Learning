// Output the inversion of a number
#include<iostream>

using namespace std;

int main() 
{
    int n, right_digit;
    cout << "Input a number: ";
    cin  >> n;

    cout << "The inversion of this number is ";
    do
    {
        right_digit = n % 10;
        cout << right_digit;
        n /= 10;
    } 
    while (n != 0 );
    {
    cout << endl;
    }

    return 0;

}