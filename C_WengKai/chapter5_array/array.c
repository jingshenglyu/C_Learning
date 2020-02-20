// test array
// We want to know, how many number appear.
#include<stdio.h>

int main()
{
    const int number = 10;  // size of array
    int x;
    int count[number];  // define an array
    int i;

    for ( i = 0; i < number; i++)   // init
    {
        count[i] = 0;
    }
    scanf("%d", &x);
    while (x != 1)
    {
        if (x >=0 && x <= 9)
        {
            count[x]++;     //array  operation
        }
        scanf("%d", &x);
    }
    for(i = 0; i < number; i++)     // traversal the array and output
    {
        printf("%d:%d\n", i, count[i]);
    }

    return 0;
}