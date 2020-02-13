/* 01.12.2006 is Friday. 
   We want to know the which day is the other day.
*/

#include<iostream>
#include<iomanip> 
// manipulate 操纵，指定输入输出格式
using namespace std;

typedef enum {SUN, MON, TUE, WED, THU, FRI, SAT} WEEKDAY;
// define the type of the enumration

int main()
{
    int date;
    const WEEKDAY date_1 = FRI;
    WEEKDAY weekday;
    /* input part */

    cout << "The program gets a date(1~31),\n";
    cout << "and prints a calender of 2006-12(just the date).\n";
    cout << "The date: ";
    cin >> date;

    if(date < 1 || date > 31)
    {
     /*The input of the day is wrong. It will give the ERROR and quit.*/

     cout << "Date error!\n";
     return 1;
     }
     /* 1.return 0 has two means.
          1). It is used the end of the MAIN FUNCTION. It means that the function is ENDED.
          2). It means FALSE. Always it will be used in bool datytype. 
          
        2. return 1 means that this statement is true.
     */
     

     // calculate the day
     weekday = (WEEKDAY)((date + (int)date_1 - 1) % 7);
     /* (int): 表示将枚举文字的量转换为整数int,参与运算(Fri是周五，转换之后为5，
               若此时date为3号，那么3+(5-1)%7,结果为0）
               余数为0，那么重新再转换为WEEKDAY，那么结果为Sunday.
     ** 枚举文字 >> int(参与运算) >> 枚举文字 
     */

     // output
     cout << "Calender 2006-12\n";
     cout << "--------------------------\n";
     cout << "Su  Mo  Tu  We  Th  Fr  Sa\n";
     cout << "--------------------------\n";

     // Output the day of the week
     if(weekday == SUN)        cout << setw(2)  << date;
     else if(weekday == MON)   cout << setw(6)  << date;
     else if(weekday == TUE)   cout << setw(10) << date;
     else if(weekday == WED)   cout << setw(14) << date;
     else if(weekday == THU)   cout << setw(18) << date;
     else if(weekday == FRI)   cout << setw(22) << date;
     else                      cout << setw(26) << date;
     /* 操纵算子setw(): set width设置输出宽度
        ()内的数字表示设置的宽度是多少字符.    
     */
     
     cout << endl << "-----------------------\n";
     return 0;

}

