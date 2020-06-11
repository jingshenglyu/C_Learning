/*
 * @Author: Jingsheng Lyu
 * @Date: 2020-06-11 21:19:24
 * @LastEditors: Jingsheng Lyu
 * @LastEditTime: 2020-06-11 21:43:32
 * @FilePath: /C_Learning/Cpp_practice/3.1._Prac.cpp
 */

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

// #include<iostream>
// #include<ios>
// #include<iomanip>
// #include<string>
// using namespace std;

// int main(){
    
//     // Read a name 
//     cout << "Please enter the name of a student: " << endl;
//     string name;
//     cin >> name;

//     // Read the final / mittel grades
//     cout << "Please enter the final grade and mittel grade: " << endl;
//     double final=0.0, mittel=0.0;
//     cin >> final >> mittel;

//     // Calculate the average grades of HW
//     int count=0;
//     double sum=0.0;

//     // Please enter the HW's grade
//     double HW=0.0;
//     for (int count=0; cin >> HW; ++count){
//         sum += HW;
//     }
    
//     // average grade of HW
//     double average_HW = 0.0;
//     average_HW = sum / count;

//     // Output the result
//     cout << "The final grade for this semester is " << setprecision(3)
//          << final*0.4 + mittel*0.2 + average_HW*0.4 << endl;

//     return 0;

// }