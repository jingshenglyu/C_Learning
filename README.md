<!--
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-08 17:23:44
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-21 07:49:42
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
    - [2.1. Question:](#21-question)
    - [2.2. Writing an unknown number of rows](#22-writing-an-unknown-number-of-rows)
        - [2.2.1. While statement](#221-while-statement)
        - [2.2.2. Design for while-loop](#222-design-for-while-loop)
    - [2.3. Writing a row](#23-writing-a-row)
    - [2.4. Writing border characters](#24-writing-border-characters)
    - [2.5. Writing nonborder characters](#25-writing-nonborder-characters)
    - [2.6. Optimizazion](#26-optimizazion)
        - [2.6.1.](#261)
        - [2.6.2. For-looping replace While-looping](#262-for-looping-replace-while-looping)
        - [2.7. Counting](#27-counting)
    - [Summary for CH2](#summary-for-ch2)
- [CH3 Working with batches of data](#ch3-working-with-batches-of-data)
    - [3.1. Output the final grade with the average of homeworks](#31-output-the-final-grade-with-the-average-of-homeworks)
    - [3.2. Output the final grade with the median of homeworks](#32-output-the-final-grade-with-the-median-of-homeworks)
    - [Summary of CH3](#summary-of-ch3)
- [CH4 Organizing programs and data](#ch4-organizing-programs-and-data)
    - [4.1. Organizing computations](#41-organizing-computations)
    - [4.2. Organizing data](#42-organizing-data)
    - [4.3. Putting it all together](#43-putting-it-all-together)
    - [4.4. Partitioning the grading program](#44-partitioning-the-grading-program)
    - [4.5. The revised grading program](#45-the-revised-grading-program)
    - [4.6 Summary](#46-summary)
    - [4.1. Organizing computations](#41-organizing-computations-1)
        - [4.1.1. Using function:](#411-using-function)
        - [4.1.2. Define a function:](#412-define-a-function)
        - [4.1.3. Find median](#413-find-median)
        - [4.1.4. Two grade functions](#414-two-grade-functions)
        - [4.1.5. Reading homework grades](#415-reading-homework-grades)
        - [4.1.6. Three kinds of function parameters](#416-three-kinds-of-function-parameters)
        - [4.1.7. Using functions to calculate a student's grade](#417-using-functions-to-calculate-a-students-grade)
    - [4.2. Organizing data](#42-organizing-data-1)
        - [4.2.1. Reading data](#421-reading-data)
        - [4.2.2. Managing the student record](#422-managing-the-student-record)
        - [4.2.3. Generating the report](#423-generating-the-report)
    - [4.3. Putting all together](#43-putting-all-together)
    - [4.4. Summary](#44-summary)
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
```
#include <iostream>
#include <string>
// say what standard-library names we use
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    // ask for the person's name
    cout << "Please enter your first name: ";
    // read the name
    string name;
    cin >> name;
    // build the message that we intend to write
    const string greeting = "Hello, " + name + "!";
    // the number of blanks surrounding the greeting
    const int pad = 1;
    // the number of rows and columns to write
    const int rows = pad * 2 + 3;
    const string::size_type cols = greeting.size() + pad * 2 + 2;
    // write a blank line to separate the output from the input
    cout << endl;
    // write rows rows of output
    // invariant: we have written r rows so far
    for (int r = 0; r != rows; ++r)
    {
        string::size_type c = 0;
        // invariant: we have written c characters so far in the current row
        while (c != cols)
        {
            // is it time to write the greeting?
            if (r == pad + 1 && c == pad + 1)
            {
                cout << greeting;
                c += greeting.size();
            }
            else
            {
                // are we on the border?
                if (r == 0 || r == rows - 1 ||
                    c == 0 || c == cols - 1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
```

## 2.1. Question:
* The code of §1.2. **isn't** easily to **change**. If we want to make a simple change to the output format, we must **rewrite** the program. 

## 2.2. Writing an unknown number of rows
* How many rows should we output?   
    1. the number of blanks aroun the greeting:  
        const int pad = 1;
    
    2. total number of rows to write:  
        const int rows = pad * 2 + 3;
        
### 2.2.1. While statement
* The followed code is **while statement**.   
```
while (condition)
    statement   // Here is often called the while body
```
* For this statement, it can be just **a statement**(end with ";"), but it can also be **a blcok**(end with "}"). From [CH0.7]() we know that a blcok is **a scope**.

* In this example, we use two operator `!=` and `++`. 
    * This expression `r != rows` is **bool**. It returns only `True` or `False`. 
    * `++` is **increment operator**. `++r` can also be written `r = r + 1`. For [CH5.1.2]() is `++` so important.

### 2.2.2. Design for while-loop
* A while finishes means its condition is **false**. 
* **Loop invariant**: It is a good property for while-loop. The while-loop is about to test its conditon and the loop invariant will be **true**. 

## 2.3. Writing a row
* Calculate the number of **characters** for one line.   
This number is the "size of `greeting`" + "pad * 2"(2 multiply the number of pad) + 2(the number of '*').  
* Code is:  
`const string::size_type cols = greeting.size() + pad * 2 + 2;`
    * We define a **const** for `cols`. If it will be defined and it can't be changed. 
    * This type(`std::string::size_type`) is a type of **variable** to contain the size of a string. We can also use `int`. But there is a risk because of a too long string. **It's a good habit to use the type that the library defines as being appropriate for the specific purpose. 
    * `std::string::size_type` is also an **unsigned** type-objects([CH8.1.3]()) because it isn't a negative number.

## 2.4. Writing border characters
```
while (c != cols)
{
    // is it time to write the greeting?
    if (r == pad + 1 && c == pad + 1)
    {
        cout << greeting;
        c += greeting.size();
    }
    else
    {
        // are we on the border?
        if (r == 0 || r == rows - 1 ||
            c == 0 || c == cols - 1)
            cout << "*";
        else
            cout << " ";
        ++c;
    }
}
```
* **if statement**: which we use to determine whether it is time to write an asterisk(*). 
```
if(condition)
    statement1
else
    statement2
```
* **Logical operators**: `r == 0 || r == rows-1 || c == 0 || c == cols-1`  
`=`: assignment  
`==`: test for equality

## 2.5. Writing nonborder characters
* What are not **nonborder** characters?
    * space or part of the greeting.
* Output, whether we should output `*`, or `" "`.
```
if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1)
    cout << "*";
else
    cout << " ";
++c;
```
## 2.6. Optimizazion
### 2.6.1.
* **Using declaration**: We can use `using std::cout` at first to declare scope. Then in our code, we don't need to write `std::` every time.

### 2.6.2. For-looping replace While-looping
* We can use:
```
for(r = 0; r != rows; ++r) {
    statement;
}
```
replace
```
int r = 0;
while (r != rows) {
    statement;
    ++r;
}
```
### 2.7. Counting
* We should use **[0, rows)** to make a condition for looping instead of [1, rows], because we can count directly the number of looping, that is rows - 0.

## Summary for CH2
* operands' order
* operators' **precedence** ([C++ Operator Precedence Table](https://en.cppreference.com/w/cpp/language/operator_precedence))
* Usual arithmetic conversions
* Half-open range [0, rows)
* Looping (include conditions and statements)

# CH3 Working with batches of data

* By writing a program that **reads** a student's exam and homework **grades** and *computes a final grade*.
* Rules: final exam for 40%, midterm for 20% and the **average homework grade** for 40%, together are final grade.
```
#include <iomanip>
#include <ios>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::streamsize;
using std::string;
int main()
{
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;
    // ask for and read the midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm, final;
    cin >> midterm >> final;
    // ask for the homework grades
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
    // the number and sum of grades read so far
    int count = 0;
    double sum = 0;
    // a variable into which to read
    double x;
    // invariant:
    // we have read count grades so far, and
    // sum is the sum of the first count grades
    while (cin >> x)
    {
        ++count;
        sum += x;
    }
    // write the result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         << setprecision(prec) << endl;
    return 0;
}
```        
## 3.1. Output the final grade with the average of homeworks
* For this problem we should have 3 steps.  
    1. Read the name of this student.
    2. Read the midterm and final grade.
    3. Calculate the average grades.  
        * Count the number and the grade of the homeworks,  and make a sum

* We use 2 header to solve this problem.   
    * `<ios>` --> define a type **streamsize**: `streamsize` is the type that the io library uses to represent **sizes**.
    * `<iomanip>` --> define a munipulator `setprecision`
        * C++ put the `endl` into the `<iostream>` because it is usually used.

* The program will ask for the student's homework grades, which it continues to read. We should use **end-of-file signal** to finish it.  
    * For windows **CTRL + Z**
    * For Unix/Linux **CTRL + D**

* **double** better as float 

* If a statement is too long, we can use this form 
    ```
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
    ```
    It has the same effect as 
    ```
    cout << "Enter all your homework grades, followed by end-of-file: ";
    ```

* **Defaul-initialization**:  
    It is **very import**. When creating a variable, the system randomly allocates **memory** to **uninitialized variables** whose values are also composed of this **random** information.  

* Condition: `cin >> x`, it will be always right, when we don't use **end-of-file signal** to end it.

* Set precision to 3:  
    * We call a **member function** named `precision` of `cout` and define a type `streamsize` to represent sizes.

* (?)`while( cin>>x )`: We explain this in [CH4.1.3]() and [CH12.5]().

## 3.2. Output the final grade with the median of homeworks

* Using medians:  
    Define `homework`. It is a **vector** and can store `double`.  
    **Vector** is a **container** that holds a collection of values. We can use a language *feature* named **template classes** to define the **vector type**. [CH11]().
    
* push_back(): member function. This function belong to **vector class**. `push_back()` pushes its argument onto the back of a vector. 

* To find the median:  
    1. We should know `if( size(homework) == 0){}`
    2. Calculate the **location of the middle elements**.
    
    * Get the size of homework:  
        * We use a language facility named **typedef** to get the size of homework. Because this type `vector<double>::size_type` of vector is too difficult to write. `vec_sz` is complett same with `vector<double>::size_type` but easier.
        ```
        typedef vector<double>::size_type vec_sz;
        vec_sz size = homework.size();
        ```
    
    * Return:  
        * 0 --> success
        * 1 --> fail
        
* How to get the median of homeworks?
    * We define a **index** `mid` to describe the median of homeworks' value.
    * The number of homeworks are **even**:
        * median is (homework[mid] + homework[mid-1]) / 2
    * The number of homeworks are **odd**:
        * median is (homework.size() - 1) / 2
        
* `sort(homework.begin(), homework.end())`:  
    `sort()` belongs to header <algorithm>  
    `.begin()` und `.end()` are two member function of **vector class**. 
    
* operator:  
We can use **remainder** operator `%` and **conditional** operator `?=` as a shorthand of the if-statement. 
    ```
    vec_sz mid = size/2;
    double median;
    median = size % 2 == 0 ? (homework[mid] + homework[mid-1]) / 2
    : homework[mid];
    ```
* [Code after optimation](https://github.com/jingshenglyu/C_Learning/blob/master/Cpp_practice/3.2._prac.cpp)

## Summary of CH3
* For local variables it will be **default initialized** without *initialization*.
* typedef type name: a synonym for type
* **`<vector>`**: a **container** can grow dynamically.
* **`vector<T>::size_type`**: A type guaranteed to be able to **hold** the number of elements in **the largest** possible *vector*.

* `v.begin() and v.end()`: Return a value that denotes the **first**(**last**) element in `v`.

* `vector<T> v`: create an **empty vector** that can hold elements of type `T`.

* `v.push_back(e)`: add a new **element** initialized `e` to this vector

* v[i]: index `v.size()`: return **the number of elements** in `v`

* **others**:
    * `sort(b, e)`: sort [b, e). Defined in `<algorithm>`

    * `max(e1, e2)`: return the larger

    * `while(cin >> x)`: Reads a value of an type into x and tests the state of stream. If the stream is in an **error state**, the test **fails**; otherweise, the test **succeeds** and **run this loop**.

    * `s.precision(n)`: **set** the precision of stream `s` to `n`

    * `setprecision(n)`: **Return** a value that has the effect of **calling `s.precision(n)`**. Defined in `<iomanip>`

    * (?)`streamsize`: The type of the value expected by setprecision and returned by precision . Defined in
    `<ios>` .

# CH4 Organizing programs and data
## 4.1. Organizing computations
## 4.2. Organizing data
## 4.3. Putting it all together
## 4.4. Partitioning the grading program
## 4.5. The revised grading program

## 4.6 Summary
* Difference between **Argument** and **Parameter** in C/C++ with Examples
    * An argument is referred to the values that are passed within a function when the function is called. These values are generally the source of the function that require the arguments during the process of execution. These values are assigned to the variables in the definition of the function that is called. The type of the values passed in the function is the same as that of the variables defined in the function definition. These are also called Actual arguments or Actual Parameters.  

      Example: Suppose a sum() function is needed to be called with two numbers to add. These two numbers are referred to as the arguments and are passed to the sum() when it called from somewhere else.

    * The parameter is referred to as the variables that are defined during a function declaration or definition. These variables are used to receive the arguments that are passed during a function call. These parameters within the function prototype are used during the execution of the function for which it is defined. These are also called Formal arguments or Formal Parameters.

      Example: Suppose a Mult() function is needed to be defined to multiply two numbers. These two numbers are referred to as the parameters and are defined while defining the function Mult().

## 4.1. Organizing computations
### 4.1.1. Using function:  
    * **instead of redoing** the computation  
    * easier for us to **change the computation**  

### 4.1.2. Define a function: 
* Code: 
    ```
    // compute a student's overall grade from midterm and final exam grades and homework grade
    double grade(double midterm, double final, double homework)
    {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
    }
    ```

    * Parameter list:  
    It can be **variable**(`double grade(midterm)`) or **expression**(`double grade(sum/count)`).
    * When we call a funcion, we **must provide** parameter.
    * What is **call by value**?  
    **Parameter** takes on a copy of the value of the **argument**.
        * *So, for example, when we call grade(midterm, final, sum /
count) , the grade function's parameters are initialized to copies of the arguments' values, and do
not refer directly to the arguments themselves. This behavior is often called call by value, because
the parameter takes on a copy of the value of the argument.*
### 4.1.3. Find median
* Code: 
    ```
    double median(vector<double> vec)
    {
        typedef vector<double>::size_type vec_sz;
        vec_sz size = vec.size();
        if (size == 0)
        throw domain_error("median of an empty vector");
        sort(vec.begin(), vec.end());
        vec_sz mid = size / 2;
        return size % 2 == 0 ? (vec[mid] + vec[mid-1]) / 2 : vec[mid];
    }
    ```
* `throw domain_error`:  
We should make a **error warning** for the user. That more general way is to **throw an exception** if the `vector` is empty.  
When a program **throws an exception**, execution **stops** in the part of the program in which the throw
appears, and **passes to another part** of the program, along with an ***exception object***, which
contains information that the caller can use to act on the exception.
* `domain_error`: Defined in `<stdexcept>`.

* Rewrite the calculation's Code:  
```
double grade(double midterm, double final, const vector<double>& hw)
{
    if (hw.size() == 0)
    throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}
```
* `const vector<double>& hw`: **reference** to *vector* of `const double`  
* **Reference**:
    ```
    vector<double> homework;
    vector<double>& hw = homework; // hw is a synonym for homework
    ```
    * We are saying that `hw` is **another name** for `homework`. Anything we do to `hw` is *equivalent* to doing the same thing to `homework`. **`hw` is a *synonym* for `homework`**. Using `const` we can't change the value of `chw` in  `const vector<double>& chw=homework`.

* Detail: Copying the arguments into the parameters.(实参会拷贝到形参中，而不是改变形参。)

### 4.1.4. Two grade functions
* By §4.1..2 we have defined a function named `double grade(double midterm, double final, double homework)`.
```
// 4.1. Func
double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}
```
But now by §4.1.3. We have already defined a function named `double grade(double midterm, double final, const vector<double>& hw)` too. It is called **overloading**, here is called **function overloading**.
```
double grade(double midterm, double final, const vector<double>& hw)
{
    if (hw.size() == 0)
    throw domain_error("student has done no homework");
    return grade(midterm, final, median(hw));
}
```
* It will not be confused. Because we will call a function with **their parameter list**. They are different. 

### 4.1.5. Reading homework grades
```
// read homework grades from an input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw)
{
    if (in) {
        // get rid of previous contents
        hw.clear() ;
        // read homework grades
        double x;
        while (in >> x)
        hw.push_back(x);
        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}
```
1. clear the history homework grades 
2. read the homework grades
3. clear the homework grades for the next student
* Ref<sup>[3]</sup>

### 4.1.6. Three kinds of function parameters
* `median(vector<double>)`:  
Therefore, calling that
function **causes** *the argument* **to be copied**, even though that argument might be a huge vector . The median function **sorts its
parameter**. *If it did not copy its argument*, then calling median(homework) would **change the value
of homework**.
* `grade(const vector<double>&)`:  
The `&` asks the implementation not to copy the argument, and the
`const` promises that the program will not change the parameter.Such parameters are an important
technique for making programs more efficient. They are a good idea whenever the function will **not
change the parameter's value**, and the parameter is of a type, such as vector or string , with values
that might be time-consuming to copy.
* `read_hw(vector<double>&)`:  
Without the const . Again, the `&`
asks the implementation to **bind the parameter** directly to the **argument**, thus avoiding having to
copy the argument. But here, the reason to **avoid the copy** is that *the function* intends to *change the
argument's value*.

### 4.1.7. Using functions to calculate a student's grade
* Code:
    ```
    // include directives and using-declarations for library facilities
    // code for median function from §4.1.1/53
    // code for grade(double, double, double) function from §4.1/52
    // code for grade(double, double, const vector<double>&) function from §4.1.2/54
    // code for read_hw(istream&, vector<double>&) function from §4.1.3/57
    int main()
    {
        // ask for and read the student's name
        cout << "Please enter your first name: ";
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;
        // ask for and read the midterm and final grades
        cout << "Please enter your midterm and final exam grades: ";
        double midterm, final;
        cin >> midterm >> final;
        // ask for the homework grades
        cout << "Enter all your homework grades, "
            "followed by end-of-file: ";
        vector<double> homework;
        // read the homework grades
        read_hw(cin, homework);
        // compute and generate the final grade, if possible
        try
        {
            double final_grade = grade(midterm, final, homework);
            streamsize prec = cout.precision();
            cout << "Your final grade is " << setprecision(3)
                 << final_grade << setprecision(prec) << endl;
        }
        catch (domain_error)
        {
            cout << endl
                 << "You must enter your grades. "
                "Please try again."
                 << endl;
            return 1;
        }
        return 0;
    }
    ```
* **try statement**:  
If a `domain_error` occurs anywhere in these statements, then it stops executing them and continues with the **catch clause**. If the statements between `try` and `catch` complete **without throwing an exception**, then the program **skips** the **catch clause** entirely and continues with the next statement.
* A good rule for **exception**:  
*Throwing an exception* is a **side effect**, so a statement that might **throw an exception** should **not cause any other side effects**, *particularly including input and output*.(抛出异常后(try{**这里**})，该语句中不应该再包含其他输入/输出语句)

## 4.2. Organizing data
### 4.2.1. Reading data
* We can define a `struct` including *name*, *midterm*, *final* and *homeworks*. 
```
struct Student_info
{
    string name;
    double midterm, final;
    vector<double> homework;
}; // note the semicolon it's required
```

### 4.2.2. Managing the student record
* Using `sort()` to compare the students' name and sort them. But we can only use `sort()` to sort the **vector**. If we want to sort the object - students, we must define a new function - *compare()* again.
```
bool compare(const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}
```


### 4.2.3. Generating the report
* `max()`:  
The type of parameters list must be same. We discuss them again in [§8.1.3](). 

* `setw()`:  
set the width of the characters for the output's format.  
We write the **name** member from that object, using `setw()` to pad the output.   
**We can also use an constructed `string` of blanks to pad the output.**   
For example: `string(maxlen + 1 - students[i].name.size(), ' ')` and `setw(maxlen + 1) << students[i].name`

## 4.3. Putting all together
* Header files should ensure that it is *safe to include the file* more than once as part of compiling the program. We do so by adding some ***preprocessor*** to the file.
```
#ifndef GUARD_median_h
#define GUARD_median_h
// median.h—final version
#include <vector>
double median(std::vector<double>);
#endif
```
* `#ifndef`: *if not define*   

## 4.4. Summary
* Program structure:  
    * #include<system-header>
    * #include"user-define-header-file-name"

* Types:  
    * `T&`: A **reference** to the type `T`
    * `const T&`: A **reference** to the type `T` that may **not** be used to **change the vaule** to which the reference is bound.

* Structures:  
A structure is a type that contains zero or more members.
```
struct type-name {
    type-specifier member-name;
    ...
}; // note the semicolon
```

* Functions:  
A function must be **declared** in every source file that uses it, and **defined onlyonce**.
```
ret-type function-name (parm-decls)  //function declaration
[inline] ret-typefunction-name (parm-decls) {  //function definition
    // function body goes here;
}
```

* Exception handling:  
```
try { //code

Initiates a block that might throw an exception.

} catch(t){ /*code*/ }

Concludes the try block and handles exceptions that match the type t . The code following
the catch performs whatever action is appropriate to handle the exception reported in t .

throw e;

Terminates the current function; throws the value e back to the caller.
```

* Exception classes:  

`logic_error`,   `domain_error`,  `invalid_argument`  

`length_error`,   `out_of_range`,   `runtime_error`  

`range_error`,   `overflow_error`,    `underflow_error`

`e.what()`: returns a value that reports on what happened to cause the error.

* Library facilities:  
`s1 < s2`:  
Compares **string's** `s1` and `s2` by applying *dictionary ordering*.

`s.width(n)`:
Sets the **width** of **stream** `s` to `n` for the next output operation. Call `width(0)` to **reset**
the width.

`setw(n)`: 
Returns a value of type **streamsize** that, when written on an output stream `s` , has
the effect of calling `s.width(n)` .




















# Reference
1. Jianfeng Qin, Xiaojiang Ke, Tu Lan: Accelerated C++, Practical Programming by Example in Chinese. [PDF](https://github.com/liulinbo/slam/blob/master/Accelerated%20C%2B%2B%E4%B8%AD%E6%96%87%E7%89%88.pdf)
2. Andrew Koening Barbara E. Moo: Accelerated C++, Practical Programming by Example in English.[PDF](https://www.pdfdrive.com/accelerated-c-andrew-koenig-barbara-e-moopdf-e37303819.html)
3. Page. 57 --- Jianfeng Qin, Xiaojiang Ke, Tu Lan: Accelerated C++, Practical Programming by Example in Chinese. [PDF](https://github.com/liulinbo/slam/blob/master/Accelerated%20C%2B%2B%E4%B8%AD%E6%96%87%E7%89%88.pdf)
