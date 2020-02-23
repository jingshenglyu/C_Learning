//Temperatur Convert
#include<iostream>
using namespace std;

float Convert(float F)
{
    float C;

    C = (F - 32) * 5 / 9;

    return C;
}

int main()
{
    float F;

    cout << "Please input the temperatur in fahrenheit: ";
    cin  >> F;

    cout << "Conver the temperatur in celsius: ";
    cout << Convert(F) << endl;

    return 0;
}