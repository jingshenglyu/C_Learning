

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-18 08:33:03
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-18 08:51:30
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a9/solution.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 

// TODO: Include the iostream and vector libraries
#include<iostream>
#include<vector>
// TODO: Use the standard namespace
using namespace std;
// TODO: Write a main function
int main() {
    vector<float> myvector(4);
    myvector[0] = 4.5;
    myvector[1] = 2.1;
    myvector[2] = 8.54;
    myvector[3] = 9.0;

    vector<float> vector(4, 3.5);

    cout << "myvector: " << endl;
    for (int i = 0; i < myvector.size(); i++) {
        cout << myvector[i] << endl;
    }
    
    cout << "vector: " << endl;
    for (int i = 0; i < vector.size(); i++) {
        cout << vector[i] << endl;
    }

    return 0;
}
// TODO: Inside the main function, do the following:
/***       
 * 1. declare a float vector with 4 elements 
 * 2. fill the float vector with the following values: 4.5, 2.1, 8.54, 9.0
 * 
 * 3. declare and define a float vector with one line of code. The float vector
 * should have four elements with the following values: 3.5, 3.5, 3.5, 3.5
 * 
 * NOTE: You cannot use the bracket syntax because
 * the classroom compiles your code with C++98. The bracket syntax was introduced 
 * in C++11.
 ***/