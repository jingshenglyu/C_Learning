// Input a number to judge if this number is a prime.

#include<iostream>
#include<cmath>
using namespace std;

int isPrime(int i);

int main()
{
    int i;  //init 
    cout << "Please input a number: ";
    cin  >> i;

    if(isPrime(i))
    {
        cout << i << " is a prime." << endl;
    }
    else
    {
        cout << i << " isn't a prime.\n";
    }
    
    return 0;
}

int isPrime(int i)
{
    int j, k, flag;
    flag = 1;
    k = sqrt(i);

    for ( j = 2; j <= k; j++)
    {
        if (i % k == 0)
        {
            flag = 0;
            break;
        }

    }
    return flag;
}