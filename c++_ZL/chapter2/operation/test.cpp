#include<iostream>
using namespace std;
int main()
{
    int a;
    cout << (a = 0 || sizeof(int)) << endl;
    return 0;
}
