/*Scope and Visibility*/

#include<iostream>
using namespace std;

int i;  //global variable
namespace Ns
{
    int j;  //global var in Ns
}

int main()
{
    i = 5;  //assign global var i
    Ns::j = 6;  //assign Ns's var j
    {
        using namespace Ns; //direct use Ns in this part
        int i;
        i = 7;  //Ns's var, global var i is invalid
        cout << "i = " << i << endl;
        cout << "j = " << j << endl;
    }
    cout << "i = " << i << endl;

    return 0;
}