/* practice if
Input a year to judge if this year is leap year
*/

#include<iostream>
using namespace std;

int main()
{
    int year;
    bool isLeapYear;

    cout << "Enter a year: ";
    cin  >> year;

    isLeapYear = ((year % 4 == 0 && year % 100 != 0) || (year %  400 == 0));
    /*闰年： 4的倍数以及不能被100整除 &&(与) 400的倍数*/

    if(isLeapYear)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " isn't a leap year." << endl;
    
    }
    
    return 0;
}