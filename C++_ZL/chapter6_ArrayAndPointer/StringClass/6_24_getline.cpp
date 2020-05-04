// 6.24 geline.cpp

#include<iostream>
#include<string>
using namespace std;

int main()
{
    for (int i = 0; i < 2; i++)
    {
        string city, state;
        getline(cin, city, ',');    //输入字符串,以','作为分隔符,默认' '作为分隔符
        getline(cin, state);        
        cout << "City: " << city << " State: " << state << endl;
    }
    return 0;
    
}