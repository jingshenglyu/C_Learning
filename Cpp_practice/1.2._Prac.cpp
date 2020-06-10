/*
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-09 15:36:58
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-09 16:49:24
 * @FilePath: /C_Learning/Cpp/test.cpp
 */
#include <iostream>
#include <string>

int main()
{
    // input the name
    std::cout << "Please enter your name: ";
    // read the name
    std::string name; // define a name with 'String'
    std::cin >> name; // read this name

    // build the message that we want to output
    const std::string greeting = "Hello, " + name + "!";

    // build the second and fourth lines of the output
    const std::string spaces(greeting.size(), ' ');
    const std::string second = "* " + spaces + " *";

    // build the first and fifth lines of the output
    std::string first(second.size(), '*');

    // output
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " << greeting << " *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first << std::endl;

    return 0;
}

