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
    cout << "Please input an integer:";
    cin  >> n;
    
    while(n!=0)
    {
        sum += n; // 等价于sum = sum + n
        cout << "The sum is " << sum << "." << endl;
        return 0;
    }

}
