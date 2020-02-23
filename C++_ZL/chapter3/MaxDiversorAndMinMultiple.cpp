/*
Input two number,
then find the max Diversor and the min multiple
*/

#include<iostream>
#include<cmath>
using namespace std;

int findFunc(int i, int j);

int main()
{
    int i, j, x, y; //init
    cout << "Please input two number:";
    cin  >> i >> j;

    x = findFunc(i, j);
    y = i * j / x;
    
    cout << "The max common diversor is " << x << endl;
    cout << "The min common multiple is " << y << endl;

    return 0;

}

int findFunc(int i, int j)
{
    int temp;
    if(i < j)
    {
        temp = i;
        i = j;
        j = temp;
    }

    while (j != 0)
    {
        temp = i % j;
        i = j;
        j = temp;
    }

    return i;
    
}