// Define a class for the clock

#include<iostream>
using namespace std;

class Clock     //define a class, that is Clock
{
    public:     //public data
        void setTime(int newH = 0, int newM = 0, int newS = 0);
        void showTime();
    
    private:
        int hour, minute, second;   //private data
};
/*****After the defination of class, it has a ";"*********/

// member function
void Clock::setTime(int newH, int newM, int newS)
{
    hour = newH;
    minute = newM;
    second = newS;
}

inline void Clock::showTime()
{
    cout << hour << " : " << minute << " : " << second << endl;
}

int main()
{
    Clock myClock; // define a object
    cout << "First time set and output:" << endl;
    myClock.setTime();  //set the time using default value
    myClock.showTime(); //show this time
    cout << "Second time set and output:" << endl;
    myClock.setTime(8,30,19); 
    myClock.showTime();

    return 0;
}