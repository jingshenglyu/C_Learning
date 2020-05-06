// 8.1 Complex Number Add And Subtraction

#include <iostream>
using namespace std;
class Complex {
public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) { }
    //运算符+重载成员函数
  Complex operator + (const Complex &c2) const;
    //运算符-重载成员函数
  Complex operator - (const Complex &c2) const;
    void display() const;   //输出复数
private:
    double real;    //复数实部
    double imag;    //复数虚部
};

Complex Complex::operator + (const Complex &c2) const{
  //创建一个临时无名对象作为返回值 
  return Complex(real+c2.real, imag+c2.imag); 
}

Complex Complex::operator - (const Complex &c2) const{
 //创建一个临时无名对象作为返回值
    return Complex(real-c2.real, imag-c2.imag); 
}

void Complex::display() const {
    cout<<"("<<real<<", "<<imag<<")"<<endl;
}

int main() {
    Complex c1(5, 4), c2(2, 10), c3;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    c3 = c1 - c2;   //使用重载运算符完成复数减法
    cout << "c3 = c1 - c2 = "; c3.display();
    c3 = c1 + c2;   //使用重载运算符完成复数加法
    cout << "c3 = c1 + c2 = "; c3.display();
    return 0;
}