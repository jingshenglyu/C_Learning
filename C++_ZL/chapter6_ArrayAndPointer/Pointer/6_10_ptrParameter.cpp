// Pointer as the parameters for functions
/*Input a float number, and return the integer part and the fractional part*/

#include<iostream>
using namespace std;

void splitFloat(float x, int *intPart, float *fracPart)
{
    *intPart = static_cast<int>(x); //取出x的整数部分
    *fracPart = x - *intPart; //取出x的小数部分
}

int main()
{
    cout << "Input 3 float numbers: " << endl;
    for (int i = 0; i < 3; i++)
    {
        float x, f;
        int n;
        cin >> x;
        splitFloat(x, &n, &f);  //变量地址作实参
        cout << "Integer Part = " << n << " Fraction Part = " << f << endl; 
    }
    
    return 0;
}