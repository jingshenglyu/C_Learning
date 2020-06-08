/*
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-08 17:07:16
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-08 17:47:10
 * @FilePath: /C_Learning/Cpp_OJ/OJ1000/HDOJ_1000.cpp
 */ 
/*
Problem Description: Calculate A + B.
Input: Each line will contain two integers A and B. Process to end of file.
Output: For each case, output A + B in one line.

Sample Input
1 1
Sample Output
2
*/


#include<iostream>
using namespace std;

int main()
{
    int A, B;
    while(cin >> A >> B){
        cout << A+B << endl;
    }

    return 0;
}