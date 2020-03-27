// 6.11 Pointer Function

#include<iostream>
using namespace std;

void printStuff(float)
{
    cout << "This is the print stuff function." << endl;
}

void printMessage(float data)
{
    cout << "This data to be listed is " << data << endl;
}

void printFloat(float data)
{
    cout << "This data to be printed is " << data << endl; 
}

const float PI = 3.14159f;
const float two_PI = PI * 2.0f;

// main function
int main()
{
    void (*functionPointer)(float); // pointer function(PF)
    printStuff(PI);                 // call printStuff function
    functionPointer = printStuff;   // PF point to printStuff
    functionPointer(PI);            // call PF
    functionPointer = printMessage; // PF point to printMessage
    functionPointer(two_PI);        // call PF
    functionPointer(13.0);          // call PF
    functionPointer = printFloat;   // PF point to printFloat
    functionPointer(PI);            // call PF
    printFloat(PI);                 // call printFloat function

    return 0;
}