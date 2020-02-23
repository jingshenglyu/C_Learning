// Fibonacci 
#include<iostream>
using namespace std;

int fib(int n);

int main()
{
    int n, answer;
    cout << "Please input a number: ";
    cin  >> n;
    cout << "\n\n";
    answer = fib(n);
    cout << answer << " is the" << n << "th Fibonacci number\n";

    return 0;
}

int fib(int n)
{
    cout << "Processing fib(" << n << ")...";
    if(n>2)
    {
        cout << "Call fib(" << n-2 << ")and fib(" << n-1 << ").\n";
        return(fib(n - 1) + fib(n - 2));
    }
    else
    {
        return(1);
    }
}
