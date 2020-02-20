// Using Gregory's form calculate the approximate number of PI 
// while

#include<stdio.h>
#include<math.h>

int main(void)
{
    int demoninator, flag;
    double item, pi;    // store the cumulatice sum

    // init
    flag = 1;
    demoninator = 1;
    item = 1.0;
    pi = 0;

    while (fabs(item) >= 0.0001)    //If |item| >= 0.0001, run this loop
    {
        item = flag * 1.0 / demoninator;
        pi = pi + item;
        flag = -flag;
        demoninator = demoninator + 2;
    }

    pi = pi * 4;
    printf("pi = %.4f\n", pi);

    return 0;
    
}