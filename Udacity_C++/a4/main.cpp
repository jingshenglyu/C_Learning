

/*
 * @Author       : Jingsheng Lyu
 * @Date         : 2020-07-17 22:22:25
 * @LastEditors  : Jingsheng Lyu
 * @LastEditTime : 2020-07-17 22:42:13
 * @FilePath     : /undefined/home/jingsheng/C_Learning/Udacity_C++/a4/main.cpp
 * @Github       : https://github.com/jingshenglyu
 * @Web          : https://jingshenglyu.github.io/
 * @E-Mail       : jingshenglyu@gmail.com
 */
#include <iostream>

int main()
{

    /* 
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
    int x = -2;
    if (x > 0)
    {
        std::cout << "positive" << std::endl;
    }
    else if (x < 0)
    {
        std::cout << "negative" << std::endl;
    }
    else
    {
        std::cout << "zero" << std::endl;
    }

    char status, a, b, p, n; // a:acceleration, b:braking, p:parked, n;neutral
    if (status == 'a')
    {
        std::cout << "acceleration" << std::endl;
    }
    else if (status == 'b')
    {
        std::cout << "braking" << std::endl;
    }
    else if (status == 'p')
    {
        std::cout << "parked" << std::endl;
    }
    else if (status == 'n')
    {
        std::cout << "neutral" << std::endl;
    }
    else
    {
        std::out << "unknown" << std::endl;
    }
    

    return 0;
}
