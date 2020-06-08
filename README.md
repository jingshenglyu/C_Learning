<!--
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-08 17:23:44
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-08 20:32:57
 * @FilePath: /C_Learning/Cpp/README.md
--> 

<!-- TOC -->

- [CH0 Beginning to C++](#ch0-beginning-to-c)
    - [0.0 Example: Hello World](#00-example-hello-world)
    - [0.1 Comments](#01-comments)
    - [0.2 #include](#02-include)
    - [0.3 main function](#03-main-function)
    - [0.4 {} Curly braces](#04--curly-braces)
    - [0.5 Output using the standard library](#05-output-using-the-standard-library)
    - [0.6 Return](#06-return)
    - [0.7 Deeper look](#07-deeper-look)
    - [Summary for CH0](#summary-for-ch0)
- [CH1](#ch1)
- [CH2](#ch2)
- [Reference](#reference)

<!-- /TOC -->

<font face="Arial">

# CH0 Beginning to C++

## 0.0 Example: Hello World

```
#include<iostream>

int main()
{
    std::cout << "Hello, world!" << std::endl;
    
    return 0;
}
```
## 0.1 Comments
* Comments with **//** for one line
* Comments with <b>/* */</b> for many lines

## 0.2 #include
* #include directives: ask for **standard-library**
* \<iostream\>: **standard header**

## 0.3 main function
computer scientist --request--> .cpp  
.cpp --call--> main function to response  
* * We will learn the arguments of the main function in [CH10.4]().  

## 0.4 {} Curly braces
In C++， braces tell the implementation to treat whatever appears between "{" and "}" as a **<em>unit</em>**.

## 0.5 Output using the standard library
`std::cout << "Hello World!" << std::endl;`  
This statement use the standard library's output operator **"<<"** to write `Hello World!` on the standard output, and the to write the value of `std::endl`.  
* std::endl standard output stream

## 0.6 Return 

pass the value: It appears between `return` and the semicolon`;`. Its type is the same as the `function`. 

## 0.7 Deeper look

1. `std::cout << "Hello, world!" << std::endl;`: **expression**. An expression asks the implementation to compute something and the computation yields a **result**.

2. `std::cout`, `"Hello, world!"` and `std::endl`: **operands**.The **operands** are variables or constants adjacent to the operator.

3. `<<`: **operators**. An **operator** is a symbol that tells the compiler to perform a specific mathematical or logical operation.

4. `std::endl`: **manipulator**. Its action is to end the current line of output.

5. `::`: **scope operator**. The **scope** of a name is the part of a program in which that we have seen in this program.

## Summary for CH0
1. Program structure: C++ programs are usually in **free form**. But it should have easier **readability** for other programmers. We can use **spaces** to improve the code readability.
* 1.1. `"string"`: **Don't** span line
* 1.2. `#include <>`: Appear on **a line** (except for comments)
* 1.3. `//comments`: free for **a line**.   `/*comments*/`: free for **span** lines
2. Types: Define **data structures** and operations on those data structures.
3. Namespaces: A mechanism for **grouping related names**
4. String literals: Detail in [CH10.4](). Each string literal **must** appear entirely on **one line** of the program.
5. Definitions and headers: The **standard library** defines its names in **headers**.
6. The main function: Every C++ program **must** define **only one** main function and return a result.
7. Braces and semicolon: The statements between a pair of matching braces constitute a scope. An **expression** followed by a semicolon is a statement, called an **statement**.
8. Output: pass a value.








# CH1

# CH2


















# Reference
1. Jianfeng Qin, Xiaojiang Ke, Tu Lan: Accelerated C++, Practical Programming by Example in Chinese. [PDF](https://github.com/liulinbo/slam/blob/master/Accelerated%20C%2B%2B%E4%B8%AD%E6%96%87%E7%89%88.pdf)
2. Andrew Koening Barbara E. Moo: Accelerated C++, Practical Programming by Example in English.[PDF](https://www.pdfdrive.com/accelerated-c-andrew-koenig-barbara-e-moopdf-e37303819.html)