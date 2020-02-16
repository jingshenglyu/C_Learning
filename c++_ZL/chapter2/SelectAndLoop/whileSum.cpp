// Calculate the sum of 0~10

#include<iostream>

using namespace std;

int main() 
{
    int i = 1, sum = 0;

    while (i<=10)
    {
        sum += i;
        i++;
    }

    cout << sum << endl;

    return 0;
    
}