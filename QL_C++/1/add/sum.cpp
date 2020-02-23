#include <iostream>

using namespace std;

int main()
{
    int a, b, sum;

    cout << "a: ";
    cin  >> a;
    cout << "b: ";
    cin  >> b;

    sum  = a + b;
    cout << a << " + " << b << " = " << sum << endl;
    // end line终止行，流入sum，流入=，流入b,流入+，流入a，输出cout
    return 0;

}
