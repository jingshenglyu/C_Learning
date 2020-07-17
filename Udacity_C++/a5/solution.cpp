

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-17 23:08:23
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-17 23:25:35
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a5/solution.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
#include <iostream>

int main() {
    
    //TODO: Use this as a playground to write a for loop and if statements
    // in the same program.
    
    // For example, write a for loop that iterates from 0 to 80.
    // If the iterator is greater than or equal to 0 but less than 10, 
    //      output the phrase 'slow'
    // If the iterator is between 10 inclusive
    //      and less than 30, output the phrase 'medium'
    // If the iterator is between 30 inclusive and 70, output the phrase 'fast'
    // If the iterator is greater than 70 inclusive, output the phrase 'too fast'
    int max = 80;
    for (int i = 0; i <= max; i++)
    {
        if (i < 10)
        {
            std::cout << "slow" << std::endl;
        } 
        else if (i >= 10 && i < 30)
        {
            std::cout << "medium" << std::endl;
        }
        else if (i >= 30 && i < 70)
        {
            std::cout << "fast" << std::endl;
        }
        else if(i >= 70)
        {
            std::cout << "too fast" << std::endl;
        }
    }
    
    return 0;
}