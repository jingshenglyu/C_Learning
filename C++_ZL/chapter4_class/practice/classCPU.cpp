/*
Create a class CPU:
Frequence of time <= 3000MHz 
Words(Length of byte): 32-bit or 64-bit
Core: Single-core, Dual-core and Quad(four)-core
Hyper-threading?
*/

#include<iostream>
using namespace std;

enum Core {Single, Dual, Quad};
enum Words {Bit32, Bit64};
enum HyperThred {Support, NotSupport};
class CPU
{
private:
    unsigned frequence: 32;
    Core CoreType: 3;
    Words WordLen: 2;
    HyperThred mode: 2;
public:
    CPU(unsigned frequence, Core type, Words length, HyperThred mode):
        frequence(frequence), CoreType(type), 
        WordLen(length), mode(mode){}   //constructor:parameter list
    void show();
};

void CPU::show()
{
    cout << "Frequence: " << frequence << "MHz" << endl;
    cout << endl;
    cout << "Core: ";
    switch ((unsigned)CoreType)
    {
    case Single: cout << "Single-Core" << endl; break;
    case Dual:   cout << "Dual-Core"   << endl; break;
    case Quad:   cout << "Quad-Core"   << endl; break;
    default: break;
    }
    cout << endl;

    cout << "Words: ";
    switch ((unsigned)WordLen)
    {
    case Bit32: cout << "32-Bit" << endl; break;
    case Bit64: cout << "64-Bit" << endl; break;
    default: break;
    }
    cout << endl;

    cout << "Hyper-Thread: ";
    switch ((unsigned)mode)
    {
    case Support: cout << "Support Hyper-Thread"; break;
    case NotSupport: cout << "Not Support Hyper-Thread"; break;
    default: break;
    }
    cout << endl;
}

int main()
{
    CPU c(3, Quad, Bit64, Support);
    cout << "Size of Class CPU: " << sizeof(CPU) << endl;
    cout << endl;
    c.show();

    return 0;
}



