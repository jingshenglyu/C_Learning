// typedef

#include<stdio.h>

typedef long int64_t;
typedef struct ADate
{
    int month;
    int day;
    int year;
} Date;  /* define the struct ADate as Date, simply to output */


int main(int argc, char const *argv[])
{
    int64_t i = 10000;
    Date d = {20, 02, 2020};

    printf("%ld\n", i);
    printf("Today is %i-%i-%i.\n",d.month, d.day, d.year);

    return 0;
}