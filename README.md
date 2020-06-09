<!--
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-08 17:23:44
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-09 20:54:31
 * @FilePath: /C_Learning/README.md
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
- [CH1 Working with strings](#ch1-working-with-strings)
    - [1.1 Input](#11-input)
    - [1.2 Framing a name](#12-framing-a-name)
    - [Summary for CH1](#summary-for-ch1)
- [CH2 Looping and counting](#ch2-looping-and-counting)
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

# CH1 Working with strings
## 1.1 Input
```
#include<iostream>
#include<string>

int main()
{
    //input the name
    std::cout << "Please enter your name: ";
    // read the name
    std::string name;   //define a name with 'String'
    std::cin >> name;   //read this name

    //output the reagrd for this person
    std::cout << "Hello, " << name << "!" << std::endl;
    
    return 0;
}
```
* Variable: If we want to **read input**, we must have a place to put it. This place is called a **variable**. A variable is an **object** that has a name.
* Object: A **object** is a part of the computer's memory that has a type.
* Defiition: `std::string name;`. This expression define a variable `name`, its type is `std::string`. Because it appears in the function's body. It`name` is a **local variable**. It exists **only** while the part of the program within **the braces** is executing.   
  *  The **limited lifetime** of *local variable* is one reason that it is importtant to distinguish between **variables** and **objects**.

* Interface: The **collection of operations** are interface. 

* Date flow: In general, the input-output library saves its output in an internal data structure called **a buffer**, which it uses to optimize output operations.

## 1.2 Framing a name
* **' '** and **" "**: We must know when should we use **quotation mark**.
    * **' '**: for **single** string
    * **" "**: for **character string**
```
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
```
* Assignment: We use `=` to assign the value to the variable.

* `const std::string greeting = "Hello, " + name + "!";`  
    * **Overload**: In this expression, we use `+` to **concatenate** a string and a string literal([CH10]()). This **operator** is different as this **+** operator(`3 + 4`). We say that the operator is **overloaded**.

    * **const**: When we write `const` before this expression, we **aren't** going to **change the value** of the variable for *the rest of its lifetime*.

* `const std::string spaces(greeting.size(), ' ');`  
    * In this case we tell the implementation to **construct** the variable. We can also use `=` to build a variable(`greeting = "Hello, " + name + "!"`). It depends on its **type** how a variable is constructed. 
    * `greeting.size()` is a **member function**. The object named `greeting` has a component named `size()`. This **component** is a function. With calling this function we can get a `int` number.
    * `' '` is a character literal. **Character literals** are different from **string literals**[CH10]().
    * We can check this expression `std::string stars(10, '*')`. With this expression `stars.size()` = 10, `stars` contain **********.

## Summary for CH1
* char: built-in type, holds ordinary characters
* wchar_t: wide character, holds characters for languages such as Japaness
* string type, define in <string>. If n is `int`, c is `char`, is is `input stream` and os is `output stream`
    * `std::string s;`: define `s` as a variable, type is `char`
    * `std::string t = s;`: `t` as a variable, `s` can be a `string` or `string literal`.
    * `std::string z(n, c);`: `z` as a variable, `n` is the number of `character c`. `c` must be **a char**.
    * `s + t`: The result is **string**. The result contains a copy of the characters in `s` followed by a copy of the characters in `t`.
    * `s.size()`: The number  of characters in `s`.
* Variables can be defined  
    1. `std::string hello = "Hello";  // initial value`
    2. `std::string stars(100, '*');  // construct the cariable`
    3. `std::string name;             // define a variable with an implicit initialization. This variable depends on its type`

# CH2 Looping and counting


















# Reference
1. Jianfeng Qin, Xiaojiang Ke, Tu Lan: Accelerated C++, Practical Programming by Example in Chinese. [PDF](https://github.com/liulinbo/slam/blob/master/Accelerated%20C%2B%2B%E4%B8%AD%E6%96%87%E7%89%88.pdf)
2. Andrew Koening Barbara E. Moo: Accelerated C++, Practical Programming by Example in English.[PDF](https://www.pdfdrive.com/accelerated-c-andrew-koenig-barbara-e-moopdf-e37303819.html)