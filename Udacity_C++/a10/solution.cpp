

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-18 08:58:40
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-18 09:27:30
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a10/solution.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
//TODO: include the iostream and vector libraries
#include<iostream>
#include<vector>
//TODO: Use the standard namespace
using namespace std;

int main() {
    
    cout << "part1: " << endl;
    // Part 1: declare and define a vector with values
    //        {5.0, 5.0, 5.0} and print 
    //         the vector to the terminal using cout
    // Hint: the syntax vector<datatype> varname(length, value) might help
    vector<float> vector(3, 5.0);
    for(int i=0; i<vector.size(); i++){
        cout << vector[i] << endl;
    }

    // Part 2: Use push back to add the values 3.0, 2.5, 1.4 
    //      to the back of the vector
    //for(int i=0; i<vector.size(); i++){
    vector.push_back(3.0);
    vector.push_back(2.5);
    vector.push_back(1.4);
    //}

    cout << "part3: " << endl;
    // Part 3: Print out the vector again using cout
    for(int i=0; i<vector.size(); i++) {
        cout << vector[i] << endl;
    }
    
    // Part 4: Use the vector assign method to override the current vector. 
    // The overriden vector should have 3 elements with 
    // the values {5.0, 5.0, 5.0}

    // Part 5: Print out the vector
    cout << "part 4 and 5:" << endl;
    for(int i=0; i<vector.size(); i++) {
        vector.assign(3, 5.0);
        cout << vector[i] << endl;
    }


    return 0;
}