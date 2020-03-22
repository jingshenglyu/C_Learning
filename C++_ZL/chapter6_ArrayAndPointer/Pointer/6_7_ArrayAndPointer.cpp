/*  访问数组元素：
    1. 使用数组名和下标
    2. 使用数组名和指针
    3. 使用指针变量
*/

#include<iostream>
using namespace std;

int main()
{   
    // Define an array
    static int a[] = {0,1,2,3,4,5,6,7,8,9};

    // 1. Traverse this array using a[i]
    for (int i = 0; i <= a[9]; i++)
    {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    // 2. Traverse this array using *(a+i)
    for (int i = 0; i <= a[9]; i++)
    {
        cout << "*(a+" << i << ") = " << *(a+i) << endl;
    }

    // 3. Traverse this array using pointer
    for (int *p = a; p < (a+10); p++)
    {
        cout << *p << " ";
    }
    cout << endl;

    return 0;
    
    

    
}