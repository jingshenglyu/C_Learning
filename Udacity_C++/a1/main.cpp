

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-16 23:42:36
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-16 23:50:32
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/main.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
#include <iostream>

int main() {
    
    // TODO: define two floating point numbers. Assign 12.07 to the
    // first floating point number. Assign 65.102 to the 
    // second floating point number.
    float number1, number2;
    number1 = 12.07;
    number2 = 65.102;
    
    
    // TODO: Calculate the sum of the two floating point variables into
    // the float_sum variable.
    
    float float_sum; 
    float_sum = number1 + number2;
    std::cout << float_sum << std::endl;

    // TODO: Calculate difference between the second and first number
    // output the results to cout. 
    float float_difference;
    float_difference = number2 - number1;
    
    // TODO: Calculate second_float / first_float and output the results
    // to cout.
    float float_divide;
    float_divide = number2 / number1;
    
    // TODO: Calculate the product of the two numbers and output the results
    // to cout.
    float float_product;
    float_product = number1 * number2;

    return 0;
}