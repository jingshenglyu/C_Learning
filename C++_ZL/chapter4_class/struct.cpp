// Using struct to record the information for students 

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Student
{
    int num;
    string name;
    char sex;
    int age;
};

//main
int main()
{
    Student stu = {97001, "John Smith", 'M', 23};
    cout << "Num: " << stu.num << endl;
    cout << "Name: " << stu.name << endl;
    cout << "Sex: " << stu.sex << endl;
    cout << "Age: " << stu.age << endl;

    return 0;
}