

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-18 15:38:09
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-18 21:53:04
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a12/solution.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
// Program your Own Matrix Function
// Practice coding matrices in C++. In this exercise, write a function that has 
// two integer matrices as inputs and then outputs the sum. Assume that the two 
// input matrices have the same size 
// (e.g. matrix one is 5x3 and matrix two is 5x3).

// You can find an implementation in the solution.cpp tab if you'd like to compare your solution.

// You can use the Test Run button to run your code.

// TODO: Write a function that receives two integer matrices and outputs
// the sum of the two matrices. Then in your main() function, input a few
// examples to check your solution. Output the results of your function to 
// cout. You could even write a separate function that prints an arbitrarily 
// sized matric to cout.
#include<iostream>
#include<vector>
using namespace std;

vector< vector<int> > sum_matrix(vector< vector<int> > x, vector< vector<int> > y);

int main() 
{
    vector<int> singlerow(3, 0);

    vector< vector<int> > matrix1(5, vector<int>(3, 2));
    vector< vector<int> > matrix2(5, vector<int>(3, 2));
    vector< vector<int> > result;

    // sum.size() = matrix1.size();
    // sum[0].size() = matrix1[0].size();

    result = sum_matrix(matrix1, matrix2);

    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

vector< vector<int> > sum_matrix(vector< vector<int> > x, vector< vector<int> > y)
{

    vector< vector<int> > sum(x.size(), vector<int>(x[0].size()));
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < x[0].size(); j++)
        {
            sum[i][j] = x[i][j] + y[i][j];
        }
    }

    return sum;
}