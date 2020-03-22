// An array with many pointers

#include<iostream>
using namespace std;

int main()
{
    // Define 3 arrays with 1-dim
    int line1[] = {1, 0, 0};
    int line2[] = {0, 1, 0};
    int line3[] = {0, 0, 1};

    // Define a int pointer and init 
    // 定义指针数组,用数组名作为数组的首地址，初始化指针数组
    int *pLine[3] = {line1, line2, line3};
    cout << "This matrix is: " << endl;

    // Show this 2-dim matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << pLine[i][j] << " "; 
            // pLine为1-dim指针数组数组名，由3个指针构成
            // pLine[i]： 下标为i的这行的首地址，等同于数组名(数组名=首地址)
            // 那么现在我们就可以以(pLine[i])[j]的方式，构造这个2-dim指针数组了，并init
            // pLine[i]: 例如pLine[0]等价于line1，line1为数组名，那么pLine[1]也可等同于数组名
        }
        cout << endl; 
    }

    return 0; 
}