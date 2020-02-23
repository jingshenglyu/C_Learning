// Calculate the divisor of the input number
#include<iostream>

using namespace std;

int main() 
{
    int n;

    cout << "Input a number: ";
    cin  >> n;

    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }

    }
    cout << endl;
    return 0;
}
