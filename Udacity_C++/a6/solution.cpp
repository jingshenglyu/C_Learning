

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-17 23:25:06
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-17 23:38:28
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a6/solution.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */ 
//TODO Practice writing switch statements
// Don't forget an include statement if you want to use std::cout
#include <iostream>

int main() {
    
    // TODO: write a program that outputs whether a vehicle is a motorcycle,
    // 2-door coupe, 4-door car or a 5-door mini-van. 
    // You should create a variable that holds the number of doors in the vehicle
    // A motorcycle would have doors = 0 for example. 
    // Then use a switch statement to output to the terminal the kind of vehicle
    // you have
    int doors = 4;
    switch (doors)
    {
    case 0: 
        std::cout << "motorcycle" << std::endl;
        break;
    case 2:
        std::cout << "2-door coupe" << std::endl;
        break;
    case 4:
        std::cout << "4-door car" << std::endl;
        break;
    case 5:
        std::cout << "5-door mini-van" << std::endl;
        break;
    default:
        break;
    }
    return 0;
}