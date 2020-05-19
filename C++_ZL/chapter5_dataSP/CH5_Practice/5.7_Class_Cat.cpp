/* practice 5.7 
Define a Cat Class, static member numOfCats, to calculate the number of the Cats.
static member function: getNumOfCats() */

#include <iostream>
using namespace std;

class Cat
{
private:
    int itsAge;
    static int numOfCats;

public:
    Cat(int age) : itsAge(age)
    {
        numOfCats++;
    }

    virtual ~Cat();
    virtual int getAge()
    {
        return itsAge;
    }

    virtual void setAge(int age)
    {
        itsAge = age;
    }

    static int getNumOfCats() { return numOfCats; }
};

Cat::~Cat()
{
    numOfCats--;
}

int Cat::numOfCats = 0;

void telepathicFunction();

int main()
{
    const int maxCats = 5;
    Cat *catHouse[maxCats];
    int i;
    for ( i = 0; i < maxCats; i++)
    {
        delete catHouse[i];
        telepathicFunction();
    }

    return 0;  
}

void telepathicFunction()
{
    cout << "There are " << Cat::getNumOfCats() << " cats alive!\n";
}