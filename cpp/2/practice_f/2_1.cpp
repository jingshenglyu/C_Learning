/*
Print two triangle(upper and lower)

ROW: n
LINE: m

*/ 

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    int n, m, row_max, line_max, inc;
//    n_max == 10;
//    m_max == 17;
    inc = 1;
    cout << "Please input a number of n:"
    cin  << n;

    cout << "  "; /*print two space at firtst*/

    for( n = 1; n <= 5; n++ )
    {
        cout << setw(2) << n;
    }
    cout << "\n";
    cout << "-------------------------------------------\n";

    /*print row by row*/

    for( n = 1; n <= 5; n++) /*print n row, n is the number of the row*/
    {
        cout << setw(2) << n;

        for( m = 1; m <= 16; m++)
            {


            }


    }







}
