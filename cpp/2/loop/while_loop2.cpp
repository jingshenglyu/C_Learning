/* while loop

   Question:
     Write a program, to calculate the sum of some number until the user input 0.*/

#include<iostream>
using namespace std;

int main()
{

    int n, sum = 0;
    cout << "The program gets some integers, and output their sum.\n";
    cout << "To stop, please input 0.\n";

// From here is different.

    while(true)
    {

        cout << "Please input an integer:";
        cin  >> n;
        if( n==0 )
            break;
        sum += n;

    }

    cout << "The sum is " << sum << "." << endl;
    return 0;

}
