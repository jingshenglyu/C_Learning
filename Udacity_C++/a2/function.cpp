

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-17 07:26:38
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-17 07:47:33
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a2/function.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
// Write a function, called distance, with three inputs and one output. 
// The inputs are velocity, acceleration and time. 
// The output is the distance traveled over the elapsed time. 
// The equation for calculating distance is:
// distance = velocity × elapsedtime + 0.5 × acceleration × elapsedtime × elapsedtime
// This quiz is not graded. You will see some test cases in the main() function to test out your code.
// To run your code, click on the "Test Run" button.
// A solution has been provided in the function.cpp so that you can compare your results.



//TODO: include the iostream part of the standard library
#include<iostream>
//TODO: declare your function called distance
double distance(double velocity, double acceleration, double elapsedtime);
int distance(int velocity, int acceleration, int elapsedtime);
// Leave the main function as is
int main() {
    
    // TODO: The following are examples you can use to test your code.
    // You will need to uncomment them to get them working.
    
    std::cout << distance(3, 4, 5) << std::endl;  
    std::cout << distance(7.0, 2.1, 5.4) << std::endl;
    
    return 0;   
}

//TODO: define your function
double distance(double velocity, double acceleration, double elapsedtime){

    double l_double; // distance in double
    l_double = velocity * elapsedtime + 0.5 * acceleration * elapsedtime * elapsedtime;

    return l_double;
}

int distance(int velocity, int acceleration, int elapsedtime){

    int l_int; // distance in int
    l_int = velocity * elapsedtime + 0.5 * acceleration * elapsedtime * elapsedtime; 

    return l_int;
}
