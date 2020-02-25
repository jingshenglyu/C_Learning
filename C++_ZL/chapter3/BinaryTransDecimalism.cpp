/*Design a function:
 *To transfer the binary number to decimalism
 * */

#include<iostream>
using namespace std;

double power(double x, int n); //declaration of the function

int main()
{
    int value = 0;
    cout << "Enter an 8 bit binary number: ";
    for(int i=7; i>=0; i--)
    {
        char ch;
        cin >> ch;
        if(ch=='1')
            value += static_cast<int>(power(2,i));
        /* static_cast<type-id>(expression)
         * 该运算符将expression(表达)转换为type-id类型
        */
    }


    cout << "Decimal value is " << value << endl;
    return 0;
}

double power(double x, int n)
{
    double val =1.0;
    while(n--)
        val *= x;
    return val;
}








