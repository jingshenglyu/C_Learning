// 8.4 virtual func.

#include<iostream>
using namespace std;

class Base1
{
public:
    virtual void display() const;   // virtual func.
};

void Base1::display() const
{
    cout << "Base1::display()" << endl;
}

class Base2: public Base1   //public inheritance class Base2
{
public:
    void display() const;   //覆盖基类的虚函数
};

void Base2::display() const
{
    cout << "Base2::display()" << endl;
}

class Derived: public Base2     //public inheritance class Derived
{
public:
    void display() const;   //覆盖基类的虚函数
};

void Derived::display() const
{
    cout << "Derived::display()" << endl;
}

void fun(Base1 *ptr)    //参数为指向基类对象的指针
{
    ptr -> display();   //对象指针 -> 成员名
}

int main()
{
    Base1 base1;        //define class Base1
    Base2 base2;        //define class Base2
    Derived derived;    //define class Derived
    fun(&base1);        //Call fun function using obj. of Base1
    fun(&base2);        //Call fun function using obj. of Base2
    fun(&derived);      //Call fun function using obj. of Derived
    
    return 0;
}