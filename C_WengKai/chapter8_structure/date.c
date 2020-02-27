// output a date

#include<stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main(int argc, char const *argv[])
{
    struct date today;

    today = (struct date){02, 27, 2020};

    struct date day;

    day = today;
    day.year = 2015;

    printf("Today's date is %i-%i-%i.\n",
    today.month, today.day, today.year);

    printf("Today's date is %i-%i-%i.\n",
    day.month, day.day, day.year);
    
}
