// pointer operation

#include<iostream>
using namespace std;

int main()
{
    // Define an array and init
    static int a[] = {1, 2, 3, 4};   

    // Define a pointer ptr and init with the array"a"
    int *ptr = a;

    // Show the pointer "*ptr" and the result of the pointer-operation
    cout << "*ptr = " << *ptr << endl;
    cout << "a[0] = " << a[0] << endl;
    cout << endl;

    cout << "*(ptr+1) = " << *(ptr+1) << endl;
    cout << "a[1] = " << a[1] << endl;
    cout << endl;

    cout << "*(ptr+2) = " << *(ptr+2) << endl;
    cout << "a[2] = " << a[2] << endl;
    cout << endl;

    cout << "*(ptr+3) = " << *(ptr+3) << endl;
    cout << "a[3] = " << a[3] << endl;
    cout << endl;

    return 0;
}