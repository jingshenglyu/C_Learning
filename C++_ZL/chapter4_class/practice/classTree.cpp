/*define a tree
Member: ages
Member func: grow(int years) -> ages + year
             age() -> show the ages
*/

#include<iostream>
using namespace std;

class Tree
{
private:
    int ages;
public:
    Tree(int n = 0);        //constructor
    ~Tree();                //destructor
    void grow(int years);   //member function
    void age();             //member funciton
};  

Tree::Tree(int n)
{
    ages = n;
}

Tree::~Tree()
{
    age();
}

void Tree::grow(int years)
{
    ages += years;
}

void Tree::age()
{
    cout << "The age of this tree is: " << ages << endl;
}

int main()
{
    Tree t(12);

    t.age();
    t.grow(4);

    return 0;
}
