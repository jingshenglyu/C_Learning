/*
The ball in the bag has 5 colors.[Red, Yellow, Blue, White, Black]
How many kinds of mays is it, if we wanna take 3 balls without the same color.
Please write a program. 
*/

#include<iostream>
using namespace std;

int main()
{
    enum color {red, yellow, blue, white, black};
    enum color pri;

    int n, loop, i, j, k;
    char c;
    n = 0;

    for(i=red; i<=black; i++)
        for(j=red; j<=black; j++)
            if (i!=j)
            {
                for(k=red; k<=black; k++)
                if((k!=i)&&(k!=j))
                {
                    n=n+1;
                    cout.width(4); //将当前字段宽度设为4
                    cout << n;

                    for(loop=1; loop<=3; loop++)
                    {
                        switch(loop)
                        {
                            case 1: pri=(enum color)i;break;
                            case 2: pri=(enum color)j;break;
                            case 3: pri=(enum color)k;break;
                            default: break;
                        }
                        switch(pri)
                        {
                            case red:    cout << "    red";    break;
                            case yellow: cout << " yellow"; break;
                            case blue:   cout << "   blue";   break;
                            case white:  cout << "  white";  break;
                            case black:  cout << "    red";    break;
                            default: break;
                        }
                    }
                    cout << endl;
                }

            }
            cout << "total: " << n << endl;
            
    return 0;
}