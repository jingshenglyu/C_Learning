/* 1.2 calculate the principal and the interest
       1. The unit is RMB.
       2. We don't need the percent, only the float number. E.g. The interest is 2.52%. We need only 2.52.
       3. How can we output in FEN?
*/

#include<iostream>

using namespace std;

int main()
{
    double principal, interest ,percent, sum;
    percent = 100.0; 

    cout << "principal: ";
    cin  >> principal;

    cout << "interest: ";
    cin  >> interest;

    sum = principal + principal * interest / percent;
    cout << sum<<"="<<principal<<"+"<<principal<<"*"<<interest<<"/"<<percent<< endl;
    return 0;
}
