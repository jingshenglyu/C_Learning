/*
Print the Nine-by-nine Multiplication Table(Only the upper traingular table)

    **************************
    * Author : Jingsheng Lyu *
    *                        *
    * Date   : 11.02.2020    *
    **************************

*/

#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int i,j;
    /*print the title of this table*/
    
    cout << "    Nine-by-nine Multiplication Table\n";
    cout << "-----------------------------------------\n";
    cout << "  "; /* print two spaces and spring the left row */
    
    for(i = 1; i <= 9; i++ )

    /* ***************
       for循环的初始条件用赋值符号“=”，不能用等号“==”，所子此例中初始条件为：“i=1“，不是“i==1“。
       
       ***************  */

    {
        cout << setw(4) << i;
    }
    cout << "\n";
    cout << "-----------------------------------------\n";
    /* line by line to print */

    for( i = 1; i <= 9; ++i ) // print nine lines and i is the number of the line
    {

        cout << setw(2) << i; /* the left row(1~9row) */
        for( j = 1; j <= 9; j++ )
        {

            if( j<i )
                cout << "    ";
            else 
                cout << setw(4) << i * j ;
           
        }

        cout << endl; /*end this line and line feed*/
    }

    cout << "-----------------------------------------\n";
    return 0;

}




