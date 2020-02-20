// Calculate the fatorial from 0 to 10

#include<stdio.h>
int main()
{
    int i, j;
    double item, sum;

    sum = 0;
    for (i = 1; i <= 10; i++)
    {
        item = 1;
        for (j =1; j <= i; j++)
        {
            item = item * j;
        }
        sum = sum + item;
    }
    printf("1! + 2! + 3! + ... + 10! = %e \n", sum); //结果以指数形式输出结果

    return 0;
}