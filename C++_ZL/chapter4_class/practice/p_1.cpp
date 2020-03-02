/* Declaration a class, "CPU", include(rank, frequency,voltage)
Public member: run, stop
Rank is enumation
enum CPU_Rank {P1 = 1, P2, P3, P4, P5, P6, P7}
Unit of frequency: MHz (int)
Type of voltage: V (float) */

#include <iostream>
using namespace std;

enum CPU_Rank
{
    P1 = 1,
    P2,
    P3,
    P4,
    P5,
    P6,
    P7
};

class CPU
{
private:
    CPU_Rank rank;
    int freq;
    float volt;

public:
    CPU(CPU_Rank r, int f, float v);    //constructor

    ~CPU(); //destructor

    CPU_Rank GetRank() const { return rank; }
    int GetFrequency() const { return freq; }
    float GetVoltage() const { return volt; }

    void SetRank(CPU_Rank r) { rank = r; }
    void SetFrequency(int f) { freq = f; }
    void SetVoltage(float v) { volt = v; }

    void Run() { cout << "CPU is running!" << endl; }
    void Stop() { cout << "CPU is stopped!" << endl; }
};

CPU::CPU(CPU_Rank r, int f, float v) //constructor
{
    rank = r;
    freq = f;
    volt = v;
    cout << "Constructe a CPU!" << endl;
}

CPU::~CPU()
{
    cout << "Destruct a CPU!" << endl;
}

int main()
{
    CPU a(P6, 300, 2.8);
    a.Run();
    a.Stop();
}
