/*lifetime of object*/

#include<iostream>
using namespace std;

int i;  //global var and static lifetime

void other()
{
    /*a and b are static local var. It will be initialized,
    when the func will be entered. */
    static int a = 2;
    static int b;

    // c is local var. It has dynamic lifetime. 
    // The func is entered and initialized every time.
    int c = 10;
    a +=2;
    i += 32;
    c += 5;
    cout << "----OTHER----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    b = a;

}

int main()
{
    // a is static local var and has global lifetime, local visited.
    static int a;

    // b and c are local var and has dynamic lifetime.
    int b = -10;
    int c = 0;

    cout << "----MAIN----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;

    c += 8;
    other();
    cout << "----MAIN----" << endl;
    cout << "i: " << i << " a: " << a << " b: " << b << " c: " << c << endl;
    i += 10;
    other();

    return 0; 
}