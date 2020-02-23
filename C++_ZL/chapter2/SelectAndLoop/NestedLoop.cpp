/* Output this design:
                   *
                 ***
               *****
             *******
             *****
             ***
             *
*/
#include<iostream>

using namespace std;

int main() 
{
    const int N = 4;

    for(int i = 1; i <= N; i++) // 输出前4行
    {
        for (int j = 1; j <= 5; j++)
            cout << ' ';
        for (int j = 1; j <= 8 - 2 * i; j++) 
            cout << ' ';
        for (int j = 1; j <= 2 * i - 1; j++) 
            cout << '*';
            cout << endl;
    }

    for (int i = 1; i <= N-1; i++) //输出后3行
    {
        for (int j = 1; j <= 5; j++)
        // 左侧空5行
        {
            cout << ' ';
        }
        for (int j = 1; j <= 7 - 2*i; j++) 
        // 5行（此forLoop的第1行）.输出5个*
        // 6行（此forLoop的第2行）.输出3个*
        // 7行（此forLoop的第3行）.输出1个*
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
    
}