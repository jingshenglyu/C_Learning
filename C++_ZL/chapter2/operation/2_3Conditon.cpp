#include<iostream>
using namespace std;

int main()
{

    int a, b, x;
    cout << "input value of a: \n";
    cin  >> a;

    cout << "input value of b: \n";
    cin  >> b;

    // condition
    x = (a-b) > 0 ? (a-b) : (b-a); 
    /*先判断(a-b)是否大于0,若为1，则输出(a-b),否则输出(b-a)*/

    cout << "The difference of a and b is:\t\t" << x;
    return 0;
}