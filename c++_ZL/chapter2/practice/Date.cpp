/*
Declaration a struct.
Input year/month/day hour:minute:second
Output this date without the illegal number
*/

#include<iostream>
using namespace std;

struct MyTimeStruct
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
    
    unsigned int hour;
    unsigned int min;
    unsigned int sec;
};

int main()
{
    MyTimeStruct myTime = {2000, 1, 1, 0, 0, 0}; 
    /* initialize 结构体MyTimeStruct中的变量 */

    cout << "Please input the date(y/m/d h/m/s only number and Enter): ";
    cin  >> myTime.year>>myTime.month>>myTime.day 
         >> myTime.hour>>myTime.min>>myTime.sec;

    if((myTime.month > 0 && myTime.month < 13) && 
       (myTime.day   > 0 && myTime.day   < 32) &&
       (myTime.hour >= 0 && myTime.hour  < 25) &&
       (myTime.min  >= 0 && myTime.min   < 61) &&
       (myTime.sec  >= 0 && myTime.sec   < 61))
    {
    cout << "The time is set to : " << myTime.year  << "/"
                                    << myTime.month << "/"
                                    << myTime.day   << " "
                                    << myTime.hour  << ":"
                                    << myTime.min   << ":"
                                    << myTime.sec   << endl;
    }
    cout << "The input is wrong.";
    
    return 0;

}