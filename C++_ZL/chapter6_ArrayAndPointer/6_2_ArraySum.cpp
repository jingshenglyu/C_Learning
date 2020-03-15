// 6_2 Calculate the sum of an array.

#include<iostream>
using namespace std;

// Define an array, that is n row and 4 line.
void rowSum(int a[][4], int nRow) // Calculate the sum of the 2-dim array's row 
{
    for (int i = 0; i < nRow; i++)  
    {
        for (int j = 1; j < 4; j++)
        {
            a[i][0] += a[i][j];
        }
    }
}

int main()
{
    int table[3][4] = { {1,2,3,4}, {2,3,4,5}, {3,4,5,6} };  // Init an array
    for (int i = 0; i < 3; i++) // Output the elements of this array
    {
        for (int j = 0; j < 4; j++)
        {
            cout << table[i][j] << " ";
        }
        cout << endl;
    }
    rowSum(table, 3);
    /*用数组名作实参，其实就是将主函数定义的数组的首地址，传给了定义函数*/
    for (int i = 0; i < 3; i++)
    {
        cout << "Sum of row " << i << " is " << table[i][0] << endl;
    }
    
    return 0;
}